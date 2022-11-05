// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: card

#ifndef _CARD_UI_H
#define _CARD_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

void ui_event_mainScreen(lv_event_t * e);
extern lv_obj_t * ui_mainScreen;
extern lv_obj_t * ui_nameLabel;
extern lv_obj_t * ui_aboutLabel;
void ui_event_emailPanel(lv_event_t * e);
extern lv_obj_t * ui_emailPanel;
extern lv_obj_t * ui_emailIcon;
extern lv_obj_t * ui_emailText;
void ui_event_websitePanel(lv_event_t * e);
extern lv_obj_t * ui_websitePanel;
extern lv_obj_t * ui_websiteIcon;
extern lv_obj_t * ui_websiteText;
void ui_event_twitterPanel(lv_event_t * e);
extern lv_obj_t * ui_twitterPanel;
extern lv_obj_t * ui_twitterIcon;
extern lv_obj_t * ui_twitterText;
void ui_event_phonePanel(lv_event_t * e);
extern lv_obj_t * ui_phonePanel;
extern lv_obj_t * ui_phoneIcon;
extern lv_obj_t * ui_phoneText;
extern lv_obj_t * ui_alertPanel;
extern lv_obj_t * ui_connectIcon;
void ui_event_clockScreen(lv_event_t * e);
extern lv_obj_t * ui_clockScreen;
extern lv_obj_t * ui_clockPanel;
extern lv_obj_t * ui_hour1;
extern lv_obj_t * ui_hour2;
extern lv_obj_t * ui_minute1;
extern lv_obj_t * ui_minute2;
extern lv_obj_t * ui_second1;
extern lv_obj_t * ui_second2;
extern lv_obj_t * ui_label1;
extern lv_obj_t * ui_label2;
extern lv_obj_t * ui_dateText;
extern lv_obj_t * ui_weatherIcon;
extern lv_obj_t * ui_weatherTemp;
extern lv_obj_t * ui_weatherLocation;
void ui_event_brightnessSlider(lv_event_t * e);
extern lv_obj_t * ui_brightnessSlider;
extern lv_obj_t * ui_brightnessIcon;

void onClickEmail(lv_event_t * e);
void onClickWebsite(lv_event_t * e);
void onClickTwitter(lv_event_t * e);
void onClickCall(lv_event_t * e);
void onBrightnessChange(lv_event_t * e);

LV_IMG_DECLARE(ui_img_236433794);    // assets\flx-bg_480x320.png
LV_IMG_DECLARE(ui_img_email_png);    // assets\email.png
LV_IMG_DECLARE(ui_img_web_png);    // assets\web.png
LV_IMG_DECLARE(ui_img_1668805065);    // assets\twitter (1).png
LV_IMG_DECLARE(ui_img_1276322231);    // assets\phone-call.png
LV_IMG_DECLARE(ui_img_wifi_png);    // assets\wifi.png
LV_IMG_DECLARE(ui_img_zero_64_png);    // assets\zero_64.png
LV_IMG_DECLARE(ui_img_one_64_png);    // assets\one_64.png
LV_IMG_DECLARE(ui_img_three_64_png);    // assets\three_64.png
LV_IMG_DECLARE(ui_img_seven_64_png);    // assets\seven_64.png
LV_IMG_DECLARE(ui_img_two_64_png);    // assets\two_64.png
LV_IMG_DECLARE(ui_img_five_64_png);    // assets\five_64.png
LV_IMG_DECLARE(ui_img_1127648905);    // assets\cloudy-day.png
LV_IMG_DECLARE(ui_img_led_control_png);    // assets\led_control.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
