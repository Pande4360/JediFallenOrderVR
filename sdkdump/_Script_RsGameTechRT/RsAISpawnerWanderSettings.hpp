#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISpawnerWanderSettings {
    private: char pad_0[0x8]; public:
    bool get_bCanWander();
    void set_bCanWander(bool value);
    bool get_bUseOverrideWanderRange();
    void set_bUseOverrideWanderRange(bool value);
    float& get_OverrideWanderRange();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
