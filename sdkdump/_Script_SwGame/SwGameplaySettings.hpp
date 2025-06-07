#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGameplaySettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x80]; public:
    void* get_DefaultForceMeterTable();
    void* get_DefaultAbilityPriorityPresetTable();
    float& get_ForceSlowParticlesPerCubicMeter();
    void* get_DefaultProjectilePresetTable();
    void* get_ProjectileReflectionModeForHero();
    void* get_ExplosiveRadialDamageCollisionChannel();
    void* get_LowerWeaponSectionName();
    void* get_HighlightMaterial();
    float& get_FallDistanceToKill();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
