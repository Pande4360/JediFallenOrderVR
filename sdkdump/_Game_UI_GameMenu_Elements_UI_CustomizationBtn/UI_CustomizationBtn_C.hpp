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
struct Image;
}
namespace _Script_UMG {
struct ComboBoxString;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct ProgressBar;
}
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Elements_UI_CustomizationBtn {
#pragma pack(push, 1)
struct UI_CustomizationBtn_C : public _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C {
    private: char pad_338[0x110]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::WidgetAnimation*& get_OnPress();
    _Script_UMG::WidgetAnimation*& get_OnClick();
    _Script_UMG::Image*& get_ButtonBorder();
    _Script_UMG::TextBlock*& get_ButtonLabel();
    _Script_UMG::Image*& get_FocusBG();
    _Script_UMG::ProgressBar*& get_HoldToAcceptProgress();
    _Script_UMG::Image*& get_Img_SelectorArrow_Left();
    _Script_UMG::Image*& get_Img_SelectorArrow_Right();
    _Script_UMG::Image*& get_PulseImage();
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
    void UpdateFocusVisuals0(bool& Handled);
    void SetButtonText(void* newText);
    void* Get_HoldToAcceptProgress_Visibility_0();
    void PreConstruct(bool IsDesignTime);
    void ToggleCheck(bool Enabled);
    void OnAccepted();
    void OnCancelOut0();
    void ExecuteUbergraph_UI_CustomizationBtn(int32_t EntryPoint);
}; // Size: 0x448
#pragma pack(pop)
}
