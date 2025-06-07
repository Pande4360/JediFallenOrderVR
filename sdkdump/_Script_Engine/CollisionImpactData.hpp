#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CollisionImpactData {
    private: char pad_0[0x28]; public:
    void* get_ContactInfos();
    void* get_TotalNormalImpulse();
    void* get_TotalFrictionImpulse();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
