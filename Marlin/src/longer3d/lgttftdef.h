#pragma once

#if defined(MANUAL_FEEDRATE)
	#undef MANUAL_FEEDRATE
#endif
#define MANUAL_FEEDRATE { 50*60, 50*60, 4*60, 60 } // Feedrates for manual moves along X, Y, Z, E from panel

#define CHANGE_FILA_LENGTH		500
#define UNLOAD_FILA_FEEDRATE    600

/* image size definition */
#define IMG_SIZE_LOGO0              20008			    /* 200*50 logo alfawise     */
#define IMG_SIZE_LOGO1              48008				/* 200*120 logo iformer     */
#define IMG_SIZE_LOGO2              18408				/* 230*40 logo longer       */

#define IMG_SIZE_CAPTION            2888				/* 90*16 caption            */
//#define pic_size_button_home 11208			        /* 70*80 home button        */
#define IMG_SIZE_WARNING_TEMP       2922		        /* 31*47 temper warning     */
#define IMG_SIZE_BUTTON_NORMAL      6058			    /* 55*55 normal button      */
#define IMG_SIZE_BUTTON_ARROW       7158			    /* 65*55 arrow button       */
#define IMG_SIZE_BUTTON_DISTANCE    4408 		        /* 55*40 distance button    */
#define IMG_SIZE_ICON_MINI          1808				/* 30*30 mini icon          */
//#define pic_size_button_leveling 13608		        /* 85*80 leveling button    */
#define IMG_SIZE_BUTTON_FEED        7378			    /* 67*55 feed button        */
#define IMG_SIZE_DIALOG_BODY        60008			    /* 200*150 dialog body      */
#define IMG_SIZE_BUTTON_BED         4108			    /* 50*41 bed_on/off button  */

/* image address definition */

/* launch logo */
#define  IMG_ADDR_STARTUP_LOGO_0 (0u)

/* menu home */
#define  IMG_ADDR_CAPTION_HOME                  (IMG_ADDR_STARTUP_LOGO_0 + IMG_SIZE_LOGO0)
#define  IMG_ADDR_BUTTON_MOVE                   (IMG_ADDR_CAPTION_HOME + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_MOVE_PRESSED           (IMG_ADDR_BUTTON_MOVE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILE                   (IMG_ADDR_BUTTON_MOVE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILE_PRESSED           (IMG_ADDR_BUTTON_FILE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_EXTRUDE                (IMG_ADDR_BUTTON_FILE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_EXTRUDE_PRESSED        (IMG_ADDR_BUTTON_EXTRUDE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_PREHEAT                (IMG_ADDR_BUTTON_EXTRUDE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_PREHEAT_PRESSED        (IMG_ADDR_BUTTON_PREHEAT + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING               (IMG_ADDR_BUTTON_PREHEAT_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING_PRESSED       (IMG_ADDR_BUTTON_LEVELING + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RECOVERY               (IMG_ADDR_BUTTON_LEVELING_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RECOVERY_PRESSED       (IMG_ADDR_BUTTON_RECOVERY + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RECOVERY_DISABLE       (IMG_ADDR_BUTTON_RECOVERY_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_MORE                   (IMG_ADDR_BUTTON_RECOVERY_DISABLE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_MORE_PRESSED           (IMG_ADDR_BUTTON_MORE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_SETTINGS               (IMG_ADDR_BUTTON_MORE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_SETTINGS_PRESSED       (IMG_ADDR_BUTTON_SETTINGS + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_ABOUT                  (IMG_ADDR_BUTTON_SETTINGS_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_ABOUT_PRESSED          (IMG_ADDR_BUTTON_ABOUT + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LANGUAGE               (IMG_ADDR_BUTTON_ABOUT_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LANGUAGE_PRESSED       (IMG_ADDR_BUTTON_LANGUAGE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RETURN                 (IMG_ADDR_BUTTON_LANGUAGE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RETURN_PRESSED         (IMG_ADDR_BUTTON_RETURN + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_WARNING_COLD_BED              (IMG_ADDR_BUTTON_RETURN_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_WARNING_COLD_HEAD             (IMG_ADDR_WARNING_COLD_BED + IMG_SIZE_WARNING_TEMP)
#define  IMG_ADDR_WARNING_HOT_BED               (IMG_ADDR_WARNING_COLD_HEAD + IMG_SIZE_WARNING_TEMP)
#define  IMG_ADDR_WARNING_HOT_HEAD              (IMG_ADDR_WARNING_HOT_BED + IMG_SIZE_WARNING_TEMP)

/* menu move */
#define  IMG_ADDR_CAPTION_MOVE                  (IMG_ADDR_WARNING_HOT_HEAD + IMG_SIZE_WARNING_TEMP)
#define  IMG_ADDR_BUTTON_HOME_ALL               (IMG_ADDR_CAPTION_MOVE + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_HOME_ALL_PRESSED       (IMG_ADDR_BUTTON_HOME_ALL + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_HOME_X                 (IMG_ADDR_BUTTON_HOME_ALL_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_HOME_X_PRESSED         (IMG_ADDR_BUTTON_HOME_X + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_HOME_Y                 (IMG_ADDR_BUTTON_HOME_X_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_HOME_Y_PRESSED         (IMG_ADDR_BUTTON_HOME_Y + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_HOME_Z                 (IMG_ADDR_BUTTON_HOME_Y_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_HOME_Z_PRESSED         (IMG_ADDR_BUTTON_HOME_Z + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_MINUS_X                (IMG_ADDR_BUTTON_HOME_Z_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_MINUS_X_PRESSED        (IMG_ADDR_BUTTON_MINUS_X + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_MINUS_Y                (IMG_ADDR_BUTTON_MINUS_X_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_MINUS_Y_PRESSED        (IMG_ADDR_BUTTON_MINUS_Y + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_MINUS_Z                (IMG_ADDR_BUTTON_MINUS_Y_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_MINUS_Z_PRESSED        (IMG_ADDR_BUTTON_MINUS_Z + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_X                 (IMG_ADDR_BUTTON_MINUS_Z_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_X_PRESSED         (IMG_ADDR_BUTTON_PLUS_X + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_Y                 (IMG_ADDR_BUTTON_PLUS_X_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_Y_PRESSED         (IMG_ADDR_BUTTON_PLUS_Y + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_Z                 (IMG_ADDR_BUTTON_PLUS_Y_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_Z_PRESSED         (IMG_ADDR_BUTTON_PLUS_Z + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_DISTANCE_1             (IMG_ADDR_BUTTON_PLUS_Z_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_DISTANCE_1_PRESSED     (IMG_ADDR_BUTTON_DISTANCE_1 + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_DISTANCE_5             (IMG_ADDR_BUTTON_DISTANCE_1_PRESSED + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_DISTANCE_5_PRESSED     (IMG_ADDR_BUTTON_DISTANCE_5 + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_DISTANCE_10            (IMG_ADDR_BUTTON_DISTANCE_5_PRESSED + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_DISTANCE_10_PRESSED    (IMG_ADDR_BUTTON_DISTANCE_10 + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_DISTANCE_MAX           (IMG_ADDR_BUTTON_DISTANCE_10_PRESSED + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_DISTANCE_MAX_PRESSED   (IMG_ADDR_BUTTON_DISTANCE_MAX + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_UNLOCK                 (IMG_ADDR_BUTTON_DISTANCE_MAX_PRESSED + IMG_SIZE_BUTTON_DISTANCE)
#define  IMG_ADDR_BUTTON_UNLOCK_PRESSED         (IMG_ADDR_BUTTON_UNLOCK + IMG_SIZE_BUTTON_NORMAL)

/* menu file */
#define  IMG_ADDR_CAPTION_FILE                  (IMG_ADDR_BUTTON_UNLOCK_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_PAGE_NEXT              (IMG_ADDR_CAPTION_FILE + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_PAGE_NEXT_PRESSED      (IMG_ADDR_BUTTON_PAGE_NEXT + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_PAGE_LAST              (IMG_ADDR_BUTTON_PAGE_NEXT_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_PAGE_LAST_PRESSED      (IMG_ADDR_BUTTON_PAGE_LAST + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_START                  (IMG_ADDR_BUTTON_PAGE_LAST_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_START_PRESSED          (IMG_ADDR_BUTTON_START + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_OPEN                   (IMG_ADDR_BUTTON_START_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_OPEN_PRESSED           (IMG_ADDR_BUTTON_OPEN + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RETURN_FOLDER          (IMG_ADDR_BUTTON_OPEN_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RETURN_FOLDER_PRESSED  (IMG_ADDR_BUTTON_RETURN_FOLDER + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_PROMPT_ERROR                  (IMG_ADDR_BUTTON_RETURN_FOLDER_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_INDICATOR_FILE                (IMG_ADDR_PROMPT_ERROR + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_FOLDER              (IMG_ADDR_INDICATOR_FILE + IMG_SIZE_ICON_MINI)

/* menu print */
#define  IMG_ADDR_INDICATOR_HEAD                (IMG_ADDR_INDICATOR_FOLDER + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_FAN_0               (IMG_ADDR_INDICATOR_HEAD + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_FAN_1               (IMG_ADDR_INDICATOR_FAN_0 + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_BED                 (IMG_ADDR_INDICATOR_FAN_1 + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_HEIGHT              (IMG_ADDR_INDICATOR_BED + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_TIMER_CD            (IMG_ADDR_INDICATOR_HEIGHT + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_INDICATOR_TIMER_CU            (IMG_ADDR_INDICATOR_TIMER_CD + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_BUTTON_PAUSE                  (IMG_ADDR_INDICATOR_TIMER_CU + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_BUTTON_PAUSE_PRESSED          (IMG_ADDR_BUTTON_PAUSE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_PAUSE_DISABLE          (IMG_ADDR_BUTTON_PAUSE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RESUME                 (IMG_ADDR_BUTTON_PAUSE_DISABLE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RESUME_PRESSED         (IMG_ADDR_BUTTON_RESUME + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RESUME_DISABLE         (IMG_ADDR_BUTTON_RESUME_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_ADJUST                 (IMG_ADDR_BUTTON_RESUME_DISABLE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_ADJUST_PRESSED         (IMG_ADDR_BUTTON_ADJUST + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_END                    (IMG_ADDR_BUTTON_ADJUST_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_END_PRESSED            (IMG_ADDR_BUTTON_END + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_PROMPT_COMPLETE               (IMG_ADDR_BUTTON_END_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_PROMPT_PAUSE                  (IMG_ADDR_PROMPT_COMPLETE + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_PROMPT_PRINTING               (IMG_ADDR_PROMPT_PAUSE + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_PROMPT_RECOVERY               (IMG_ADDR_PROMPT_PRINTING + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_PROMPT_WARNING                (IMG_ADDR_PROMPT_RECOVERY + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_PROMPT_HEATING                (IMG_ADDR_PROMPT_WARNING + IMG_SIZE_ICON_MINI)

/* menu adjust */
#define  IMG_ADDR_CAPTION_ADJUST                (IMG_ADDR_PROMPT_HEATING + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_BUTTON_ADD                    (IMG_ADDR_CAPTION_ADJUST + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_ADD_PRESSED            (IMG_ADDR_BUTTON_ADD + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_SUB                    (IMG_ADDR_BUTTON_ADD_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_SUB_PRESSED            (IMG_ADDR_BUTTON_SUB + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_INDICATOR_SPEED               (IMG_ADDR_BUTTON_SUB_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_INDICATOR_FLOW                (IMG_ADDR_INDICATOR_SPEED + IMG_SIZE_ICON_MINI)

/* menu preheating */
#define  IMG_ADDR_CAPTION_PREHEAT               (IMG_ADDR_INDICATOR_FLOW + IMG_SIZE_ICON_MINI)
#define  IMG_ADDR_BUTTON_COOLING                (IMG_ADDR_CAPTION_PREHEAT + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_COOLING_PRESSED        (IMG_ADDR_BUTTON_COOLING + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILAMENT_0             (IMG_ADDR_BUTTON_COOLING_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILAMENT_0_PRESSED     (IMG_ADDR_BUTTON_FILAMENT_0 + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILAMENT_1             (IMG_ADDR_BUTTON_FILAMENT_0_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILAMENT_1_PRESSED     (IMG_ADDR_BUTTON_FILAMENT_1 + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILAMENT_2             (IMG_ADDR_BUTTON_FILAMENT_1_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_FILAMENT_2_PRESSED     (IMG_ADDR_BUTTON_FILAMENT_2 + IMG_SIZE_BUTTON_NORMAL)

/* menu leveling */
#define  IMG_ADDR_CAPTION_LEVELING              (IMG_ADDR_BUTTON_FILAMENT_2_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING0              (IMG_ADDR_CAPTION_LEVELING + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_LEVELING0_PRESSED      (IMG_ADDR_BUTTON_LEVELING0 + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING1              (IMG_ADDR_BUTTON_LEVELING0_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING1_PRESSED      (IMG_ADDR_BUTTON_LEVELING1 + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING2              (IMG_ADDR_BUTTON_LEVELING1_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING2_PRESSED      (IMG_ADDR_BUTTON_LEVELING2 + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING3              (IMG_ADDR_BUTTON_LEVELING2_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING3_PRESSED      (IMG_ADDR_BUTTON_LEVELING3 + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING4              (IMG_ADDR_BUTTON_LEVELING3_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_LEVELING4_PRESSED      (IMG_ADDR_BUTTON_LEVELING4 + IMG_SIZE_BUTTON_NORMAL)

/* menu extrude */
#define  IMG_ADDR_CAPTION_EXTRUDE               (IMG_ADDR_BUTTON_LEVELING4_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_MINUS_E                (IMG_ADDR_CAPTION_EXTRUDE + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_MINUS_E_PRESSED        (IMG_ADDR_BUTTON_MINUS_E + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_E                 (IMG_ADDR_BUTTON_MINUS_E_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_PLUS_E_PRESSED         (IMG_ADDR_BUTTON_PLUS_E + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_FEED_IN_0              (IMG_ADDR_BUTTON_PLUS_E_PRESSED + IMG_SIZE_BUTTON_ARROW)
#define  IMG_ADDR_BUTTON_FEED_IN_0_PRESSED      (IMG_ADDR_BUTTON_FEED_IN_0 + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_IN_1              (IMG_ADDR_BUTTON_FEED_IN_0_PRESSED + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_IN_1_PRESSED      (IMG_ADDR_BUTTON_FEED_IN_1 + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_OUT_0             (IMG_ADDR_BUTTON_FEED_IN_1_PRESSED + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_OUT_0_PRESSED     (IMG_ADDR_BUTTON_FEED_OUT_0 + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_OUT_1             (IMG_ADDR_BUTTON_FEED_OUT_0_PRESSED + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_OUT_1_PRESSED     (IMG_ADDR_BUTTON_FEED_OUT_1 + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_STOP              (IMG_ADDR_BUTTON_FEED_OUT_1_PRESSED + IMG_SIZE_BUTTON_FEED)
#define  IMG_ADDR_BUTTON_FEED_STOP_PRESSED      (IMG_ADDR_BUTTON_FEED_STOP + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_BED_ON                 (IMG_ADDR_BUTTON_FEED_STOP_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_BED_ON_PRESSED         (IMG_ADDR_BUTTON_BED_ON + IMG_SIZE_BUTTON_BED)
#define  IMG_ADDR_BUTTON_BED_OFF                (IMG_ADDR_BUTTON_BED_ON_PRESSED + IMG_SIZE_BUTTON_BED)
#define  IMG_ADDR_BUTTON_BED_OFF_PRESSED        (IMG_ADDR_BUTTON_BED_OFF + IMG_SIZE_BUTTON_BED)

/* menu settings */
#define  IMG_ADDR_CAPTION_SETTINGS              (IMG_ADDR_BUTTON_BED_OFF_PRESSED + IMG_SIZE_BUTTON_BED)
#define  IMG_ADDR_BUTTON_MODIFY                 (IMG_ADDR_CAPTION_SETTINGS + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_MODIFY_PRESSED         (IMG_ADDR_BUTTON_MODIFY + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RESTORE                (IMG_ADDR_BUTTON_MODIFY_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_RESTORE_PRESSED        (IMG_ADDR_BUTTON_RESTORE + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_SAVE                   (IMG_ADDR_BUTTON_RESTORE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_SAVE_PRESSED           (IMG_ADDR_BUTTON_SAVE  + IMG_SIZE_BUTTON_NORMAL)

/* menu about */
#define  IMG_ADDR_CAPTION_ABOUT                 (IMG_ADDR_BUTTON_SAVE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_AIMING                 (IMG_ADDR_CAPTION_ABOUT + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_AIMING_PRESSED         (IMG_ADDR_BUTTON_AIMING + IMG_SIZE_BUTTON_NORMAL)

/* menu language */
#define  IMG_ADDR_CAPTION_LANGUAGE              (IMG_ADDR_BUTTON_AIMING_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_ENGLISH                (IMG_ADDR_CAPTION_LANGUAGE + IMG_SIZE_CAPTION)
#define  IMG_ADDR_BUTTON_ENGLISH_PRESSED        (IMG_ADDR_BUTTON_ENGLISH + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_CHINESE                (IMG_ADDR_BUTTON_ENGLISH_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_CHINESE_PRESSED        (IMG_ADDR_BUTTON_CHINESE + IMG_SIZE_BUTTON_NORMAL)

/* dialog */
#define  IMG_ADDR_DIALOG_BODY                   (IMG_ADDR_BUTTON_CHINESE_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_YES                    (IMG_ADDR_DIALOG_BODY + IMG_SIZE_DIALOG_BODY)
#define  IMG_ADDR_BUTTON_YES_PRESSED            (IMG_ADDR_BUTTON_YES + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_NO                     (IMG_ADDR_BUTTON_YES_PRESSED + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_BUTTON_NO_PRESSED             (IMG_ADDR_BUTTON_NO + IMG_SIZE_BUTTON_NORMAL)
#define  IMG_ADDR_PROMPT_QUESTION               (IMG_ADDR_BUTTON_NO_PRESSED + IMG_SIZE_BUTTON_NORMAL)

/* launch logo "iFormer" */
#define  IMG_ADDR_STARTUP_LOGO_1                (IMG_ADDR_PROMPT_QUESTION + IMG_SIZE_ICON_MINI)

/* launch logo "LONGER" */
#define  IMG_ADDR_STARTUP_LOGO_2                (IMG_ADDR_STARTUP_LOGO_1 + IMG_SIZE_LOGO1)  //991586

//#define  FONT16_ADDR_GBK                        (0x000F6950 )      //992000 =  0x000F2300

/* image address definition end */
//#define  IMG_MAX_ADDR                           (IMG_ADDR_STARTUP_LOGO_2 + IMG_SIZE_LOGO2)   //1009994

// define color of captions background
#define BG_COLOR_CAPTION_HOME		 0x045D
#define BG_COLOR_CAPTION_MOVE		 0xDC01
#define BG_COLOR_CAPTION_FILE		 0x057A
#define BG_COLOR_CAPTION_PRINT		 0x045D 
#define BG_COLOR_CAPTION_ADJUST		 0x0DB7
#define BG_COLOR_CAPTION_PREHEAT     0x018B
#define BG_COLOR_CAPTION_LEVELING	 0xEAA5
#define BG_COLOR_CAPTION_EXTRUDE	 0x2CAC
#define BG_COLOR_CAPTION_SETTINGS	 0x0209
#define BG_COLOR_CAPTION_ABOUT 	     0xEA0A
#define BG_COLOR_CAPTION_DIALOG 	 0x0233

#define PT_COLOR_DISABLE 0xBDD7

/* temperature UI definition */

#define MAX_ADJUST_TEMP_EXTRUDE     (HEATER_0_MAXTEMP-10)//(heater_maxtemp[0]-10)
#define MAX_ADJUST_TEMP_BED         (BED_MAXTEMP-10)//(bed_maxtemp-10)//BED_MAXTEMP
#define MIN_ADJUST_TEMP_EXTRUDE     (0)
#define MIN_ADJUST_TEMP_BED         (0)
#define NORMAL_ADJUST_TEMP_EXTRUDE  (200)
#define NORMAL_ADJUST_TEMP_BED      (60)

#define PREHEAT_PLA_TEMP_EXTRUDE    (PREHEAT_1_TEMP_HOTEND)
#define PREHEAT_PLA_TEMP_BED        (PREHEAT_1_TEMP_BED)
#define PREHEAT_ABS_TEMP_EXTRUDE    (PREHEAT_2_TEMP_HOTEND)
#define PREHEAT_ABS_TEMP_BED        (PREHEAT_2_TEMP_BED)
#define PREHEAT_PETG_TEMP_EXTRUDE   (215)
#define PREHEAT_PETG_TEMP_BED       (70)


#define POS_MOVE_COL_TXT            (40)
#define POS_MOVE_TXT_INTERVAL       (90)
#define POS_MOVE_COL_0              (5)
#define POS_MOVE_COL_1              (65)
#define POS_MOVE_COL_2              (125)
#define POS_MOVE_COL_3              (193)
#define POS_MOVE_COL_4              (260)
#define POS_MOVE_ROW_0              (32)
#define POS_MOVE_ROW_1              (55)
#define POS_MOVE_ROW_2              (110)
#define POS_MOVE_ROW_3              (180)
#define POS_MOVE_COL_DISTANCE       POS_MOVE_COL_4
#define POS_MOVE_ROW_DISTANCE       POS_MOVE_ROW_1

/********************************Language*********************************************/

#define FW_VERSION "V2.0-Marlin2.0.5.2"

#if defined(LK1) || defined(U20)
#define MAC_SIZE "300mm x 300mm x 400mm"
#elif defined(LK2) || defined(LK4) || defined(U30)
#define MAC_SIZE "220mm x 220mm x 250mm"
#elif defined(LK1_PLUS) ||  defined(U20_PLUS) 
#define MAC_SIZE "400mm x 400mm x 500mm"
#endif

#ifndef Chinese
//main page
#define TXT_MENU_HOME_MOVE                  "Move head"
#define TXT_MENU_HOME_FILE                  "Files"
#define TXT_MENU_HOME_EXTRUDE               "Extrude"
#define TXT_MENU_HOME_PREHEAT               "Preheating"
#define TXT_MENU_HOME_RECOVERY              "Recovery"
#define TXT_MENU_HOME_MORE                  "More"

//File page
#define TXT_MENU_FILE_SD_ERROR              "SD card error!"    
#define TXT_MENU_FILE_EMPTY                 "This folder is empty."  

//Extrude page
#define TXT_MENU_EXTRUDE_MANUAL             "JOG"            
#define TXT_MENU_EXTRUDE_AUTOMATIC          "AUTO"	

//More page
#define TXT_MENU_HOME_MORE_LEVELING         "Leveling"       
#define TXT_MENU_HOME_MORE_SETTINGS         "Settings"       
#define TXT_MENU_HOME_MORE_ABOUT            "About"           
#define TXT_MENU_HOME_MORE_RETURN           "Return"   

#define TXT_MENU_LEVELING_UNLOCK            "Unlock X-Y" 
//About page
#define TXT_MENU_ABOUT_MAX_SIZE_LABEL       "Max Buildable Size(LxWxH):"  
#define TXT_MENU_ABOUT_FW_VER_LABLE         "Firmware Version:"   
//settings
#define TXT_MENU_SETTS_ACCL                 "Accel(mm/s^2):"    
#define TXT_MENU_SETTS_JERK_XY              "Vxy-jerk(mm/s):"    
#define TXT_MENU_SETTS_JERK_Z               "Vz-jerk(mm/s):"     
#define TXT_MENU_SETTS_JERK_E               "Ve-jerk(mm/s):"    
#define TXT_MENU_SETTS_VMAX_X               "Vmax x(mm/s):"     
#define TXT_MENU_SETTS_VMAX_Y               "Vmax y(mm/s):"		 
#define TXT_MENU_SETTS_VMAX_Z               "Vmax z(mm/s):"		 
#define TXT_MENU_SETTS_VMAX_E               "Vmax e(mm/s):"     
#define TXT_MENU_SETTS_VMIN                 "Vmin(mm/s):"       
#define TXT_MENU_SETTS_VTRAVEL              "Vtrav min(mm/s):"    
#define TXT_MENU_SETTS_AMAX_X               "Amax x(mm/s^2):"   
#define TXT_MENU_SETTS_AMAX_Y               "Amax y(mm/s^2):"	 
#define TXT_MENU_SETTS_AMAX_Z               "Amax z(mm/s^2):"    
#define TXT_MENU_SETTS_AMAX_E               "Amax e(mm/s^2):"    
#define TXT_MENU_SETTS_ARETRACT             "A-retract(mm/s^2):"  
//#define TXT_MENU_SETTS_ATRAVEL              "A-travel:"     
#define TXT_MENU_SETTS_STEP_X               "X(steps/mm):"       
#define TXT_MENU_SETTS_STEP_Y               "Y(steps/mm):"			
#define TXT_MENU_SETTS_STEP_Z               "Z(steps/mm):"		
#define TXT_MENU_SETTS_STEP_E               "E(steps/mm):"		
#define TXT_MENU_SETTS_CHECK_FILA           "Filament check:"      
#define TXT_MENU_SETTS_LIST_ORDER           "File list order:"    
#define TXT_MENU_SETTS_VALUE_ON             "ON"                
#define TXT_MENU_SETTS_VALUE_OFF            "OFF"                 
#define TXT_MENU_SETTS_VALUE_FORWARD        "FORWARD"             
#define TXT_MENU_SETTS_VALUE_INVERSE        "INVERSE"	

//Printing page
#define TXT_MENU_PRINT_STATUS_HEATING       "Heating..."          
#define TXT_MENU_PRINT_STATUS_PAUSING       "Pause printing..."    
#define TXT_MENU_PRINT_STATUS_RUNNING       "Printing..."            
#define TXT_MENU_PRINT_STATUS_RECOVERY      "Recovering..."           
#define TXT_MENU_PRINT_STATUS_FINISH        "Printing finished!"   
#define TXT_MENU_PRINT_STATUS_NO_FILAMENT   "No enough materials!"     
#define TXT_MENU_PRINT_CD_TIMER_NULL        "-- H -- M"
#define TXT_MENU_PRINT_CD_TIMER             "%d H %d M"
#define TXT_MENU_PRINT_TEMP_NULL            "B: --/--"

#define TXT_DIALOG_CAPTION_START            "Start"     
#define TXT_DIALOG_CAPTION_EXIT             "Exit"           
#define TXT_DIALOG_CAPTION_ABORT            "Stop"          
#define TXT_DIALOG_CAPTION_ABORT_WAIT       "Wait Stop"      
#define TXT_DIALOG_CAPTION_RECOVERY         "Recovery"        
#define TXT_DIALOG_CAPTION_ERROR            "Error"           
#define TXT_DIALOG_CAPTION_RESTORE          "Restore"           
#define TXT_DIALOG_CAPTION_SAVE             "Save"           
#define TXT_DIALOG_CAPTION_NO_FIALMENT      "No Filament"    
#define TXT_DIALOG_CAPTION_OPEN_FOLER       "Open Folder"  


#define TXT_TFT_CONTROLLER_ID            "ControllerID:  %04X" //"ControllerID:"
#define TXT_TFT_CONTROLLER               "Controller: %s"
#define TXT_TOUCH_CALIBRATION            "Touch calibration"
#define TXT_TOP_LEFT                     "Top Left"
#define TXT_BOTTOM_LEFT                  "Bottom Left"
#define TXT_TOP_RIGHT                    "Top Right"
#define TXT_BOTTOM_RIGHT                 "Bottom Right"

#define TXT_CALI_COMPLETED               "Touch calibration completed"
#define TXT_X_CALIBRATION                "X_CALIBRATION:"
#define TXT_Y_CALIBRATION                "Y_CALIBRATION:"
#define TXT_X_OFFSET              		 "X_OFFSET:"
#define TXT_Y_OFFSET                     "Y_OFFSET:"

#define TXT_PROMPT_INFO1                 "Please click the screen to"
#define TXT_PROMPT_INFO2                 "return to the main home page!"

//Printer killed
#define TXT_PRINTER_KILLED_INFO1        "Printer halted. Kill()"
#define TXT_PRINTER_KILLED_INFO2        "called. Please restart"
#define TXT_PRINTER_KILLED_INFO3        "the printer!"

#define TXT_PRINTER_TEMPERROR_INFO1      "Abnormal temper-"
#define TXT_PRINTER_TEMPERROR_INFO2      "ature is detect-"
#define TXT_PRINTER_TEMPERROR_INFO3      "ed!"

//Dialog
#define DIALOG_PROMPT_PRINT_START1		"Are you sure to"//"Are you sure to start printing?"
#define DIALOG_PROMPT_PRINT_START2		"start printing?"
#define DIALOG_PROMPT_PRINT_START3
#define DIALOG_PROMPT_PRINT_EXIT1 		"Job's done. Do"//"Job's done. Do you want to exit?"
#define DIALOG_PROMPT_PRINT_EXIT2		"you want to exit?"
#define DIALOG_PROMPT_PRINT_EXIT3
#define DIALOG_PROMPT_PRINT_ABORT1 		"Job isn't done. Do"//"Job's not done. Do you want to stop it?"
#define DIALOG_PROMPT_PRINT_ABORT2		"you want to stop?"
#define DIALOG_PROMPT_PRINT_ABORT3
#define DIALOG_PROMPT_PRINT_RECOVERY1	"Are you sure to"//"Are you sure to recovery printing?"
#define DIALOG_PROMPT_PRINT_RECOVERY2	"recovery print-"
#define DIALOG_PROMPT_PRINT_RECOVERY3	"ing?"
#define DIALOG_PROMPT_ERROR_READ1		"Failed to read file,"   //"Failed to read file, please try again."
#define DIALOG_PROMPT_ERROR_READ2		"please try again."
#define DIALOG_PROMPT_ERROR_READ3
#define DIALOG_PROMPT_SETTS_RESTORE1	"Are you sure to "   //	"Are you sure to reset factory settings?"
#define DIALOG_PROMPT_SETTS_RESTORE2	"reset factory se-"
#define DIALOG_PROMPT_SETTS_RESTORE3	"ttings?"
#define DIALOG_PROMPT_SETTS_SAVE_OK1	"Current settings"      //"Current settings has been saved."
#define DIALOG_PROMPT_SETTS_SAVE_OK2	"has been saved."
#define DIALOG_PROMPT_SETTS_SAVE_OK3
#define DIALOG_PROMPT_SETTS_SAVE1		"Do you want to "      //"Do you want to save current settings?"
#define DIALOG_PROMPT_SETTS_SAVE2		"save current se-"
#define DIALOG_PROMPT_SETTS_SAVE3		"ttings?"
#define DIALOG_PROMPT_NO_FILAMENT1		"Do you want to"      //"Do you want to change filament?"
#define DIALOG_PROMPT_NO_FILAMENT2		"change filament?"
#define DIALOG_PROMPT_NO_FILAMENT3
#define DIALOG_ERROR_FILE_TYPE1	     	"Failed to open file."   //	"Failed to open file. Unsupported file type."
#define DIALOG_ERROR_FILE_TYPE2			" Unsupported file type."
#define DIALOG_ERROR_FILE_TYPE3
#define DIALOG_ERROR_TEMP_BED1	     	 "Abnormal bed tem-"     
#define DIALOG_ERROR_TEMP_BED2			"perature is dete-"
#define DIALOG_ERROR_TEMP_BED3			"cted."
#define DIALOG_ERROR_TEMP_HEAD1    	    "Abnormal head te-" 
#define DIALOG_ERROR_TEMP_HEAD2 		"mperature is det-"
#define DIALOG_ERROR_TEMP_HEAD3			"ected."
#define DIALOG_PROMPT_MAX_FOLDER1		"Sorry, multi-level"
#define DIALOG_PROMPT_MAX_FOLDER2		"folders are not supported."
#define DIALOG_PROMPT_MAX_FOLDER3
#define DIALOG_START_PRINT_NOFILA1      "No filament,please"                 //No filament,please change filament and start printing
#define DIALOG_START_PRINT_NOFILA2		"change filament!"
#define DIALOG_START_PRINT_NOFILA3		//"start printing!"



#endif
