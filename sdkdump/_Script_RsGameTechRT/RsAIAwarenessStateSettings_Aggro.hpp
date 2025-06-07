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
struct RsAIAwarenessStateSettings_Aggro {
    private: char pad_0[0x10]; public:
    float& get_MinCooldownTimeWhenThreatsPresent();
    float& get_MaxCooldownTimeWhenThreatsPresent();
    float& get_MinCooldownTimeWhenNoThreats();
    float& get_MaxCooldownTimeWhenNoThreats();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
