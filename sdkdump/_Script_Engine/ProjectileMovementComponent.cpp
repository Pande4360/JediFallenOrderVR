#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "HitResult.hpp"
#include "MovementComponent.hpp"
#include "ProjectileMovementComponent.hpp"
#include "SceneComponent.hpp"
float& _Script_Engine::ProjectileMovementComponent::get_InitialSpeed() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bShouldBounce() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 2 != 0;
}
bool _Script_Engine::ProjectileMovementComponent::get_bIsHomingProjectile() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 64 != 0;
}
float& _Script_Engine::ProjectileMovementComponent::get_MaxSpeed() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
void _Script_Engine::ProjectileMovementComponent::set_bShouldBounce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ProjectileMovementComponent::set_bInterpRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bRotationFollowsVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bInitialVelocityInLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::ProjectileMovementComponent::set_bRotationFollowsVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bInitialVelocityInLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 4 != 0;
}
void _Script_Engine::ProjectileMovementComponent::SetVelocityInLocalSpace(_Script_CoreUObject::Vector NewVelocity) {
    return;
}
bool _Script_Engine::ProjectileMovementComponent::get_bForceSubStepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 8 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bForceSubStepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::ProjectileMovementComponent::MoveInterpolationTarget(_Script_CoreUObject::Vector& NewLocation, _Script_CoreUObject::Rotator& NewRotation) {
    return;
}
bool _Script_Engine::ProjectileMovementComponent::get_bSimulationEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 16 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bSimulationEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bSweepCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 32 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bSweepCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::ProjectileMovementComponent::set_bIsHomingProjectile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bBounceAngleAffectsFriction() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 128 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bBounceAngleAffectsFriction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_Engine::ProjectileMovementComponent::get_MaxSimulationTimeStep() {
    return *(float*)((uintptr_t)this + 0x214);
}
bool _Script_Engine::ProjectileMovementComponent::get_bIsSliding() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 1 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bIsSliding(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ProjectileMovementComponent::get_bInterpMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 2 != 0;
}
void _Script_Engine::ProjectileMovementComponent::set_bInterpMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ProjectileMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ProjectileMovementComponent");
    return result;
}
bool _Script_Engine::ProjectileMovementComponent::get_bInterpRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 4 != 0;
}
float& _Script_Engine::ProjectileMovementComponent::get_PreviousHitTime() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
void* _Script_Engine::ProjectileMovementComponent::get_PreviousHitNormal() {
    return (void*)((uintptr_t)this + 0x1c0);
}
float& _Script_Engine::ProjectileMovementComponent::get_ProjectileGravityScale() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
float& _Script_Engine::ProjectileMovementComponent::get_Buoyancy() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Script_Engine::ProjectileMovementComponent::get_Bounciness() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Script_Engine::ProjectileMovementComponent::get_Friction() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
float& _Script_Engine::ProjectileMovementComponent::get_BounceVelocityStopSimulatingThreshold() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
float& _Script_Engine::ProjectileMovementComponent::get_MinFrictionFraction() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::ProjectileMovementComponent::get_OnProjectileBounce() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_Engine::ProjectileMovementComponent::get_OnProjectileStop() {
    return (void*)((uintptr_t)this + 0x1f8);
}
float& _Script_Engine::ProjectileMovementComponent::get_HomingAccelerationMagnitude() {
    return *(float*)((uintptr_t)this + 0x208);
}
float& _Script_Engine::ProjectileMovementComponent::get_InterpLocationSnapToTargetDistance() {
    return *(float*)((uintptr_t)this + 0x22c);
}
void* _Script_Engine::ProjectileMovementComponent::get_HomingTargetComponent() {
    return (void*)((uintptr_t)this + 0x20c);
}
int32_t& _Script_Engine::ProjectileMovementComponent::get_MaxSimulationIterations() {
    return *(int32_t*)((uintptr_t)this + 0x218);
}
int32_t& _Script_Engine::ProjectileMovementComponent::get_BounceAdditionalIterations() {
    return *(int32_t*)((uintptr_t)this + 0x21c);
}
float& _Script_Engine::ProjectileMovementComponent::get_InterpLocationTime() {
    return *(float*)((uintptr_t)this + 0x220);
}
float& _Script_Engine::ProjectileMovementComponent::get_InterpRotationTime() {
    return *(float*)((uintptr_t)this + 0x224);
}
float& _Script_Engine::ProjectileMovementComponent::get_InterpLocationMaxLagDistance() {
    return *(float*)((uintptr_t)this + 0x228);
}
void _Script_Engine::ProjectileMovementComponent::StopSimulating(_Script_Engine::HitResult& HitResult) {
    return;
}
void _Script_Engine::ProjectileMovementComponent::SetInterpolatedComponent(_Script_Engine::SceneComponent* Component) {
    return;
}
void _Script_Engine::ProjectileMovementComponent::ResetInterpolation() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::ProjectileMovementComponent::LimitVelocity(_Script_CoreUObject::Vector NewVelocity) {
    return;
}
bool _Script_Engine::ProjectileMovementComponent::IsVelocityUnderSimulationThreshold() {
    return;
}
bool _Script_Engine::ProjectileMovementComponent::IsInterpolationComplete() {
    return;
}
