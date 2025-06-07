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
struct RsAIAwarenessStateSettings_Alert {
    private: char pad_0[0x18]; public:
    float& get_MinCooldownTime();
    float& get_MaxCooldownTime();
    float& get_MinBaseDelayForDefaultReaction();
    float& get_MaxBaseDelayForDefaultReaction();
    float& get_MinDistanceDelayForDefaultReaction();
    float& get_MaxDistanceDelayForDefaultReaction();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
