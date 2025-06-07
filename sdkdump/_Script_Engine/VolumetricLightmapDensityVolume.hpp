#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VolumetricLightmapDensityVolume : public Volume {
    private: char pad_398[0x8]; public:
    void* get_AllowedMipLevelRange();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
