#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Holomap_UI_DeathLocation {
#pragma pack(push, 1)
struct UI_DeathLocation_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x10]; public:
    _Script_UMG::Image*& get_Image_0();
    _Script_UMG::CanvasPanel*& get_MainCanvas();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x618
#pragma pack(pop)
}
