#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector {
struct UI_ControlRemapDetector_C;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow {
struct UI_ControlRemapRow_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct PointerEvent;
}
namespace _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn {
#pragma pack(push, 1)
struct UI_ControlRemapBtn_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0xd8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Invalid();
    _Script_UMG::WidgetAnimation*& get_OnPress();
    _Script_UMG::WidgetAnimation*& get_OnClick();
    _Script_UMG::Image*& get_ButtonBorder();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::Border*& get_GreyOut();
    _Script_UMG::ProgressBar*& get_HoldToAcceptProgress();
    _Script_UMG::Overlay*& get_Overlay_1();
    _Script_UMG::SizeBox*& get_SizeBox_0();
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    float& get_HoldProgress();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C*& get_InputDetector();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    bool get_isController();
    void set_isController(bool value);
    void* get_Action();
    void* get_Key();
    void* get_StartInputRemap_Delegate();
    bool get_CannotBeChanged();
    void set_CannotBeChanged(bool value);
    bool get_CurrentlySelected();
    void set_CurrentlySelected(bool value);
    void* get_SendKeyForRemap();
    _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C*& get_RemapRow();
    void* get_OnMouseFocused();
    static _Script_CoreUObject::Class* static_class();
    void ShowButton();
    void ShowString(void* InText);
    float Get_HoldToAcceptProgress_Percent_0();
    void UpdateFocusVisuals(bool& Handled);
    void OnAccepted0();
    void Initialize(void* Action);
    void RefreshButton();
    void TempChangeButton(_Script_InputCore::Key Key);
    void ShowRemapText();
    void UpdateButton(_Script_InputCore::Key NewKey);
    void SetCannotBeChanged();
    void OnFocused0();
    void OnUnfocused0();
    void OnFocusGroupDisabled0();
    void OnFocusGroupEnabled0();
    void PlayInvalidAnim();
    void MouseClicked();
    void OnMouseEnter(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent);
    void ExecuteUbergraph_UI_ControlRemapBtn(int32_t EntryPoint);
    void OnMouseFocused__DelegateSignature(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton);
    void SendKeyForRemap__DelegateSignature(_Script_InputCore::Key NewKey);
    void StartInputRemap_Delegate__DelegateSignature(void* Action, _Script_InputCore::Key Key, bool IsGamepad, _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton);
}; // Size: 0x330
#pragma pack(pop)
}
