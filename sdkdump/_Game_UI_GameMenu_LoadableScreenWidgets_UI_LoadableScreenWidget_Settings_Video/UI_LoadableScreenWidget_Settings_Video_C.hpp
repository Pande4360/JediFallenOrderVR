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
struct TextBlock;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuSwitch {
struct UI_PauseMenuSwitch_C;
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
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Video {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Video_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x410]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::TextBlock*& get_AAText();
    _Script_UMG::HorizontalBox*& get_AntiAliasingSettings();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnAA();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnDisplayIndex();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnDynamicResolution();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnFrameRate();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnHDROutput();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnPostProcess();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnResolution();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_BtnShadows();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnTextures();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnVFX();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnVsync();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_btnWindow();
    _Script_UMG::Overlay*& get_Display();
    _Script_UMG::TextBlock*& get_DynScalingText();
    _Script_UMG::TextBlock*& get_FPSText();
    _Script_UMG::VerticalBox*& get_GeneralSettings();
    _Script_UMG::Overlay*& get_HDR();
    _Script_UMG::TextBlock*& get_HDRText();
    _Script_UMG::TextBlock*& get_MonitorText();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_OverallSettingsBtn();
    _Script_UMG::SizeBox*& get_PCSettings();
    _Script_UMG::TextBlock*& get_PostProcessText();
    _Script_UMG::TextBlock*& get_QualityText();
    _Script_UMG::Overlay*& get_Resolution();
    _Script_UMG::TextBlock*& get_ResolutionText();
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
    _Script_RsTechRT::RsLine*& get_RsLine_12();
    _Script_RsTechRT::RsLine*& get_RsLine_13();
    _Script_UMG::ScrollBox*& get_ScrollBox_0();
    _Script_UMG::HorizontalBox*& get_ShadowSettings();
    _Script_UMG::TextBlock*& get_ShadowsText();
    _Script_UMG::TextBlock*& get_TexturesText();
    _Script_UMG::TextBlock*& get_VFXText();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_ViewDistanceBtn();
    _Script_UMG::TextBlock*& get_ViewDistanceText();
    _Script_UMG::TextBlock*& get_VSyncText();
    _Script_UMG::TextBlock*& get_WindowText();
    void* get_Resolutions();
    void* get_Quality();
    void* get_ConsoleResolutions();
    void* get_ColorDeficiencyType();
    void* get_AAQuality();
    bool get_AdvancedOptionsOpen();
    void set_AdvancedOptionsOpen(bool value);
    void* get_DefaultTextColor();
    void* get_HighlightTextColor();
    void* get_SettingsTextColor();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_OverallText();
    int32_t& get_OldTextureQuality();
    int32_t& get_OldOverallSettings();
    int32_t& get_OldViewDistance();
    int32_t& get_OldVFXSettings();
    int32_t& get_OldShadowQuality();
    int32_t& get_OldPostProcessQuality();
    int32_t& get_OldAAQuality();
    int32_t& get_OldFoliageQuality();
    void* get_WindowMode();
    void* get_OldResolution();
    int32_t& get_DisplayIndexValue();
    int32_t& get_MaxFPSValue();
    void* get_SupportedFPS();
    static _Script_CoreUObject::Class* static_class();
    void SetVSyncToggle();
    void* Get_Resolution_Visibility_0();
    void IncrementMaxFPS(int32_t Increment);
    void SetMaxFPSText();
    void SetDynamicResolutionEnabled();
    void* Get_DisplayIndex_Visibility_0();
    void SetDisplayIndexText();
    void SetHDRToggle();
    void* Get_HDR_Visibility_0();
    void SetVSyncEnabled();
    void* IsVsyncEnabledd();
    void UpdateTextHighlights(bool Highlights, _Script_UMG::TextBlock* Text);
    void SetupText();
    void* IsVSyncEnabled();
    void SetWindowModeText();
    void SetResolutionText();
    void SetFoliageText();
    void SetPostText();
    void SetVFXText();
    void SetTexturesText();
    void SetAAText();
    void SetShadowsText();
    void SetOverallText();
    void SetVDQualityText();
    void SetupButtonText();
    void* GetQualityString(int32_t QualityIndex, void*& QualityArray);
    void* GetAAQuality();
    void* GetFoliageQuality();
    void* GetPostProcessQuality();
    void* GetVFXQuality();
    void* GetTextureQuality();
    void* GetShadowQuality();
    void* GetQualityInternal(int32_t QualityIndex);
    void* GetVDQuality();
    void IsConsole(bool& IsConsole);
    void ModifyResolution(int32_t Modifier);
    void* GetQuality();
    void* GetWindowedMode();
    void* GetResolution();
    void Construct();
    void BndEvt__ShadowsBtn_K2Node_ComponentBoundEvent_52_Nav_Left__DelegateSignature();
    void BndEvt__ShadowsBtn_K2Node_ComponentBoundEvent_53_Nav_Right__DelegateSignature();
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_54_Nav_Left__DelegateSignature();
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_55_Nav_Right__DelegateSignature();
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_9_Nav_Left__DelegateSignature();
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_10_Nav_Right__DelegateSignature();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_42_Nav_Left__DelegateSignature();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_43_Nav_Right__DelegateSignature();
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_44_Nav_Right__DelegateSignature();
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_45_Nav_Left__DelegateSignature();
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_56_Nav_Right__DelegateSignature();
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_57_Nav_Left__DelegateSignature();
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_58_Nav_Left__DelegateSignature();
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_59_Nav_Right__DelegateSignature();
    void BndEvt__btnFoliage_K2Node_ComponentBoundEvent_60_Nav_Right__DelegateSignature();
    void BndEvt__btnFoliage_K2Node_ComponentBoundEvent_61_Nav_Left__DelegateSignature();
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_62_Nav_Right__DelegateSignature();
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_63_Nav_Left__DelegateSignature();
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_64_Nav_Right__DelegateSignature();
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_65_Nav_Left__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_30_RsButtonEvent__DelegateSignature();
    void ModalClosed();
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_16_RsButtonEvent__DelegateSignature();
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_17_CancelledOut__DelegateSignature();
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_28_CancelledOut__DelegateSignature();
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_29_RsButtonEvent__DelegateSignature();
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_33_CancelledOut__DelegateSignature();
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_34_RsButtonEvent__DelegateSignature();
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_37_CancelledOut__DelegateSignature();
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_38_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnShadows_K2Node_ComponentBoundEvent_41_RsButtonEvent__DelegateSignature();
    void BndEvt__BtnShadows_K2Node_ComponentBoundEvent_46_CancelledOut__DelegateSignature();
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_49_RsButtonEvent__DelegateSignature();
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_50_CancelledOut__DelegateSignature();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_67_RsButtonEvent__DelegateSignature();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_68_CancelledOut__DelegateSignature();
    void BndEvt__btnFoliage_K2Node_ComponentBoundEvent_71_RsButtonEvent__DelegateSignature();
    void BndEvt__btnFoliage_K2Node_ComponentBoundEvent_72_CancelledOut__DelegateSignature();
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_75_RsButtonEvent__DelegateSignature();
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_76_CancelledOut__DelegateSignature();
    void ModalCanceled();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_18_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_31_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_32_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__BtnShadows_K2Node_ComponentBoundEvent_35_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_36_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_39_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_40_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_47_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_48_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnVsync_K2Node_ComponentBoundEvent_9_RsButtonEvent__DelegateSignature();
    void BndEvt__btnVsync_K2Node_ComponentBoundEvent_77_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnHDROutput_K2Node_ComponentBoundEvent_71_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnToggleHDR_K2Node_ComponentBoundEvent_7_RsButtonEvent__DelegateSignature();
    void BndEvt__btnDisplayIndex_K2Node_ComponentBoundEvent_13_RsButtonEvent__DelegateSignature();
    void BndEvt__btnDisplayIndex_K2Node_ComponentBoundEvent_14_Nav_Right__DelegateSignature();
    void BndEvt__btnDisplayIndex_K2Node_ComponentBoundEvent_21_Nav_Left__DelegateSignature();
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_2_CancelledOut__DelegateSignature();
    void BndEvt__btnDynamicResolution_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_5_Nav_Right__DelegateSignature();
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_6_Nav_Left__DelegateSignature();
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_7_RsButtonEvent__DelegateSignature();
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_12_CancelledOut__DelegateSignature();
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_14_ClickLeft__DelegateSignature();
    void BndEvt__btnWindow_K2Node_ComponentBoundEvent_19_ClickRight__DelegateSignature();
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_20_ClickLeft__DelegateSignature();
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_22_ClickRight__DelegateSignature();
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_23_ClickLeft__DelegateSignature();
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_24_ClickRight__DelegateSignature();
    void BndEvt__btnDisplayIndex_K2Node_ComponentBoundEvent_25_ClickLeft__DelegateSignature();
    void BndEvt__btnDisplayIndex_K2Node_ComponentBoundEvent_26_ClickRight__DelegateSignature();
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_27_ClickLeft__DelegateSignature();
    void BndEvt__OverallSettingsBtn_K2Node_ComponentBoundEvent_51_ClickRight__DelegateSignature();
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_66_ClickLeft__DelegateSignature();
    void BndEvt__ViewDistanceBtn_K2Node_ComponentBoundEvent_69_ClickRight__DelegateSignature();
    void BndEvt__BtnShadows_K2Node_ComponentBoundEvent_70_ClickLeft__DelegateSignature();
    void BndEvt__BtnShadows_K2Node_ComponentBoundEvent_73_ClickRight__DelegateSignature();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_74_ClickLeft__DelegateSignature();
    void BndEvt__btnAA_K2Node_ComponentBoundEvent_78_ClickRight__DelegateSignature();
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_79_ClickLeft__DelegateSignature();
    void BndEvt__btnTextures_K2Node_ComponentBoundEvent_80_ClickRight__DelegateSignature();
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_81_ClickLeft__DelegateSignature();
    void BndEvt__btnVFX_K2Node_ComponentBoundEvent_82_ClickRight__DelegateSignature();
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_83_ClickLeft__DelegateSignature();
    void BndEvt__btnPostProcess_K2Node_ComponentBoundEvent_84_ClickRight__DelegateSignature();
    void BndEvt__btnDynamicResolution_K2Node_ComponentBoundEvent_4_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnFrameRate_K2Node_ComponentBoundEvent_11_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnDisplayIndex_K2Node_ComponentBoundEvent_85_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void IncrementWindowMode(int32_t Increment);
    void ApplyWindowModeSettings();
    void UpdateTargetFPS();
    void UpdateDisplayIndex();
    void IncrementDisplayIndex(int32_t Increment);
    void ApplyResolution();
    void BndEvt__btnResolution_K2Node_ComponentBoundEvent_86_RsButtonEvent__DelegateSignature();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Video(int32_t EntryPoint);
}; // Size: 0x640
#pragma pack(pop)
}
