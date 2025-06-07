#include "..\FUObjectArray.hpp"
#include "DestructibleComponent.hpp"
#include "DestructibleMesh.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\SkinnedMeshComponent.hpp"
void* _Script_ApexDestruction::DestructibleComponent::get_FractureEffects() {
    return (void*)((uintptr_t)this + 0xd50);
}
bool _Script_ApexDestruction::DestructibleComponent::get_bFractureEffectOverride() {
    return (*(uint8_t*)((uintptr_t)this + 0xd48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ApexDestruction.DestructibleComponent");
    return result;
}
void _Script_ApexDestruction::DestructibleComponent::set_bFractureEffectOverride(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd48 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ApexDestruction::DestructibleComponent::get_bEnableHardSleeping() {
    return (*(uint8_t*)((uintptr_t)this + 0xd60 + 0)) & 1 != 0;
}
void _Script_ApexDestruction::DestructibleComponent::set_bEnableHardSleeping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd60 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_ApexDestruction::DestructibleComponent::get_LargeChunkThreshold() {
    return *(float*)((uintptr_t)this + 0xd64);
}
void* _Script_ApexDestruction::DestructibleComponent::get_OnComponentFracture() {
    return (void*)((uintptr_t)this + 0xd78);
}
void _Script_ApexDestruction::DestructibleComponent::SetDestructibleMesh(_Script_ApexDestruction::DestructibleMesh* NewMesh) {
    return;
}
_Script_ApexDestruction::DestructibleMesh* _Script_ApexDestruction::DestructibleComponent::GetDestructibleMesh() {
    return;
}
void _Script_ApexDestruction::DestructibleComponent::ApplyRadiusDamage(float BaseDamage, _Script_CoreUObject::Vector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage) {
    return;
}
void _Script_ApexDestruction::DestructibleComponent::ApplyDamage(float DamageAmount, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& ImpulseDir, float ImpulseStrength) {
    return;
}
