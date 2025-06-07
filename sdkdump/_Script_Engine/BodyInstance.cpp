#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BodyInstance.hpp"
#include "PhysicalMaterial.hpp"
void _Script_Engine::BodyInstance::set_bEnableGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::BodyInstance::set_bAllowIkWhileHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::BodyInstance::get_ObjectType() {
    return (void*)((uintptr_t)this + 0x1e);
}
void _Script_Engine::BodyInstance::set_bInterpolateWhenSubStepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x86 + 0);
    *(uint8_t*)((uintptr_t)this + 0x86 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
float& _Script_Engine::BodyInstance::get_MaxAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x158);
}
void* _Script_Engine::BodyInstance::get_NavPermissionDetails() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::BodyInstance::get_CollisionEnabled() {
    return (void*)((uintptr_t)this + 0x20);
}
bool _Script_Engine::BodyInstance::get_bLockZRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 16 != 0;
}
bool _Script_Engine::BodyInstance::get_bAllowIkWhileHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_Engine::BodyInstance::get_SleepFamily() {
    return (void*)((uintptr_t)this + 0x22);
}
void* _Script_Engine::BodyInstance::get_DOFMode() {
    return (void*)((uintptr_t)this + 0x23);
}
bool _Script_Engine::BodyInstance::get_bLockYTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 1 != 0;
}
void* _Script_Engine::BodyInstance::get_NavPermissions() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::BodyInstance::get_CustomDOFPlaneNormal() {
    return (void*)((uintptr_t)this + 0x108);
}
bool _Script_Engine::BodyInstance::get_bUseCCD() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bOverrideMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::BodyInstance::set_bUseCCD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::BodyInstance::get_bNotifyRigidBodyCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 4 != 0;
}
void _Script_Engine::BodyInstance::set_bOverrideMaxDepenetrationVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x86 + 0);
    *(uint8_t*)((uintptr_t)this + 0x86 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::BodyInstance::set_bNotifyRigidBodyCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Object*& _Script_Engine::BodyInstance::get_ImpactEvent() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Object*& _Script_Engine::BodyInstance::get_RollingLoop() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x58);
}
bool _Script_Engine::BodyInstance::get_bUseAsyncScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 64 != 0;
}
_Script_CoreUObject::Object*& _Script_Engine::BodyInstance::get_RollingStop() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x60);
}
float& _Script_Engine::BodyInstance::get_MaxAudioObjectLinearVelocity() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::BodyInstance::get_MaxAudioObjectImpactVelocity() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_Engine::BodyInstance::get_MaxAudioObjectAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_Engine::BodyInstance::get_bLockTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 32 != 0;
}
float& _Script_Engine::BodyInstance::get_MinimumTimeBetweenImpactSounds() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_Engine::BodyInstance::get_CollisionResponses() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::BodyInstance::get_DisableCollisionOnSpawnOverride() {
    return (void*)((uintptr_t)this + 0x7c);
}
bool _Script_Engine::BodyInstance::get_bSimulatePhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d + 0)) & 1 != 0;
}
bool _Script_Engine::BodyInstance::get_bLockYRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 8 != 0;
}
void _Script_Engine::BodyInstance::set_bSimulatePhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x7d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::BodyInstance::set_bLockYRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::BodyInstance::get_bOverrideMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x7d + 0)) & 2 != 0;
}
bool _Script_Engine::BodyInstance::get_bOverrideWeightClass() {
    return (*(uint8_t*)((uintptr_t)this + 0x80 + 0)) & 1 != 0;
}
void _Script_Engine::BodyInstance::set_bOverrideWeightClass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BodyInstance::get_bEnableGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 1 != 0;
}
bool _Script_Engine::BodyInstance::get_bAutoWeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bAutoWeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::BodyInstance::set_bLockRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::BodyInstance::get_bStartAwake() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 4 != 0;
}
void _Script_Engine::BodyInstance::set_bStartAwake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::BodyInstance::get_bGenerateWakeEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 8 != 0;
}
void _Script_Engine::BodyInstance::set_bGenerateWakeEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::BodyInstance::get_bUpdateMassWhenScaleChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 16 != 0;
}
bool _Script_Engine::BodyInstance::get_bLockRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 64 != 0;
}
void _Script_Engine::BodyInstance::set_bUpdateMassWhenScaleChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::BodyInstance::set_bLockTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockXTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x84 + 0)) & 128 != 0;
}
void _Script_Engine::BodyInstance::set_bLockXTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x84 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::BodyInstance::set_bLockYTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockZTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bLockZTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::BodyInstance::get_bLockXRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 4 != 0;
}
void _Script_Engine::BodyInstance::set_bLockXRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::BodyInstance::set_bLockZRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::BodyInstance::get_bOverrideMaxAngularVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x85 + 0)) & 32 != 0;
}
void _Script_Engine::BodyInstance::set_bOverrideMaxAngularVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::BodyInstance::set_bUseAsyncScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x85 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::BodyInstance::get_bOverrideMaxDepenetrationVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x86 + 0)) & 2 != 0;
}
bool _Script_Engine::BodyInstance::get_bOverrideWalkableSlopeOnInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x86 + 0)) & 4 != 0;
}
void _Script_Engine::BodyInstance::set_bOverrideWalkableSlopeOnInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x86 + 0);
    *(uint8_t*)((uintptr_t)this + 0x86 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::BodyInstance::get_bInterpolateWhenSubStepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x86 + 0)) & 8 != 0;
}
bool _Script_Engine::BodyInstance::get_bDisableCollisionOnSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_Engine::BodyInstance::set_bDisableCollisionOnSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::BodyInstance::get_bDontApplyDamageFromPhysicsCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 2 != 0;
}
void _Script_Engine::BodyInstance::set_bDontApplyDamageFromPhysicsCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::BodyInstance::get_bDontCollideWhenStandingOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 4 != 0;
}
void _Script_Engine::BodyInstance::set_bDontCollideWhenStandingOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::BodyInstance::get_WeightClassOverride() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Object*& _Script_Engine::BodyInstance::get_OverrideDamageFromPhysicsCollision() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x98);
}
float& _Script_Engine::BodyInstance::get_TimeDilation() {
    return *(float*)((uintptr_t)this + 0xa8);
}
void* _Script_Engine::BodyInstance::get_CollisionProfileName() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::BodyInstance::get_MaxDepenetrationVelocity() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_Engine::BodyInstance::get_MassInKgOverride() {
    return *(float*)((uintptr_t)this + 0xf4);
}
float& _Script_Engine::BodyInstance::get_LinearDamping() {
    return *(float*)((uintptr_t)this + 0x100);
}
float& _Script_Engine::BodyInstance::get_AngularDamping() {
    return *(float*)((uintptr_t)this + 0x104);
}
void* _Script_Engine::BodyInstance::get_COMNudge() {
    return (void*)((uintptr_t)this + 0x114);
}
float& _Script_Engine::BodyInstance::get_MassScale() {
    return *(float*)((uintptr_t)this + 0x120);
}
void* _Script_Engine::BodyInstance::get_InertiaTensorScale() {
    return (void*)((uintptr_t)this + 0x124);
}
void* _Script_Engine::BodyInstance::get_WalkableSlopeOverride() {
    return (void*)((uintptr_t)this + 0x140);
}
_Script_Engine::PhysicalMaterial*& _Script_Engine::BodyInstance::get_PhysMaterialOverride() {
    return *(_Script_Engine::PhysicalMaterial**)((uintptr_t)this + 0x150);
}
float& _Script_Engine::BodyInstance::get_CustomSleepThresholdMultiplier() {
    return *(float*)((uintptr_t)this + 0x15c);
}
float& _Script_Engine::BodyInstance::get_StabilizationThresholdMultiplier() {
    return *(float*)((uintptr_t)this + 0x160);
}
float& _Script_Engine::BodyInstance::get_PhysicsBlendWeight() {
    return *(float*)((uintptr_t)this + 0x164);
}
int32_t& _Script_Engine::BodyInstance::get_PositionSolverIterationCount() {
    return *(int32_t*)((uintptr_t)this + 0x168);
}
int32_t& _Script_Engine::BodyInstance::get_VelocitySolverIterationCount() {
    return *(int32_t*)((uintptr_t)this + 0x16c);
}
int32_t& _Script_Engine::BodyInstance::get_RsDominanceGroup() {
    return *(int32_t*)((uintptr_t)this + 0x1f0);
}
_Script_CoreUObject::Class* _Script_Engine::BodyInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BodyInstance");
    return result;
}
