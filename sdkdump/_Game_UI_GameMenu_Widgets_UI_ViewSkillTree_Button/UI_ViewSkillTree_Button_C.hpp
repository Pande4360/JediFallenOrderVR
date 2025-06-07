#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button {
#pragma pack(push, 1)
struct UI_ViewSkillTree_Button_C : public _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C {
    private: char pad_4e8[0x30]; public:
    _Script_UMG::WidgetAnimation*& get_OnFocus();
    _Script_UMG::Image*& get_DefaultButton_Frame();
    _Script_UMG::Image*& get_FocusedButton_Frame();
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::TextBlock*& get_txt_ButtonText();
    _Script_UMG::Button*& get_ViewSkillButton();
    static _Script_CoreUObject::Class* static_class();
    void UI_UpdateFocusState(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive);
    void UpdateElementVisibility(bool& Result);
    void GetButtonText0(_Script_UMG::TextBlock*& ButtonText);
}; // Size: 0x518
#pragma pack(pop)
}
