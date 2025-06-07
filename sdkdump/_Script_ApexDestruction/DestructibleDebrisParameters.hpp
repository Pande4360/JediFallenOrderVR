#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_ApexDestruction {
#pragma pack(push, 1)
struct DestructibleDebrisParameters {
    private: char pad_0[0x2c]; public:
    float& get_DebrisLifetimeMin();
    float& get_DebrisLifetimeMax();
    float& get_DebrisMaxSeparationMin();
    float& get_DebrisMaxSeparationMax();
    void* get_ValidBounds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
