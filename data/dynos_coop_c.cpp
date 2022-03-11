#ifdef COOP
#include "dynos.cpp.h"

extern "C" {

bool dynos_warp_to_level(s32 aLevel, s32 aArea, s32 aAct) {
    return DynOS_Warp_ToLevel(aLevel, aArea, aAct);
}

// -- dynos packs -- //

#define DYNOS_PACK_PATH_SPLIT_LEN 12

int dynos_packs_get_count(void) {
    return DynOS_Gfx_GetPacks().Count();
}

const char* dynos_packs_get(s32 index) {
    std::string path = DynOS_Gfx_GetPacks()[index]->mPath;

    // extract basename
    const char* cpath = path.c_str();
    const char* ctoken = cpath;
    while (*ctoken != '\0') {
        if (*ctoken == '/' || *ctoken == '\\') {
            if (*(ctoken + 1) != '\0') {
                cpath = (ctoken + 1);
            }
        }
        ctoken++;
    }

    return cpath;
}

bool dynos_packs_get_enabled(s32 index) {
    return DynOS_Gfx_GetPacksEnabled()[index];
}

void dynos_packs_set_enabled(s32 index, bool value) {
    DynOS_Gfx_GetPacksEnabled()[index] = value;
}

}
#endif
