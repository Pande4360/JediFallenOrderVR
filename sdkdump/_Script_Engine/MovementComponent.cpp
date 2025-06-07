#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
#include "HitResult.hpp"
#include "MovementComponent.hpp"
#include "PhysicsVolume.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
void _Script_Engine::MovementComponent::set_bUpdateOnlyIfRendered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::SceneComponent*& _Script_Engine::MovementComponent::get_UpdatedComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Vector _Script_Engine::MovementComponent::ConstrainNormalToPlane(_Script_CoreUObject::Vector Normal) {
    return;
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::MovementComponent::get_UpdatedPrimitive() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Vector _Script_Engine::MovementComponent::ConstrainDirectionToPlane(_Script_CoreUObject::Vector Direction) {
    return;
}
void* _Script_Engine::MovementComponent::get_Velocity() {
    return (void*)((uintptr_t)this + 0x184);
}
void* _Script_Engine::MovementComponent::get_PlaneConstraintNormal() {
    return (void*)((uintptr_t)this + 0x190);
}
bool _Script_Engine::MovementComponent::get_bUpdateOnlyIfRendered() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Vector _Script_Engine::MovementComponent::ConstrainLocationToPlane(_Script_CoreUObject::Vector Location) {
    return;
}
void* _Script_Engine::MovementComponent::get_PlaneConstraintOrigin() {
    return (void*)((uintptr_t)this + 0x19c);
}
bool _Script_Engine::MovementComponent::get_bComponentShouldUpdatePhysicsVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 128 != 0;
}
bool _Script_Engine::MovementComponent::get_bAutoUpdateTickRegistration() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 2 != 0;
}
void _Script_Engine::MovementComponent::set_bAutoUpdateTickRegistration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MovementComponent::get_bTickBeforeOwner() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 4 != 0;
}
void _Script_Engine::MovementComponent::set_bTickBeforeOwner(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Vector _Script_Engine::MovementComponent::GetPlaneConstraintOrigin() {
    return;
}
bool _Script_Engine::MovementComponent::get_bAutoRegisterUpdatedComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 8 != 0;
}
void _Script_Engine::MovementComponent::set_bAutoRegisterUpdatedComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MovementComponent::get_bSnapToPlaneAtStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 32 != 0;
}
bool _Script_Engine::MovementComponent::get_bConstrainToPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 16 != 0;
}
void _Script_Engine::MovementComponent::set_bConstrainToPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::MovementComponent::set_bSnapToPlaneAtStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::MovementComponent::get_bAutoRegisterPhysicsVolumeUpdates() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 64 != 0;
}
void _Script_Engine::MovementComponent::set_bAutoRegisterPhysicsVolumeUpdates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::MovementComponent::set_bComponentShouldUpdatePhysicsVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::MovementComponent::get_PlaneConstraintAxisSetting() {
    return (void*)((uintptr_t)this + 0x1ab);
}
_Script_CoreUObject::Class* _Script_Engine::MovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MovementComponent");
    return result;
}
float _Script_Engine::MovementComponent::K2_GetMaxSpeedModifier() {
    return;
}
void _Script_Engine::MovementComponent::StopMovementImmediately() {
    return;
}
void _Script_Engine::MovementComponent::SnapUpdatedComponentToPlane() {
    return;
}
void _Script_Engine::MovementComponent::SetUpdatedComponent(_Script_Engine::SceneComponent* NewUpdatedComponent) {
    return;
}
void _Script_Engine::MovementComponent::SetPlaneConstraintOrigin(_Script_CoreUObject::Vector PlaneOrigin) {
    return;
}
void _Script_Engine::MovementComponent::SetPlaneConstraintNormal(_Script_CoreUObject::Vector PlaneNormal) {
    return;
}
_Script_Engine::PhysicsVolume* _Script_Engine::MovementComponent::GetPhysicsVolume() {
    return;
}
void _Script_Engine::MovementComponent::SetPlaneConstraintFromVectors(_Script_CoreUObject::Vector Forward, _Script_CoreUObject::Vector Up) {
    return;
}
void _Script_Engine::MovementComponent::SetPlaneConstraintEnabled(bool bEnabled) {
    return;
}
void _Script_Engine::MovementComponent::SetPlaneConstraintAxisSetting(void* NewAxisSetting) {
    return;
}
void _Script_Engine::MovementComponent::PhysicsVolumeChanged(_Script_Engine::PhysicsVolume* NewVolume) {
    return;
}
bool _Script_Engine::MovementComponent::K2_MoveUpdatedComponent(_Script_CoreUObject::Vector Delta, _Script_CoreUObject::Rotator NewRotation, _Script_Engine::HitResult& OutHit, bool bSweep, bool bTeleport) {
    return;
}
float _Script_Engine::MovementComponent::K2_GetModifiedMaxSpeed() {
    return;
}
bool _Script_Engine::MovementComponent::IsExceedingMaxSpeed(float MaxSpeed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::MovementComponent::GetPlaneConstraintNormal() {
    return;
}
void* _Script_Engine::MovementComponent::GetPlaneConstraintAxisSetting() {
    return;
}
float _Script_Engine::MovementComponent::GetMaxSpeed() {
    return;
}
float _Script_Engine::MovementComponent::GetGravityZ() {
    return;
}
