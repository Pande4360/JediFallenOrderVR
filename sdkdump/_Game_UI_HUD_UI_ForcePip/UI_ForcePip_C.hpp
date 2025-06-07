#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_HUD_UI_ForcePip {
#pragma pack(push, 1)
struct UI_ForcePip_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x8]; public:
    _Script_UMG::Image*& get_Pips2();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x210
#pragma pack(pop)
}
