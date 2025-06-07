#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
#include "RsPhysicalAnimationBoneParameters.hpp"
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_MotorDriveStrength() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_BoneName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_BodyMode() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_DriveMode() {
    return (void*)((uintptr_t)this + 0x9);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_TurnToKinematicBodyModeIfThatBodyOverlapsCollisions() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_MotorDriveModel() {
    return (void*)((uintptr_t)this + 0xa);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_VelocityDriveMode() {
    return (void*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_VelocityDriveStrength() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_LinearDamping() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_AngularDamping() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_PhysicsBlendWeight() {
    return *(float*)((uintptr_t)this + 0x24);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_IgnorePhysicsBlendWeightFromAnimationNotify() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::set_IgnorePhysicsBlendWeightFromAnimationNotify(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_DisableAllCollisionResponses() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::set_DisableAllCollisionResponses(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_DisableCollisionResponseIfOverlapsCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::set_DisableCollisionResponseIfOverlapsCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_TurnToKinematicBodyModeIfOverlapsCollisions() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::set_TurnToKinematicBodyModeIfOverlapsCollisions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_TurnToFreeBodyModeIfLinearDivergenceIsMoreThan() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_TurnToFreeBodyModeIfThatBodyIsInFreeMode() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_ConstraintDriveModeParameters() {
    return (void*)((uintptr_t)this + 0x48);
}
_Script_Engine::PhysicalMaterial*& _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::get_PhysicalMaterialToUse() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationBoneParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationBoneParameters");
    return result;
}
