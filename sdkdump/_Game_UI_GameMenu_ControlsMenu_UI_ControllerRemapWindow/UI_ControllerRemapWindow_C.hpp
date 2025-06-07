#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
struct UI_PauseMenuToggle_C;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct ScrollBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector {
struct UI_ControlRemapDetector_C;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn {
struct UI_ControlRemapBtn_C;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow {
struct UI_ControlRemapRow_C;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls {
struct UI_LoadableScreenWidget_Settings_Controls_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow {
#pragma pack(push, 1)
struct UI_ControllerRemapWindow_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x1a8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::HorizontalBox*& get_AcceptBox();
    _Script_UMG::HorizontalBox*& get_BackBox();
    _Script_UMG::Image*& get_BackgroundTint();
    _Script_UMG::TextBlock*& get_BasicsTxt();
    _Script_UMG::TextBlock*& get_MapTxt();
    _Script_UMG::TextBlock*& get_Message();
    _Script_UMG::HorizontalBox*& get_MessageBox();
    _Script_UMG::Image*& get_MouseBlocker();
    _Script_UMG::TextBlock*& get_NavigationTxt();
    _Script_UMG::TextBlock*& get_RemapInput();
    _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& get_ResetDefaults();
    _Script_UMG::HorizontalBox*& get_ResetToDefaultBox();
    _Script_UMG::RetainerBox*& get_RetainerBox_2();
    _Script_UMG::ScrollBox*& get_ScrollBox_0();
    _Script_UMG::HorizontalBox*& get_TabLeftBox();
    _Script_UMG::HorizontalBox*& get_TabRightBox();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C*& get_UI_ControlRemapDetector();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_1();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_2();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_3();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt_C_4();
    _Script_UMG::TextBlock*& get_UITxt();
    _Script_UMG::TextBlock*& get_VehicleTxt();
    _Script_UMG::VerticalBox*& get_VerticalBox_0();
    bool get_IsInputSwapMode();
    void set_IsInputSwapMode(bool value);
    void* get_RefreshRemapButtons_Del();
    void* get_WindowClosed();
    void* get_AllRows();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C*& get_CurrentRow();
    bool get_FocusedOnGamePad();
    void set_FocusedOnGamePad(bool value);
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& get_RemapButton();
    void* get_TabRows();
    void* get_EnumToTabRowIndex();
    _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C*& get_ControlSettingsWidget();
    void* get_LockMouseInput_Del();
    static _Script_CoreUObject::Class* static_class();
    void TextToUpper();
    void OnTab(void* ActionName);
    void FocusGamepadOrPC(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C* TargetRow);
    void SetSectionHeader(_Script_UMG::TextBlock* Text);
    void* GetDisplayNameFromAction(void* RowName);
    void InitializeCustomNav();
    void DoNav(void* Action, bool& Consumed);
    void InitializeRemapButtons();
    void ResetAllInputMappings();
    void StoppedDetectingInput();
    void RefreshRemapButtons();
    void StartInputRemap(void* Action, _Script_InputCore::Key Key, bool IsGamepad, _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton);
    void BndEvt__ResetDefaults_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature();
    void ShowMessage(_Script_InputCore::Key Key, void* InText);
    void KeyUnboundMessage(_Script_InputCore::Key Key, void*& Actions);
    void PreConstruct(bool IsDesignTime);
    void UpdateControlsTray();
    void HideMessage();
    void BlockRemapMessage(void* IgnoredAction, _Script_InputCore::Key IgnoredKey);
    void SetLockMouseInput(bool IsLocked);
    void OnMouseFocusedButton(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton);
    void OnCancelInput(void* ActionName);
    void Construct();
    void ExecuteUbergraph_UI_ControllerRemapWindow(int32_t EntryPoint);
    void LockMouseInput_Del__DelegateSignature(bool IsLocked);
    void WindowClosed__DelegateSignature();
    void RefreshRemapButtons_Del__DelegateSignature();
}; // Size: 0x7b0
#pragma pack(pop)
}
