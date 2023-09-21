#include "djui.h"
#include "djui_panel.h"
#include "djui_panel_host.h"
#include "djui_panel_join.h"
#include "djui_panel_options.h"
#include "djui_panel_menu.h"
#include "djui_panel_confirm.h"
#include "src/pc/controller/controller_sdl.h"
#include "src/pc/pc_main.h"

bool gDjuiPanelMainCreated = false;

static void djui_panel_main_quit_yes(UNUSED struct DjuiBase* caller) {
    game_exit();
}
static void nothing() {
    return;
}
static void djui_panel_main_credits(struct DjuiBase* caller) {
    struct DjuiThreePanel* panel = djui_panel_menu_create("\\#00b3ff\\CREDITS\n\n\\#ffffff\\Peter Fedak\nPlayerPro342");
    {
    struct DjuiBase* body = djui_three_panel_get_body(panel);
    {
    struct DjuiButton* button1 = djui_button_create(body, DLANG(MAIN, Back), DJUI_BUTTON_STYLE_BACK, djui_panel_menu_back);
    //djui_panel_menu_create("Peter Fedak: for explaining how the original visible PUs romhack works.\nPlayerPro342: for some help");
    djui_cursor_input_controlled_center(&button1->base);
    }
    djui_panel_add(caller, panel, NULL);
    gInteractableOverridePad = true;
    }
}

static void djui_panel_main_quit(struct DjuiBase* caller) {
    djui_panel_confirm_create(caller,
                              DLANG(MAIN, QUIT_TITLE),
                              DLANG(MAIN, QUIT_CONFIRM),
                              djui_panel_main_quit_yes);
}

void djui_panel_main_create(struct DjuiBase* caller) {
    struct DjuiThreePanel* panel = djui_panel_menu_create("\\#ff0800\\SM\\#1be700\\64\\#00b3ff\\VISIBLE\\#donkey\\PUS\n\\#ffef00\\COOP");
    {
        struct DjuiBase* body = djui_three_panel_get_body(panel);
        {
            struct DjuiButton* button1 = djui_button_create(body, DLANG(MAIN, HOST), DJUI_BUTTON_STYLE_NORMAL, djui_panel_host_create);
            djui_cursor_input_controlled_center(&button1->base);

            djui_button_create(body, DLANG(MAIN, JOIN), DJUI_BUTTON_STYLE_NORMAL, djui_panel_join_create);
            djui_button_create(body, DLANG(MAIN, OPTIONS), DJUI_BUTTON_STYLE_NORMAL, djui_panel_options_create);
            djui_button_create(body, DLANG(MAIN, Credits), DJUI_BUTTON_STYLE_NORMAL, djui_panel_main_credits);
            djui_button_create(body, DLANG(MAIN, QUIT), DJUI_BUTTON_STYLE_BACK, djui_panel_main_quit);
        }

        //char* version = get_version_local();
        struct DjuiText* footer = djui_text_create(&panel->base, "beta 35\nvisible PUs version beta 7.2");
        djui_base_set_size_type(&footer->base, DJUI_SVT_RELATIVE, DJUI_SVT_ABSOLUTE);
        djui_base_set_size(&footer->base, 1.0f, 1.0f);
        djui_base_set_color(&footer->base, 50, 50, 50, 255);
        djui_text_set_alignment(footer, DJUI_HALIGN_CENTER, DJUI_VALIGN_BOTTOM);
    }

    djui_panel_add(caller, panel, NULL);
    gInteractableOverridePad = true;
    gDjuiPanelMainCreated = true;
}
