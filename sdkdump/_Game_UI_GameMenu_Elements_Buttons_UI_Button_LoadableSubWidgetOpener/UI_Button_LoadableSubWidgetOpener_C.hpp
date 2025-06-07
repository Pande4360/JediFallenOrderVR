#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener {
#pragma pack(push, 1)
struct UI_Button_LoadableSubWidgetOpener_C : public _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C {
    private: char pad_4e8[0x1a8]; public:
    void* get_UberGraphFrame();
    _Script_UMG::SizeBox*& get_Button();
    _Script_UMG::Image*& get_ButtonBorder();
    _Script_UMG::Image*& get_FocusedRoundedRect();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    _Script_UMG::TextBlock*& get_Widget_ButtonText();
    bool get_CurrentlySelected();
    void set_CurrentlySelected(bool value);
    void* get_UIStyleSheet();
    static _Script_CoreUObject::Class* static_class();
    void GetFocusedRoundedRect0(_Script_UMG::Image*& FocusedRoundedRect);
    void GetRetainerBox0(_Script_UMG::RetainerBox*& RetainerBox);
    void GetButtonText0(_Script_UMG::TextBlock*& ButtonText);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnFocused();
    void OnUnfocused();
    void ExecuteUbergraph_UI_Button_LoadableSubWidgetOpener(int32_t EntryPoint);
}; // Size: 0x690
#pragma pack(pop)
}
