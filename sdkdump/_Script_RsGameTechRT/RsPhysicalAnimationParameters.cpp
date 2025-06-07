#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicalMaterial.hpp"
#include "RsPhysicalAnimationMotorsDriveProfile.hpp"
#include "RsPhysicalAnimationParameters.hpp"
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_DoNotActivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_ZeroRsPhysicsVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_BonesOverride() {
    return (void*)((uintptr_t)this + 0xe0);
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_DoNotActivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_ProfileName() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_DefaultBone() {
    return (void*)((uintptr_t)this + 0x10);
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_ApplyRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_RootBoneBody() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_JointsAngularOverride() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_JointsLinearOverride() {
    return (void*)((uintptr_t)this + 0x100);
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_DoNotForceDependentComponentsToPostPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12e + 0);
    *(uint8_t*)((uintptr_t)this + 0x12e + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_MaximumLinearVelocity() {
    return *(float*)((uintptr_t)this + 0x110);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_OverrideBlendTimeForPhysicsBlendWeightFromAnimationNotifies() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_MaximumAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x114);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_ConfigureCollisionSettingsForCharacterWeapons() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 64 != 0;
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_MinimumPhysicsBlendWeightFromAnimationNotifies() {
    return *(float*)((uintptr_t)this + 0x118);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_MaximumPhysicsBlendWeightFromAnimationNotifies() {
    return *(float*)((uintptr_t)this + 0x11c);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_UseExclusivePhysicsScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x12e + 0)) & 4 != 0;
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_OverrideProjectionLinearThreshold() {
    return *(float*)((uintptr_t)this + 0x124);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_DoNotForceDependentComponentsToPostPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x12e + 0)) & 2 != 0;
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_OverrideProjectionActivation() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_blendingCustomController() {
    return (void*)((uintptr_t)this + 0x129);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_UseRsDominanceGroupFromOwnerKineticActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 2 != 0;
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_BlendingCustomControllerParameters() {
    return (void*)((uintptr_t)this + 0x12a);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_CustomBlendInPhysics() {
    return (void*)((uintptr_t)this + 0x12b);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_ProfilePriority() {
    return (void*)((uintptr_t)this + 0x12c);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_UpdateActorWorldPositionFromPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_UpdateActorWorldPositionFromPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_UseRsDominanceGroupFromOwnerKineticActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_EnableRagdollCollisionProfile() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_EnableRagdollCollisionProfile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_EnableHardcodedCollisionSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_EnableHardcodedCollisionSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_ApplyRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 16 != 0;
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_ZeroRsPhysicsVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 32 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_ConfigureCollisionSettingsForCharacterWeapons(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_ModifyPhysicsAssetCollisionsToIncludeWeapons() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 128 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_ModifyPhysicsAssetCollisionsToIncludeWeapons(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_SetupRagdollSoundEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x12e + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_SetupRagdollSoundEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12e + 0);
    *(uint8_t*)((uintptr_t)this + 0x12e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsPhysicalAnimationParameters::set_UseExclusivePhysicsScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12e + 0);
    *(uint8_t*)((uintptr_t)this + 0x12e + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_TimeUpdateScheme() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_OverrideDeltaTimeForSmoothVelocity() {
    return *(float*)((uintptr_t)this + 0x138);
}
_Script_Engine::PhysicalMaterial*& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_PhysicalMaterialOverride() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x140);
}
_Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveProfile*& _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_MotorsDriveProfile() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationMotorsDriveProfile**)((uintptr_t)this + 0x148);
}
void* _Script_RsGameTechRT::RsPhysicalAnimationParameters::get_MotorsStrengthModifiers() {
    return (void*)((uintptr_t)this + 0x150);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationParameters");
    return result;
}
