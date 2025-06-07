#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuSwitch {
struct UI_PauseMenuSwitch_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener {
struct UI_Button_LoadableSubWidgetOpener_C;
}
namespace _Script_RsTechRT {
struct RsLine;
}
namespace _Game_UI_GameMenu_Elements_UI_Element_Base {
struct UI_Element_Base_C;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Account {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Account_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x240]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnShareUsageConsole();
    _Script_UMG::TextBlock*& get_CreditsText();
    _Script_UMG::TextBlock*& get_DataUsagePolicy();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& get_OpenCredits();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& get_OpenPrivacyPolicy();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C*& get_OpenUserAgreement();
    _Script_UMG::TextBlock*& get_PrivacyText();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_8();
    _Script_RsTechRT::RsLine*& get_RsLine_11();
    _Script_RsTechRT::RsLine*& get_RsLine_12();
    _Script_UMG::Overlay*& get_ShareData();
    _Script_UMG::TextBlock*& get_ShareUsageDataText();
    _Script_UMG::TextBlock*& get_UserAgreementText();
    void* get_SettingsTextColor();
    void* get_DefaultTextColor();
    void* get_HighlightTextColor();
    static _Script_CoreUObject::Class* static_class();
    void UpdateTextHighlights(bool Highlights, _Script_UMG::TextBlock* Text);
    void BndEvt__OpenPrivacyPolicy_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenPrivacyPolicy_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenUserAgreement_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenUserAgreement_K2Node_ComponentBoundEvent_6_RsButtonEvent__DelegateSignature();
    void BndEvt__btnShareUsageConsole_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void Construct();
    void BndEvt__btnShareUsageConsole_K2Node_ComponentBoundEvent_7_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__OpenCredits_K2Node_ComponentBoundEvent_1_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenCredits_K2Node_ComponentBoundEvent_2_RsButtonEvent__DelegateSignature();
    void BndEvt__OpenCredits_K2Node_ComponentBoundEvent_9_OnCallAcceptedEvent__DelegateSignature(_Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C* ElementBase);
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Account(int32_t EntryPoint);
}; // Size: 0x470
#pragma pack(pop)
}
