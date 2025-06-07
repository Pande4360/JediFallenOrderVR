#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener {
struct UI_Button_LoadableSubWidgetOpener_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuSwitch {
struct UI_PauseMenuSwitch_C;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
}
namespace _Script_UMG {
struct WidgetSwitcher;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Visuals {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Visuals_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x3c8]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_AbberationConsoleText();
    _Script_UMG::TextBlock*& get_AbberationText();
    _Script_UMG::TextBlock*& get_BrightnessConsoleText();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnAberrationConsole();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnChromaticAberration();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnColorSeverity();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnColorSeverityConsole();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnColorType();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnColorTypeConsole();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnFilmGrain();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnFilmGrainConsole();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnMotionBlur();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnMotionBlurConsole();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnPerfMode();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnShake();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnShakeConsole();
    _Script_UMG::TextBlock*& get_ColorblindConsoleText();
    _Script_UMG::TextBlock*& get_ColorblindTypeText();
    _Script_UMG::TextBlock*& get_ColorSeverityConsoleText();
    _Script_UMG::TextBlock*& get_ColorSeverityText();
    _Script_UMG::CanvasPanel*& get_Console_Settings();
    _Script_UMG::WidgetSwitcher*& get_ConsoleOrPC();
    _Script_UMG::TextBlock*& get_FilmGrainConsoleText();
    _Script_UMG::TextBlock*& get_FilmGrainText();
    _Script_UMG::TextBlock*& get_ldOpenGamma();
    _Script_UMG::TextBlock*& get_MotionBlurConsoleText();
    _Script_UMG::TextBlock*& get_MotionBlurText();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& get_OpenBrightness();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& get_OpenBrightnessConsole();
    _Script_UMG::CanvasPanel*& get_PCSettings();
    _Script_UMG::TextBlock*& get_PerfModeConsoleText();
    _Script_UMG::TextBlock*& get_PerfModeDescription();
    _Script_UMG::Overlay*& get_PerformanceMode();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Script_RsTechRT::RsLine*& get_RsLine_3();
    _Script_RsTechRT::RsLine*& get_RsLine_5();
    _Script_RsTechRT::RsLine*& get_RsLine_7();
    _Script_RsTechRT::RsLine*& get_RsLine_8();
    _Script_RsTechRT::RsLine*& get_RsLine_9();
    _Script_RsTechRT::RsLine*& get_RsLine_10();
    _Script_RsTechRT::RsLine*& get_RsLine_11();
    _Script_RsTechRT::RsLine*& get_RsLine_12();
    _Script_RsTechRT::RsLine*& get_RsLine_13();
    _Script_RsTechRT::RsLine*& get_RsLine_14();
    _Script_UMG::ScrollBox*& get_ScrollBox_1();
    _Script_UMG::TextBlock*& get_ShakeConsoleText();
    _Script_UMG::TextBlock*& get_ShakeText();
    _Script_UMG::VerticalBox*& get_VerticalBox_0();
    void* get_Resolutions();
    void* get_Quality();
    void* get_ConsoleResolutions();
    void* get_ColorDeficiencyType();
    void* get_AAQuality();
    void* get_DefaultTextColor();
    void* get_HighlightTextColor();
    void* get_SettingsTextColor();
    void* get_OldColorType();
    int32_t& get_OldColorSeverity();
    _Script_SwGame::SWGameUserSettings*& get_SWGame_UserSettings();
    static _Script_CoreUObject::Class* static_class();
    void UpdateTextHighlights(bool Highlights, _Script_UMG::TextBlock* Text);
    void SetPerfModeToggle();
    void* IsPerfModeEnabled();
    void SetupConsoleText();
    void SetupText();
    void SetColorTypeText();
    void* GetColorType();
    void* GetColorSeverity();
    void SetColorSeverityText();
    void SetCameraShakeToggle();
    void SetGammaText();
    void* GetShake();
    void UpdateShake();
    void SetAberrationToggle();
    void SetFilmGrainToggle();
    void SetMotionBlurToggle();
    void SetupButtonText();
    void* Get_btnHDROutput_Visibility_0();
    bool Get_btnHDROutput_bIsEnabled_0();
    void* IsChromaticAberrationEnabled();
    void* IsFilmGrainEnabled();
    void IsConsole(bool& IsConsole);
    bool IsMotionBlurEnabled();
    void AdjustBrightness(bool Increase_);
    void* GetBrightness();
    void BndEvt__btnFilmGrain_K2Node_ComponentBoundEvent_23_RsButtonEvent__DelegateSignature();
    void BndEvt__btnChromaticAberration_K2Node_ComponentBoundEvent_24_RsButtonEvent__DelegateSignature();
    void BndEvt__btnSave_K2Node_ComponentBoundEvent_39_RsButtonEvent__DelegateSignature();
    void BndEvt__btnConsoleSave_K2Node_ComponentBoundEvent_40_RsButtonEvent__DelegateSignature();
    void BndEvt__btnMotionBlur_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void Construct();
    void BndEvt__btnMotionBlurConsole_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void BndEvt__btnFilmGrainConsole_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature();
    void BndEvt__btnAberrationConsole_K2Node_ComponentBoundEvent_8_RsButtonEvent__DelegateSignature();
    void BndEvt__btnShake_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature();
    void BndEvt__btnShakeConsole_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void BndEvt__btnVsyncConsole_K2Node_ComponentBoundEvent_10_RsButtonEvent__DelegateSignature();
    void BndEvt__ColorTypeBtn_K2Node_ComponentBoundEvent_48_Nav_Left__DelegateSignature();
    void BndEvt__ColorTypeBtn_K2Node_ComponentBoundEvent_49_Nav_Right__DelegateSignature();
    void BndEvt__ColorSeverityBtn_K2Node_ComponentBoundEvent_50_Nav_Left__DelegateSignature();
    void BndEvt__ColorSeverityBtn_K2Node_ComponentBoundEvent_51_Nav_Right__DelegateSignature();
    void BndEvt__btnColorType_K2Node_ComponentBoundEvent_2_Nav_Left__DelegateSignature();
    void BndEvt__btnColorType_K2Node_ComponentBoundEvent_6_Nav_Right__DelegateSignature();
    void BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_11_Nav_Right__DelegateSignature();
    void BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_13_Nav_Left__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__btnColorTypeConsole_K2Node_ComponentBoundEvent_58_RsButtonEvent__DelegateSignature();
    void BndEvt__btnColorTypeConsole_K2Node_ComponentBoundEvent_59_CancelledOut__DelegateSignature();
    void BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_62_RsButtonEvent__DelegateSignature();
    void BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_63_CancelledOut__DelegateSignature();
    void BndEvt__btnColorType_K2Node_ComponentBoundEvent_60_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnColorTypeConsole_K2Node_ComponentBoundEvent_61_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnAberrationConsole_K2Node_ComponentBoundEvent_64_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnChromaticAberration_K2Node_ComponentBoundEvent_65_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnColorSeverity_K2Node_ComponentBoundEvent_66_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnFilmGrain_K2Node_ComponentBoundEvent_68_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnFilmGrainConsole_K2Node_ComponentBoundEvent_69_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnMotionBlur_K2Node_ComponentBoundEvent_72_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnMotionBlurConsole_K2Node_ComponentBoundEvent_73_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnPerfMode_K2Node_ComponentBoundEvent_74_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnShake_K2Node_ComponentBoundEvent_75_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnShakeConsole_K2Node_ComponentBoundEvent_76_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnColorSeverityConsole_K2Node_ComponentBoundEvent_78_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnColorSeverityConsole_K2Node_ComponentBoundEvent_79_RsButtonEvent__DelegateSignature();
    void BndEvt__btnFilmGrain_K2Node_ComponentBoundEvent_80_CancelledOut__DelegateSignature();
    void BndEvt__btnColorType_K2Node_ComponentBoundEvent_81_RsButtonEvent__DelegateSignature();
    void BndEvt__btnColorType_K2Node_ComponentBoundEvent_82_CancelledOut__DelegateSignature();
    void BndEvt__OpenBrightness_K2Node_ComponentBoundEvent_83_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenBrightnessConsole_K2Node_ComponentBoundEvent_84_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenBrightness_K2Node_ComponentBoundEvent_85_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenBrightnessConsole_K2Node_ComponentBoundEvent_86_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Visuals(int32_t EntryPoint);
}; // Size: 0x5f8
#pragma pack(pop)
}
