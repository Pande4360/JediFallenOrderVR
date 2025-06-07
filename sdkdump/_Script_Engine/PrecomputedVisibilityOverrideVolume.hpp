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
struct PrecomputedVisibilityOverrideVolume : public Volume {
    private: char pad_398[0x30]; public:
    void* get_OverrideVisibleActors();
    void* get_OverrideInvisibleActors();
    void* get_OverrideInvisibleLevels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c8
#pragma pack(pop)
}
