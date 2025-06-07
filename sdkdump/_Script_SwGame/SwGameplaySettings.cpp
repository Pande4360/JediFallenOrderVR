#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "SwGameplaySettings.hpp"
void* _Script_SwGame::SwGameplaySettings::get_DefaultProjectilePresetTable() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwGameplaySettings::get_DefaultForceMeterTable() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SwGame::SwGameplaySettings::get_LowerWeaponSectionName() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::SwGameplaySettings::get_ProjectileReflectionModeForHero() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_SwGame::SwGameplaySettings::get_DefaultAbilityPriorityPresetTable() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::SwGameplaySettings::get_ForceSlowParticlesPerCubicMeter() {
    return *(float*)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwGameplaySettings::get_ExplosiveRadialDamageCollisionChannel() {
    return (void*)((uintptr_t)this + 0x89);
}
void* _Script_SwGame::SwGameplaySettings::get_HighlightMaterial() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_SwGame::SwGameplaySettings::get_FallDistanceToKill() {
    return *(float*)((uintptr_t)this + 0xb0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGameplaySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGameplaySettings");
    return result;
}
