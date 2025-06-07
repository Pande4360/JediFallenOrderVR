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
struct RsDamageFromPhysicsCollisionCategory {
    private: char pad_0[0x30]; public:
    void* get_CategoryName();
    void* get_MassLimits();
    void* get_VelocityLimits();
    float& get_HealthDamageOnPhysicsHit();
    void* get_DamageType();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
