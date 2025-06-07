#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct Border;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Overlay;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct ComboBoxString;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle {
#pragma pack(push, 1)
struct UI_PauseMenuToggle_C : public _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C {
    private: char pad_338[0x158]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_OnPress();
    _Script_UMG::WidgetAnimation*& get_OnClick();
    _Script_UMG::Border*& get_Border_0();
    _Script_UMG::Image*& get_ButtonBorder();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::ProgressBar*& get_HoldToAcceptProgress();
    _Script_UMG::Image*& get_Img_SelectorArrow_Left();
    _Script_UMG::Image*& get_Img_SelectorArrow_Right();
    _Script_UMG::Button*& get_Interact();
    _Script_UMG::Button*& get_LeftBtn();
    _Script_UMG::Overlay*& get_Overlay_1();
    _Script_UMG::Button*& get_RightBtn();
    _Script_UMG::Image*& get_SelectedBG();
    _Script_UMG::SizeBox*& get_SizeBox_0();
    void* get_DefaultStyle();
    void* get_HighlightedStyle();
    void* get_PressedStyle();
    void* get_HighlightedStyle_FocusGroupDisabled();
    bool get_IsToggled();
    void set_IsToggled(bool value);
    bool get_IsAToggle();
    void set_IsAToggle(bool value);
    _Script_UMG::ComboBoxString*& get_ComboBoxRef();
    void* get_ClickLeft();
    void* get_ClickRight();
    bool get_SelectOnClick();
    void set_SelectOnClick(bool value);
    float& get_MinDesiredWidth();
    bool get_CancelOnUnfocus();
    void set_CancelOnUnfocus(bool value);
    bool get_CancelOnClick();
    void set_CancelOnClick(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateFocusVisuals0(bool& Handled);
    void SetButtonText(void* newText);
    void* Get_HoldToAcceptProgress_Visibility_0();
    void PreConstruct(bool IsDesignTime);
    void ToggleCheck(bool Enabled);
    void OnAccepted();
    void OnCancelOut0();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ForceOnAccepted();
    void OnFocused();
    void BndEvt__LeftBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RightBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnUnfocused();
    void OnFocusGroupEnabled();
    void OnFocusGroupDisabled();
    void ClickCancel();
    void ExecuteUbergraph_UI_PauseMenuToggle(int32_t EntryPoint);
    void ClickRight__DelegateSignature();
    void ClickLeft__DelegateSignature();
}; // Size: 0x490
#pragma pack(pop)
}
