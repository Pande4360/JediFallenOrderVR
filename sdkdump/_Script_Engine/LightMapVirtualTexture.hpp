#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "VirtualTexture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightMapVirtualTexture : public VirtualTexture {
    private: char pad_50[0x8]; public:
    int32_t& get_LayerFlags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
