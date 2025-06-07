#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct SizeBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct HorizontalBox;
}
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_TopNav {
#pragma pack(push, 1)
struct UI_Button_TopNav_C : public _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C {
    private: char pad_4e8[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::SizeBox*& get_Button();
    _Script_UMG::Image*& get_Image_1();
    _Script_UMG::HorizontalBox*& get_Pagination();
    _Script_UMG::VerticalBox*& get_VerticalBox_0();
    _Script_UMG::TextBlock*& get_Widget_ButtonText();
    static _Script_CoreUObject::Class* static_class();
    void GetFocusedRoundedRect0(_Script_UMG::Image*& FocusedRoundedRect);
    void GetRetainerBox0(_Script_UMG::RetainerBox*& RetainerBox);
    void GetButtonText0(_Script_UMG::TextBlock*& ButtonText);
    void Construct();
    void Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void UpdateUnreadState(bool Unread);
    void ExecuteUbergraph_UI_Button_TopNav(int32_t EntryPoint);
}; // Size: 0x518
#pragma pack(pop)
}
