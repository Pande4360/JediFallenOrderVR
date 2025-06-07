#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuSwitch {
struct UI_PauseMenuSwitch_C;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Gameplay {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Gameplay_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x298]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_AutoGripText();
    _Script_UMG::TextBlock*& get_AutoLockText();
    _Script_UMG::TextBlock*& get_AutoSucceedText();
    _Script_UMG::Overlay*& get_AutoSwitch();
    _Script_UMG::TextBlock*& get_AutoswitchText();
    _Script_UMG::ProgressBar*& get_BarAggro();
    _Script_UMG::ProgressBar*& get_BarDmg();
    _Script_UMG::ProgressBar*& get_BarParry();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkAutoGrip();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkAutoLockOn();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkAutoSucceed();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkHeldInputUI();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkHideHUD();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkSubtitles();
    _Script_UMG::TextBlock*& get_DiffDescription();
    _Script_UMG::Overlay*& get_Difficulty();
    _Script_UMG::TextBlock*& get_DifficultyText();
    _Script_UMG::TextBlock*& get_EnemyAggroText();
    _Script_UMG::TextBlock*& get_HeldInputUItxt();
    _Script_UMG::TextBlock*& get_HideHUDText();
    _Script_UMG::TextBlock*& get_InCombatText();
    _Script_UMG::TextBlock*& get_IncomingDmgText();
    _Script_UMG::TextBlock*& get_ParryWindowText();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Script_RsTechRT::RsLine*& get_RsLine_3();
    _Script_RsTechRT::RsLine*& get_RsLine_4();
    _Script_RsTechRT::RsLine*& get_RsLine_5();
    _Script_RsTechRT::RsLine*& get_RsLine_6();
    _Script_RsTechRT::RsLine*& get_RsLine_7();
    _Script_RsTechRT::RsLine*& get_RsLine_8();
    _Script_RsTechRT::RsLine*& get_RsLine_9();
    _Script_RsTechRT::RsLine*& get_RsLine_10();
    _Script_RsTechRT::RsLine*& get_RsLine_11();
    _Script_UMG::ScrollBox*& get_ScrollBox_0();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_selDifficulty();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_selHUDTextScale();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_selLanguage();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_selLetterBoxOpacity();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_selSubtitleScale();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_selSwitch();
    _Script_UMG::TextBlock*& get_SubtitlesText();
    _Script_UMG::TextBlock*& get_TextLanguageText();
    _Script_UMG::TextBlock*& get_txtHUDTextScale();
    _Script_UMG::TextBlock*& get_txtSubtitleOpacity();
    _Script_UMG::TextBlock*& get_txtSubtitleScale();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    void* get_DefaultTextColor();
    void* get_HighlightTextColor();
    void* get_NewDifficultyLevel();
    void* get_OldDifficultyLevel();
    void* get_ColorDeficiencyType();
    int32_t& get_localInt();
    _Script_Engine::MaterialInstanceDynamic*& get_BarParry_Material();
    _Script_Engine::MaterialInstanceDynamic*& get_BarDmg_Material();
    _Script_Engine::MaterialInstanceDynamic*& get_BarAggro_Material();
    void* get_Health();
    int32_t& get_OldAutoSwitch();
    int32_t& get_OldSubtitleScale();
    int32_t& get_OldLetterBoxOpacity();
    int32_t& get_OldLanguage();
    int32_t& get_OldHUDTextScale();
    void* get_SpecialCaseSelLanguageFont();
    static _Script_CoreUObject::Class* static_class();
    void UpdateUIHeldInput();
    void UpdateHUDTextScale(bool SetOldVal);
    void UpdateAutoGrip();
    void UpdateAutoSucceed();
    void UpdateRelatedTextHighlights(_Script_UMG::TextBlock* Text, bool Highlight);
    void UpdateRelatedTextsHighlights(void*& Text, bool Highlight);
    void SetupLanguageSelectors();
    void UpdateLetterboxOpacity(bool SetOldVal);
    void UpdateSubtitleScale(bool SetOldVal);
    void SetupText();
    void MaterialInstanceSetup();
    void UpdateHideHud();
    void UpdateAutoLockOn();
    void UpdateAutoSwitch(bool SetOldValue);
    void SetColorSeverityText();
    void SetColorDecifiencyText();
    void* GetColorSeverity();
    void* GetColorDeficiencyType();
    void UpdateLanguage(void* LanguageName);
    void UpdateDifficulty();
    void UpdateSubtitles();
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_1_Nav_Left__DelegateSignature();
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_3_Nav_Right__DelegateSignature();
    void BndEvt__chkSubtitles_K2Node_ComponentBoundEvent_20_RsButtonEvent__DelegateSignature();
    void BndEvt__chkAutoLockOn_K2Node_ComponentBoundEvent_21_RsButtonEvent__DelegateSignature();
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_22_Nav_Right__DelegateSignature();
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_24_Nav_Left__DelegateSignature();
    void BndEvt__chkHideHud_K2Node_ComponentBoundEvent_7_RsButtonEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_8_Nav_Left__DelegateSignature();
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_14_Nav_Right__DelegateSignature();
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_17_Nav_Right__DelegateSignature();
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_18_Nav_Left__DelegateSignature();
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_27_CancelledOut__DelegateSignature();
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_35_RsButtonEvent__DelegateSignature();
    void Construct();
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_34_RsButtonEvent__DelegateSignature();
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_36_CancelledOut__DelegateSignature();
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_39_CancelledOut__DelegateSignature();
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_40_RsButtonEvent__DelegateSignature();
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_43_CancelledOut__DelegateSignature();
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_44_RsButtonEvent__DelegateSignature();
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_37_Nav_Right__DelegateSignature();
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_38_RsButtonEvent__DelegateSignature();
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_41_CancelledOut__DelegateSignature();
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_42_Nav_Left__DelegateSignature();
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_46_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_47_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkAutoLockOn_K2Node_ComponentBoundEvent_50_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkHideHUD_K2Node_ComponentBoundEvent_52_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkSubtitles_K2Node_ComponentBoundEvent_53_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_54_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_55_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_56_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_0_ClickLeft__DelegateSignature();
    void BndEvt__selSwitch_K2Node_ComponentBoundEvent_2_ClickRight__DelegateSignature();
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_6_ClickLeft__DelegateSignature();
    void BndEvt__selSubtitleScale_K2Node_ComponentBoundEvent_9_ClickRight__DelegateSignature();
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_10_ClickLeft__DelegateSignature();
    void BndEvt__selLanguage_K2Node_ComponentBoundEvent_11_ClickRight__DelegateSignature();
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_12_ClickLeft__DelegateSignature();
    void BndEvt__selLetterBoxOpacity_K2Node_ComponentBoundEvent_13_ClickRight__DelegateSignature();
    void IncrementAutoSwitch(int32_t Increment);
    void SetCultureImmediate();
    void IncrementCulture(int32_t Increment);
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_5_ClickRight__DelegateSignature();
    void BndEvt__selDifficulty_K2Node_ComponentBoundEvent_4_ClickLeft__DelegateSignature();
    void ConfirmDifficulty();
    void DifficultyLeft();
    void DifficultyRight();
    void BndEvt__chkAutoSucceed_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature();
    void BndEvt__chkAutoSucceed_K2Node_ComponentBoundEvent_16_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkAutoGrip_K2Node_ComponentBoundEvent_23_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkAutoGrip_K2Node_ComponentBoundEvent_25_RsButtonEvent__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_28_ClickLeft__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_29_ClickRight__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_30_Nav_Left__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_31_Nav_Right__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_32_CancelledOut__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_33_RsButtonEvent__DelegateSignature();
    void BndEvt__selHUDTextScale_K2Node_ComponentBoundEvent_48_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkHeldInputUI_K2Node_ComponentBoundEvent_26_RsButtonEvent__DelegateSignature();
    void BndEvt__chkHeldInputUI_K2Node_ComponentBoundEvent_40_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Gameplay(int32_t EntryPoint);
}; // Size: 0x4c8
#pragma pack(pop)
}
