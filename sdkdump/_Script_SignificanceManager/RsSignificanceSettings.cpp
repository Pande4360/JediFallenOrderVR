#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsSignificanceSettings.hpp"
_Script_CoreUObject::Class* _Script_SignificanceManager::RsSignificanceSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SignificanceManager.RsSignificanceSettings");
    return result;
}
void* _Script_SignificanceManager::RsSignificanceSettings::get_ParticlesMinBoundsRadius() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SignificanceManager::RsSignificanceSettings::get_CharacterSignificanceSettings() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_SignificanceManager::RsSignificanceSettings::get_SkeletalMeshSignificanceSettings() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_SignificanceManager::RsSignificanceSettings::get_ParticleSystemSignificanceSettings() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SignificanceManager::RsSignificanceSettings::get_ParticlesMaxTotalNonCritical() {
    return (void*)((uintptr_t)this + 0x84);
}
