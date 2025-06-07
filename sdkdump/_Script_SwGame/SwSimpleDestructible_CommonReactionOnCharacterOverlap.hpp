#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_CommonReactionOnCharacterOverlap {
    private: char pad_0[0x18]; public:
    bool get_ReactOnCharacterOverlap();
    void set_ReactOnCharacterOverlap(bool value);
    void* get_OverlapDetectionComponentName();
    float& get_MinimumCharacterSpeed();
    float& get_DamageAppliedToThisDestructibleActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
