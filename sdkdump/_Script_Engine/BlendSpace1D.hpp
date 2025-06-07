#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlendSpaceBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlendSpace1D : public BlendSpaceBase {
    private: char pad_148[0x8]; public:
    bool get_bScaleAnimation();
    void set_bScaleAnimation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x150
#pragma pack(pop)
}
