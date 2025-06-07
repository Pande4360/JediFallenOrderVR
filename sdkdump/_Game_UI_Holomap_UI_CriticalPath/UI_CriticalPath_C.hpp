#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_CriticalPath {
#pragma pack(push, 1)
struct UI_CriticalPath_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x8]; public:
    _Script_UMG::Image*& get_CritPathImage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x610
#pragma pack(pop)
}
