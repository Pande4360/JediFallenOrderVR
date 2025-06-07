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
struct DestructibleDamageParameters {
    private: char pad_0[0x1c]; public:
    float& get_DamageThreshold();
    float& get_DamageSpread();
    bool get_bEnableImpactDamage();
    void set_bEnableImpactDamage(bool value);
    float& get_ImpactDamage();
    int32_t& get_DefaultImpactDamageDepth();
    bool get_bCustomImpactResistance();
    void set_bCustomImpactResistance(bool value);
    float& get_ImpactResistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
