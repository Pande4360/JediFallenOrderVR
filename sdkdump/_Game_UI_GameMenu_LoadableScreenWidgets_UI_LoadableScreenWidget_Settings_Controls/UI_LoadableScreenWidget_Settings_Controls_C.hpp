#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "..\_Script_Engine\InputActionKeyMapping.hpp"
#include "..\_Script_Engine\InputAxisKeyMapping.hpp"
#include "..\_Script_SlateCore\FocusEvent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuSwitch {
struct UI_PauseMenuSwitch_C;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer {
struct UI_ControllerMappingContainer_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
struct UI_PauseMenuToggle_C;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Game_UI_UI_MenuButtonPromptDirectKey {
struct UI_MenuButtonPromptDirectKey_C;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
struct UI_PauseMenuBtn_Selector_C;
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
struct WidgetSwitcher;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Controls_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x318]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnPhotomode();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_btnRumble();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkInvertGamepadX();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkInvertGamepadY();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkInvertMouseX();
    _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& get_chkInvertMouseY();
    _Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C*& get_ControllerRemapScreen();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_EditControls();
    _Script_UMG::HorizontalBox*& get_GamepadInput();
    _Script_UMG::TextBlock*& get_InvertMouseXText();
    _Script_UMG::TextBlock*& get_InvertMouseYText();
    _Script_UMG::Overlay*& get_InvertXMouse();
    _Script_UMG::TextBlock*& get_InvertXText();
    _Script_UMG::Overlay*& get_InvertYMouse();
    _Script_UMG::TextBlock*& get_InvertYText();
    _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C*& get_KeyboardInput();
    _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C*& get_LeftStick();
    _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& get_MouseSensBtn();
    _Script_UMG::Overlay*& get_MouseSensitivity();
    _Script_UMG::TextBlock*& get_MouseSensText();
    _Script_UMG::TextBlock*& get_PhotomodeText();
    _Script_UMG::TextBlock*& get_PlusSign();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C*& get_RightStick();
    _Script_RsTechRT::RsLine*& get_RsLine_0();
    _Script_RsTechRT::RsLine*& get_RsLine_1();
    _Script_RsTechRT::RsLine*& get_RsLine_2();
    _Script_RsTechRT::RsLine*& get_RsLine_4();
    _Script_RsTechRT::RsLine*& get_RsLine_5();
    _Script_RsTechRT::RsLine*& get_RsLine_6();
    _Script_RsTechRT::RsLine*& get_RsLine_7();
    _Script_UMG::TextBlock*& get_RumbleText();
    _Script_UMG::ScrollBox*& get_ScrollBox_0();
    _Script_UMG::WidgetSwitcher*& get_WidgetSwitcher_0();
    void* get_SettingsTextColor();
    bool get_IsControllerRemapReady();
    void set_IsControllerRemapReady(bool value);
    void* get_PressedActionName();
    void* get_DefaultTextColor();
    void* get_HighlightTextColor();
    bool get_ControllerRemapLastSelected();
    void set_ControllerRemapLastSelected(bool value);
    bool get_IsInputSwapMode();
    void set_IsInputSwapMode(bool value);
    void* get_RefreshRemapButtons_Delegate();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    int32_t& get_OldMouseSensitivity();
    int32_t& get_StoredValue();
    static _Script_CoreUObject::Class* static_class();
    void SetMouseSensitivity();
    void UpdateMouseSensitivity(bool UpdateOldValue);
    void UpdateInvertMouseY();
    void UpdateInvertMouseX();
    void UpdateTextHighlights(bool Highlights, _Script_UMG::TextBlock* Text);
    void PlayStarChart();
    void InitializeRemapButtons();
    void BindRemapBtns();
    void SetInputSwapMode(bool IsSwapMode);
    void SetupText();
    void SwapButtonPressed(void* Action, bool& Consume);
    void OptionalConsumeBackButton0(bool& Consumed);
    void UpdatePhotomode();
    void UpdateInvertX();
    void UpdateRumble();
    void* GetRumble();
    void RemapAxisKey(void* Action, int32_t Index, _Script_Engine::InputAxisKeyMapping NewInputAxis);
    void RemapActionKey(void* Action, int32_t Index, _Script_Engine::InputActionKeyMapping NewInputAction);
    void UpdateInvertY();
    void BndEvt__chkInvertGamepadX_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__btnRumble_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature();
    void BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_14_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BndEvt__chkInvertGamepadY_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void Construct();
    void OnResetControlsToDefault(void* ActionName);
    void BndEvt__btnPhotomode_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature();
    void OnSwapInputActions(void* ActionName);
    void OnFocusLost(_Script_SlateCore::FocusEvent InFocusEvent);
    void BndEvt__EditControls_K2Node_ComponentBoundEvent_20_RsButtonEvent__DelegateSignature();
    void EnableGameMenuInputs();
    void RefreshInvertGamepadX();
    void RefreshInvertGamepadY();
    void BndEvt__btnPhotomode_K2Node_ComponentBoundEvent_17_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__btnRumble_K2Node_ComponentBoundEvent_18_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkInvertGamepadX_K2Node_ComponentBoundEvent_19_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkInvertGamepadY_K2Node_ComponentBoundEvent_21_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkInvertMouseX_K2Node_ComponentBoundEvent_1_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkInvertMouseY_K2Node_ComponentBoundEvent_6_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void BndEvt__chkInvertMouseX_K2Node_ComponentBoundEvent_7_RsButtonEvent__DelegateSignature();
    void BndEvt__chkInvertMouseY_K2Node_ComponentBoundEvent_8_RsButtonEvent__DelegateSignature();
    void ReceivedFocus0();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_2_ClickLeft__DelegateSignature();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_9_ClickRight__DelegateSignature();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_12_Nav_Right__DelegateSignature();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_15_Nav_Left__DelegateSignature();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_16_RsButtonEvent__DelegateSignature();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_22_CancelledOut__DelegateSignature();
    void IncrementMouseSensitivity(bool Increment);
    void BndEvt__ControllerRemapButtonScrollingHack_K2Node_ComponentBoundEvent_13_RsButtonEvent__DelegateSignature();
    void BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_8_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled);
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Controls(int32_t EntryPoint);
    void RefreshRemapButtons_Delegate__DelegateSignature();
}; // Size: 0x548
#pragma pack(pop)
}
