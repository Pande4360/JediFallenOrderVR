#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DamageType : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    bool get_bCausedByWorld();
    void set_bCausedByWorld(bool value);
    bool get_bScaleMomentumByMass();
    void set_bScaleMomentumByMass(bool value);
    bool get_bRadialDamageVelChange();
    void set_bRadialDamageVelChange(bool value);
    float& get_DamageImpulse();
    float& get_DestructibleImpulse();
    float& get_DestructibleDamageSpreadScale();
    float& get_DamageFalloff();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
