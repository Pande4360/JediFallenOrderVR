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
struct RsFireProjectileParameter {
    private: char pad_0[0x8]; public:
    bool get_bFireAlternateProjectileType();
    void set_bFireAlternateProjectileType(bool value);
    bool get_bCanShootDuringForceSlow();
    void set_bCanShootDuringForceSlow(bool value);
    void* get_ShotAccuracyOverrideMode();
    float& get_ShootingConeHalfAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
