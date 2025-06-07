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
struct SwSimpleDestructible_PhaseRadialDamageParameters {
    private: char pad_0[0x18]; public:
    bool get_ApplyRadialDamage();
    void set_ApplyRadialDamage(bool value);
    float& get_TimeDelayToApplyDamage();
    float& get_Radius();
    float& get_DamagePoints();
    void* get_DamageType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
