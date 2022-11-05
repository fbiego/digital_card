// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: card

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
void ui_event_mainScreen(lv_event_t * e);
lv_obj_t * ui_mainScreen;
lv_obj_t * ui_nameLabel;
lv_obj_t * ui_aboutLabel;
void ui_event_emailPanel(lv_event_t * e);
lv_obj_t * ui_emailPanel;
lv_obj_t * ui_emailIcon;
lv_obj_t * ui_emailText;
void ui_event_websitePanel(lv_event_t * e);
lv_obj_t * ui_websitePanel;
lv_obj_t * ui_websiteIcon;
lv_obj_t * ui_websiteText;
void ui_event_twitterPanel(lv_event_t * e);
lv_obj_t * ui_twitterPanel;
lv_obj_t * ui_twitterIcon;
lv_obj_t * ui_twitterText;
void ui_event_phonePanel(lv_event_t * e);
lv_obj_t * ui_phonePanel;
lv_obj_t * ui_phoneIcon;
lv_obj_t * ui_phoneText;
lv_obj_t * ui_alertPanel;
lv_obj_t * ui_connectIcon;
void ui_event_clockScreen(lv_event_t * e);
lv_obj_t * ui_clockScreen;
lv_obj_t * ui_clockPanel;
lv_obj_t * ui_hour1;
lv_obj_t * ui_hour2;
lv_obj_t * ui_minute1;
lv_obj_t * ui_minute2;
lv_obj_t * ui_second1;
lv_obj_t * ui_second2;
lv_obj_t * ui_label1;
lv_obj_t * ui_label2;
lv_obj_t * ui_dateText;
lv_obj_t * ui_weatherIcon;
lv_obj_t * ui_weatherTemp;
lv_obj_t * ui_weatherLocation;
void ui_event_brightnessSlider(lv_event_t * e);
lv_obj_t * ui_brightnessSlider;
lv_obj_t * ui_brightnessIcon;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_mainScreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        _ui_screen_change(ui_clockScreen, LV_SCR_LOAD_ANIM_MOVE_LEFT, 500, 0);
    }
}
void ui_event_emailPanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_emailText, _UI_LABEL_PROPERTY_TEXT, "fbiego.fb@gmail.com");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_emailText, _UI_LABEL_PROPERTY_TEXT, "");
    }
    if(event_code == LV_EVENT_CLICKED) {
        onClickEmail(e);
    }
}
void ui_event_websitePanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_websiteText, _UI_LABEL_PROPERTY_TEXT, "felix.fbiego.com");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_websiteText, _UI_LABEL_PROPERTY_TEXT, "");
    }
    if(event_code == LV_EVENT_CLICKED) {
        onClickWebsite(e);
    }
}
void ui_event_twitterPanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_twitterText, _UI_LABEL_PROPERTY_TEXT, "@fbiego_");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_twitterText, _UI_LABEL_PROPERTY_TEXT, "");
    }
    if(event_code == LV_EVENT_CLICKED) {
        onClickTwitter(e);
    }
}
void ui_event_phonePanel(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_phoneText, _UI_LABEL_PROPERTY_TEXT, "+254 7** *** *06");
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_label_set_property(ui_phoneText, _UI_LABEL_PROPERTY_TEXT, "");
    }
    if(event_code == LV_EVENT_CLICKED) {
        onClickCall(e);
    }
}
void ui_event_clockScreen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        _ui_screen_change(ui_mainScreen, LV_SCR_LOAD_ANIM_MOVE_RIGHT, 500, 0);
    }
}
void ui_event_brightnessSlider(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        onBrightnessChange(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_mainScreen_screen_init(void)
{
    ui_mainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_mainScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_mainScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_mainScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_mainScreen, &ui_img_236433794, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_mainScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_nameLabel = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_nameLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_nameLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_nameLabel, 20);
    lv_obj_set_y(ui_nameLabel, 40);
    lv_label_set_text(ui_nameLabel, "Felix Biego");
    lv_obj_set_style_text_font(ui_nameLabel, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_aboutLabel = lv_label_create(ui_mainScreen);
    lv_obj_set_width(ui_aboutLabel, 440);
    lv_obj_set_height(ui_aboutLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_aboutLabel, 20);
    lv_obj_set_y(ui_aboutLabel, 100);
    lv_label_set_long_mode(ui_aboutLabel, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_aboutLabel, "Software Engineer   |   Embedded Systems Developer   |    IoT    |");
    lv_label_set_recolor(ui_aboutLabel, "true");
    lv_obj_set_style_text_color(ui_aboutLabel, lv_color_hex(0x78D53A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_aboutLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_aboutLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_emailPanel = lv_obj_create(ui_mainScreen);
    lv_obj_set_width(ui_emailPanel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_emailPanel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_emailPanel, 20);
    lv_obj_set_y(ui_emailPanel, 160);
    lv_obj_add_flag(ui_emailPanel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_emailPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_emailPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_emailPanel, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_emailPanel, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_emailPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_emailPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_emailPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_emailPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_emailPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_emailIcon = lv_img_create(ui_emailPanel);
    lv_img_set_src(ui_emailIcon, &ui_img_email_png);
    lv_obj_set_width(ui_emailIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_emailIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_emailIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_emailIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_emailIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_emailText = lv_label_create(ui_emailPanel);
    lv_obj_set_width(ui_emailText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_emailText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_emailText, 30);
    lv_obj_set_y(ui_emailText, 0);
    lv_obj_set_align(ui_emailText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_emailText, "");

    ui_websitePanel = lv_obj_create(ui_mainScreen);
    lv_obj_set_width(ui_websitePanel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_websitePanel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_websitePanel, 20);
    lv_obj_set_y(ui_websitePanel, 240);
    lv_obj_add_flag(ui_websitePanel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_websitePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_websitePanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_websitePanel, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_websitePanel, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_websitePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_websitePanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_websitePanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_websitePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_websitePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_websiteIcon = lv_img_create(ui_websitePanel);
    lv_img_set_src(ui_websiteIcon, &ui_img_web_png);
    lv_obj_set_width(ui_websiteIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_websiteIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_websiteIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_websiteIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_websiteIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_websiteText = lv_label_create(ui_websitePanel);
    lv_obj_set_width(ui_websiteText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_websiteText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_websiteText, 30);
    lv_obj_set_y(ui_websiteText, 0);
    lv_obj_set_align(ui_websiteText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_websiteText, "");

    ui_twitterPanel = lv_obj_create(ui_mainScreen);
    lv_obj_set_width(ui_twitterPanel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twitterPanel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_twitterPanel, 20);
    lv_obj_set_y(ui_twitterPanel, 280);
    lv_obj_add_flag(ui_twitterPanel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_twitterPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_twitterPanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_twitterPanel, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_twitterPanel, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_twitterPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_twitterPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_twitterPanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_twitterPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_twitterPanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_twitterIcon = lv_img_create(ui_twitterPanel);
    lv_img_set_src(ui_twitterIcon, &ui_img_1668805065);
    lv_obj_set_width(ui_twitterIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twitterIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_twitterIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_twitterIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_twitterIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_twitterText = lv_label_create(ui_twitterPanel);
    lv_obj_set_width(ui_twitterText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_twitterText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_twitterText, 30);
    lv_obj_set_y(ui_twitterText, 0);
    lv_obj_set_align(ui_twitterText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_twitterText, "");

    ui_phonePanel = lv_obj_create(ui_mainScreen);
    lv_obj_set_width(ui_phonePanel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_phonePanel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_phonePanel, 20);
    lv_obj_set_y(ui_phonePanel, 200);
    lv_obj_add_flag(ui_phonePanel, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_phonePanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_phonePanel, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_phonePanel, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_phonePanel, 150, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_phonePanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_phonePanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_phonePanel, 15, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_phonePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_phonePanel, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_phoneIcon = lv_img_create(ui_phonePanel);
    lv_img_set_src(ui_phoneIcon, &ui_img_1276322231);
    lv_obj_set_width(ui_phoneIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_phoneIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_phoneIcon, LV_ALIGN_LEFT_MID);
    lv_obj_add_flag(ui_phoneIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_phoneIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_phoneText = lv_label_create(ui_phonePanel);
    lv_obj_set_width(ui_phoneText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_phoneText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_phoneText, 30);
    lv_obj_set_y(ui_phoneText, 0);
    lv_obj_set_align(ui_phoneText, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_phoneText, "");

    ui_alertPanel = lv_obj_create(ui_mainScreen);
    lv_obj_set_width(ui_alertPanel, 480);
    lv_obj_set_height(ui_alertPanel, 320);
    lv_obj_set_align(ui_alertPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_alertPanel, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_alertPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_alertPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_alertPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_alertPanel, 220, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_alertPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_connectIcon = lv_img_create(ui_mainScreen);
    lv_img_set_src(ui_connectIcon, &ui_img_wifi_png);
    lv_obj_set_width(ui_connectIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_connectIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_connectIcon, 228);
    lv_obj_set_y(ui_connectIcon, 149);
    lv_obj_set_align(ui_connectIcon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_connectIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_connectIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_connectIcon, lv_color_hex(0x6FE022), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_connectIcon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_emailPanel, ui_event_emailPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_websitePanel, ui_event_websitePanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_twitterPanel, ui_event_twitterPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_phonePanel, ui_event_phonePanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_mainScreen, ui_event_mainScreen, LV_EVENT_ALL, NULL);

}
void ui_clockScreen_screen_init(void)
{
    ui_clockScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_clockScreen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_clockScreen, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_clockScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_clockScreen, &ui_img_236433794, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_clockScreen, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_clockPanel = lv_obj_create(ui_clockScreen);
    lv_obj_set_width(ui_clockPanel, 400);
    lv_obj_set_height(ui_clockPanel, 100);
    lv_obj_set_x(ui_clockPanel, 0);
    lv_obj_set_y(ui_clockPanel, 41);
    lv_obj_set_align(ui_clockPanel, LV_ALIGN_TOP_MID);
    lv_obj_clear_flag(ui_clockPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_clockPanel, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_clockPanel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_clockPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_clockPanel, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_clockPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_clockPanel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_hour1 = lv_img_create(ui_clockPanel);
    lv_img_set_src(ui_hour1, &ui_img_zero_64_png);
    lv_obj_set_width(ui_hour1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour1, -120);
    lv_obj_set_y(ui_hour1, 0);
    lv_obj_set_align(ui_hour1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_hour1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_hour1, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_hour1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_hour2 = lv_img_create(ui_clockPanel);
    lv_img_set_src(ui_hour2, &ui_img_one_64_png);
    lv_obj_set_width(ui_hour2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_hour2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_hour2, -80);
    lv_obj_set_y(ui_hour2, 0);
    lv_obj_set_align(ui_hour2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_hour2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_hour2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_hour2, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_hour2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_minute1 = lv_img_create(ui_clockPanel);
    lv_img_set_src(ui_minute1, &ui_img_three_64_png);
    lv_obj_set_width(ui_minute1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_minute1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_minute1, -20);
    lv_obj_set_y(ui_minute1, 0);
    lv_obj_set_align(ui_minute1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_minute1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_minute1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_minute1, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_minute1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_minute2 = lv_img_create(ui_clockPanel);
    lv_img_set_src(ui_minute2, &ui_img_seven_64_png);
    lv_obj_set_width(ui_minute2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_minute2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_minute2, 20);
    lv_obj_set_y(ui_minute2, 0);
    lv_obj_set_align(ui_minute2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_minute2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_minute2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_minute2, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_minute2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_second1 = lv_img_create(ui_clockPanel);
    lv_img_set_src(ui_second1, &ui_img_two_64_png);
    lv_obj_set_width(ui_second1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_second1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_second1, 80);
    lv_obj_set_y(ui_second1, 0);
    lv_obj_set_align(ui_second1, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_second1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_second1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_second1, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_second1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_second2 = lv_img_create(ui_clockPanel);
    lv_img_set_src(ui_second2, &ui_img_five_64_png);
    lv_obj_set_width(ui_second2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_second2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_second2, 120);
    lv_obj_set_y(ui_second2, 0);
    lv_obj_set_align(ui_second2, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_second2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_second2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_second2, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_second2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label1 = lv_label_create(ui_clockPanel);
    lv_obj_set_width(ui_label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label1, -50);
    lv_obj_set_y(ui_label1, 0);
    lv_obj_set_align(ui_label1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_label1, ":");
    lv_obj_set_style_text_color(ui_label1, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label1, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_label2 = lv_label_create(ui_clockPanel);
    lv_obj_set_width(ui_label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_label2, 50);
    lv_obj_set_y(ui_label2, 0);
    lv_obj_set_align(ui_label2, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_label2, ":");
    lv_obj_set_style_text_color(ui_label2, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_label2, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dateText = lv_label_create(ui_clockScreen);
    lv_obj_set_width(ui_dateText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_dateText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_dateText, 0);
    lv_obj_set_y(ui_dateText, 160);
    lv_obj_set_align(ui_dateText, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_dateText, "Friday, 04 November");
    lv_obj_set_style_text_color(ui_dateText, lv_color_hex(0x6CBE34), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dateText, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dateText, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_weatherIcon = lv_img_create(ui_clockScreen);
    lv_img_set_src(ui_weatherIcon, &ui_img_1127648905);
    lv_obj_set_width(ui_weatherIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherIcon, -158);
    lv_obj_set_y(ui_weatherIcon, 247);
    lv_obj_set_align(ui_weatherIcon, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_weatherIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_weatherIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_weatherTemp = lv_label_create(ui_clockScreen);
    lv_obj_set_width(ui_weatherTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherTemp, -118);
    lv_obj_set_y(ui_weatherTemp, 254);
    lv_obj_set_align(ui_weatherTemp, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_weatherTemp, "27 °C");

    ui_weatherLocation = lv_label_create(ui_clockScreen);
    lv_obj_set_width(ui_weatherLocation, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_weatherLocation, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_weatherLocation, -119);
    lv_obj_set_y(ui_weatherLocation, 277);
    lv_obj_set_align(ui_weatherLocation, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_weatherLocation, "Weather");

    ui_brightnessSlider = lv_slider_create(ui_clockScreen);
    lv_slider_set_range(ui_brightnessSlider, 1, 255);
    lv_slider_set_value(ui_brightnessSlider, 50, LV_ANIM_OFF);
    if(lv_slider_get_mode(ui_brightnessSlider) == LV_SLIDER_MODE_RANGE) lv_slider_set_left_value(ui_brightnessSlider, 0,
                                                                                                     LV_ANIM_OFF);
    lv_obj_set_width(ui_brightnessSlider, 150);
    lv_obj_set_height(ui_brightnessSlider, 10);
    lv_obj_set_x(ui_brightnessSlider, 131);
    lv_obj_set_y(ui_brightnessSlider, 132);
    lv_obj_set_align(ui_brightnessSlider, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_brightnessSlider, lv_color_hex(0x6FE022), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_brightnessSlider, 50, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_brightnessSlider, lv_color_hex(0x6FE022), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_brightnessSlider, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_brightnessSlider, lv_color_hex(0x6F9622), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_brightnessSlider, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_brightnessIcon = lv_img_create(ui_clockScreen);
    lv_img_set_src(ui_brightnessIcon, &ui_img_led_control_png);
    lv_obj_set_width(ui_brightnessIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_brightnessIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_brightnessIcon, 26);
    lv_obj_set_y(ui_brightnessIcon, 131);
    lv_obj_set_align(ui_brightnessIcon, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_brightnessIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_brightnessIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_img_recolor(ui_brightnessIcon, lv_color_hex(0x6FE022), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_brightnessIcon, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_brightnessSlider, ui_event_brightnessSlider, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_clockScreen, ui_event_clockScreen, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_mainScreen_screen_init();
    ui_clockScreen_screen_init();
    lv_disp_load_scr(ui_mainScreen);
}
