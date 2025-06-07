#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Landscape {
struct LandscapeComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeWeightmapUsage {
    private: char pad_0[0x20]; public:
    _Script_Landscape::LandscapeComponent*& get_ChannelUsage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
