#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Widgets_UI_Widget_PipHolder_Pip {
#pragma pack(push, 1)
struct UI_Widget_PipHolder_Pip_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x18]; public:
    _Script_UMG::Image*& get_PipImage();
    _Script_UMG::RetainerBox*& get_RetainerBox_0();
    void* get_CurrentPipState();
    static _Script_CoreUObject::Class* static_class();
    void UpdateUnreadState(bool Unread, bool& UnreadFlag);
    void UpdatePipState(void* NewPipState, bool Unread);
}; // Size: 0x220
#pragma pack(pop)
}
