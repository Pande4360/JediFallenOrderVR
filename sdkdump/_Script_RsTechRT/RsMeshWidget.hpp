#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_UMG {
struct SlateVectorArtData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsMeshWidget : public _Script_UMG::Widget {
    private: char pad_100[0x18]; public:
    _Script_UMG::SlateVectorArtData*& get_VectorArtData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
