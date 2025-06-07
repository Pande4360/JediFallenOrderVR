#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Texture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VolumeTexture : public Texture {
    private: char pad_b0[0x58]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
