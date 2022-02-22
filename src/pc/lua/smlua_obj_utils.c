#include "types.h"
#include "object_constants.h"
#include "object_fields.h"
#include "src/game/object_helpers.h"

#include "smlua_obj_utils.h"
#include "smlua_model_utils.h"
#include "pc/debuglog.h"


struct Object* spawn_object_sync(enum BehaviorId behaviorId, enum ModelExtendedId modelId, f32 x, f32 y, f32 z) {
    const BehaviorScript* behavior = get_behavior_from_id(behaviorId);
    if (behavior == NULL) {
        LOG_ERROR("failed to find behavior %u", behaviorId);
        return NULL;
    }

    u8 loadedModelId = smlua_model_util_load(modelId);
    if (loadedModelId == 0xFF) {
        LOG_ERROR("failed to load model  %u", modelId);
        return NULL;
    }

    struct Object* obj = spawn_object(gMarioStates[0].marioObj, loadedModelId, behavior);
    if (!network_set_sync_id(obj)) {
        obj->activeFlags = ACTIVE_FLAG_DEACTIVATED;
        LOG_ERROR("failed to set sync id");
        return NULL;
    }

    obj->parentObj = obj;
    obj->oPosX = x;
    obj->oPosY = y;
    obj->oPosZ = z;

    struct SyncObject* so = &gSyncObjects[obj->oSyncID];
    so->extendedModelId = modelId;
    so->o = obj;

    struct Object* spawn_objects[] = { obj };
    u32 models[] = { loadedModelId };
    network_send_spawn_objects(spawn_objects, models, 1);

    return obj;
}
