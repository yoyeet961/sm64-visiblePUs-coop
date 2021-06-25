#include "djui.h"

static void djui_slider_update_value(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    u32  min   = slider->min;
    u32  max   = slider->max;
    u32* value = slider->value;
    djui_base_set_size(&slider->rectValue->base, ((f32)*value - min) / ((f32)max - min), 1.0f);
}

static void djui_slider_set_default_style(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    djui_base_set_border_color(&slider->rect->base, 173, 173, 173, 255);
    djui_base_set_color(&slider->rect->base, 0, 0, 0, 0);
    djui_base_set_color(&slider->text->base, 200, 200, 200, 255);
    djui_base_set_color(&slider->rectValue->base, 200, 200, 200, 255);
}

static void djui_slider_on_hover(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    f32 x = slider->rect->base.elem.x;
    if (gCursorX >= x) {
        djui_base_set_border_color(&slider->rect->base, 0, 120, 215, 255);
        djui_base_set_color(&slider->text->base, 229, 241, 251, 255);
        djui_base_set_color(&slider->rectValue->base, 229, 241, 251, 255);
    } else {
        djui_slider_set_default_style(base);
    }
}

static void djui_slider_on_hover_end(struct DjuiBase* base) {
    djui_slider_set_default_style(base);
}

static void djui_slider_on_cursor_down(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    u32  min   = slider->min;
    u32  max   = slider->max;
    u32* value = slider->value;
    f32 x = slider->rect->base.elem.x;
    f32 w = slider->rect->base.elem.width;
    f32 cursorX = gCursorX;
    cursorX = fmax(cursorX, x);
    cursorX = fmin(cursorX, x + w);
    *value = ((cursorX - x) / w) * (max - min) + min;
    djui_slider_update_value(base);
}

static void djui_slider_on_cursor_down_begin(struct DjuiBase* base, bool inputCursor) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    f32 x = slider->rect->base.elem.x;
    if (gCursorX >= x) {
        djui_base_set_border_color(&slider->rect->base, 20, 170, 255, 255);
        djui_base_set_color(&slider->rect->base, 255, 255, 255, 32);
        djui_base_set_color(&slider->text->base, 229, 241, 251, 255);
        djui_base_set_color(&slider->rectValue->base, 255, 255, 255, 255);
        if (inputCursor) {
            djui_interactable_set_input_focus(base);
        } else {
            slider->base.interactable->on_cursor_down = djui_slider_on_cursor_down;
        }
    }
    else {
        djui_slider_set_default_style(base);
        slider->base.interactable->on_cursor_down = NULL;
    }
}

static void djui_slider_on_cursor_down_end(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    slider->base.interactable->on_cursor_down = NULL;
    djui_slider_set_default_style(base);
}

static void djui_slider_on_focus_begin(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    djui_base_set_border_color(&slider->rect->base, 20, 170, 255, 255);
    djui_base_set_color(&slider->rect->base, 255, 255, 255, 32);
    djui_base_set_color(&slider->text->base, 229, 241, 251, 255);
    djui_base_set_color(&slider->rectValue->base, 255, 255, 255, 255);
}

static void djui_slider_on_focus(struct DjuiBase* base, OSContPad* pad) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    if (abs(pad->stick_x) < 32) { return; }
    int value = *slider->value;
    value += (pad->stick_x > 0) ? 1 : -1;
    value = fmin(value, (int)slider->max);
    value = fmax(value, (int)slider->min);
    *slider->value = value;
    djui_slider_update_value(base);
}

static void djui_slider_on_focus_end(struct DjuiBase* base) {
    djui_slider_set_default_style(base);
}

static void djui_slider_destroy(struct DjuiBase* base) {
    struct DjuiSlider* slider = (struct DjuiSlider*)base;
    free(slider);
}

struct DjuiSlider* djui_slider_create(struct DjuiBase* parent, const char* message, unsigned int* value, unsigned int min, unsigned int max) {
    struct DjuiSlider* slider = malloc(sizeof(struct DjuiSlider));
    struct DjuiBase* base     = &slider->base;

    slider->value = value;
    slider->min = min;
    slider->max = max;

    djui_base_init(parent, base, NULL, djui_slider_destroy);
    djui_interactable_create(base);
    djui_interactable_hook_hover(base, djui_slider_on_hover, djui_slider_on_hover_end);
    djui_interactable_hook_cursor_down(base, djui_slider_on_cursor_down_begin, NULL, djui_slider_on_cursor_down_end);
    djui_interactable_hook_focus(base, djui_slider_on_focus_begin, djui_slider_on_focus, djui_slider_on_focus_end);

    struct DjuiText* text = djui_text_create(&slider->base, message);
    djui_base_set_alignment(&text->base, DJUI_HALIGN_LEFT, DJUI_VALIGN_CENTER);
    djui_base_set_size_type(&text->base, DJUI_SVT_RELATIVE, DJUI_SVT_RELATIVE);
    djui_base_set_size(&text->base, 0.5f, 1.0f);
    djui_text_set_alignment(text, DJUI_HALIGN_LEFT, DJUI_VALIGN_BOTTOM);
    djui_text_set_drop_shadow(text, 120, 120, 120, 64);
    slider->text = text;

    struct DjuiRect* rect = djui_rect_create(&slider->base);
    djui_base_set_alignment(&rect->base, DJUI_HALIGN_RIGHT, DJUI_VALIGN_CENTER);
    djui_base_set_size_type(&rect->base, DJUI_SVT_RELATIVE, DJUI_SVT_RELATIVE);
    djui_base_set_size(&rect->base, 0.5f, 1.0f);
    djui_base_set_color(&rect->base, 0, 0, 0, 0);
    djui_base_set_border_width(&rect->base, 2);
    slider->rect = rect;

    struct DjuiRect* rectValue = djui_rect_create(&rect->base);
    djui_base_set_size_type(&rectValue->base, DJUI_SVT_RELATIVE, DJUI_SVT_RELATIVE);
    slider->rectValue = rectValue;

    djui_slider_update_value(base);
    djui_slider_set_default_style(base);

    return slider;
}
