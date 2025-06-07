#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct ComboBoxString;
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
struct RetainerBox;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Game_UI_GameMenu_Widgets_UI_Dropdown_Element {
struct UI_Dropdown_Element_C;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle_TagDebugParent {
#pragma pack(push, 1)
struct UI_PauseMenuToggle_TagDebugParent_C : public _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C {
    private: char pad_338[0x130]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_OnPress();
    _Script_UMG::WidgetAnimation*& get_OnClick();
    _Script_UMG::Image*& get_ButtonBorder();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::ComboBoxString*& get_cmbDropdown();
    _Script_UMG::Image*& get_DropdownArrow();
    _Script_UMG::ProgressBar*& get_HoldToAcceptProgress();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::Image*& get_Img_SelectorArrow_Left();
    _Script_UMG::Image*& get_Img_SelectorArrow_Right();
    _Script_UMG::Button*& get_Interact();
    _Script_UMG::TextBlock*& get_Name();
    _Script_UMG::Overlay*& get_Overlay_1();
    _Script_UMG::RetainerBox*& get_SelectedBG();
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
    static _Script_CoreUObject::Class* static_class();
    _Script_UMG::Widget* On_cmbDropdown_GenerateWidget_0(void* Item);
    void UpdateFocusVisuals0(bool& Handled);
    void SetButtonText(void* newText);
    void* Get_HoldToAcceptProgress_Visibility_0();
    void PreConstruct(bool IsDesignTime);
    void ToggleCheck(bool Enabled);
    void OnAccepted();
    void OnPressed(_Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C* DropDown);
    void Pressed_Event_0(void* String);
    void CustomEvent_0(_Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C* Focused);
    void CustomEvent_1(void* String);
    void OnCancelOut0();
    void ExecuteUbergraph_UI_PauseMenuToggle_TagDebugParent(int32_t EntryPoint);
}; // Size: 0x468
#pragma pack(pop)
}
