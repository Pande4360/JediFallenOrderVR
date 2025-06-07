#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MovementComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "SwLightsaberMovementComponent.hpp"
void* _Script_SwGame::SwLightsaberMovementComponent::get_OnThrowReturned() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void _Script_SwGame::SwLightsaberMovementComponent::set_bReturnToThrower(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_SwGame::SwLightsaberMovementComponent::get_bRotationInLocalSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e8 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwLightsaberMovementComponent::get_PivotTranslation() {
    return (void*)((uintptr_t)this + 0x1dc);
}
void* _Script_SwGame::SwLightsaberMovementComponent::get_OnStartCatch() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void _Script_SwGame::SwLightsaberMovementComponent::set_bRotationInLocalSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwLightsaberMovementComponent::get_RotationRate() {
    return (void*)((uintptr_t)this + 0x1d0);
}
bool _Script_SwGame::SwLightsaberMovementComponent::get_bReturnToThrower() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e8 + 0)) & 2 != 0;
}
bool _Script_SwGame::SwLightsaberMovementComponent::get_bThrowFixedDistance() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e8 + 0)) & 4 != 0;
}
void _Script_SwGame::SwLightsaberMovementComponent::set_bThrowFixedDistance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e8 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_SwGame::SwLightsaberMovementComponent::get_CatchDistance() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
float& _Script_SwGame::SwLightsaberMovementComponent::get_DefaultThrowDistance() {
    return *(float*)((uintptr_t)this + 0x1f0);
}
float& _Script_SwGame::SwLightsaberMovementComponent::get_ArcAmount() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_SwGame::SwLightsaberMovementComponent::get_HomingDuration() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
void* _Script_SwGame::SwLightsaberMovementComponent::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x200);
}
float& _Script_SwGame::SwLightsaberMovementComponent::get_HitDebounceTime() {
    return *(float*)((uintptr_t)this + 0x240);
}
_Script_CoreUObject::Class* _Script_SwGame::SwLightsaberMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwLightsaberMovementComponent");
    return result;
}
void _Script_SwGame::SwLightsaberMovementComponent::ThrowWithDuration(float InTimeToDestination) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::ThrowAtSpeed(float Speed) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::SetCollision(bool EnableCollision) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::ReturnWithDuration(float Duration) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::ReturnAtSpeed(float Speed) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::InitSaberMovement(_Script_Engine::Actor* SaberOwner, _Script_Engine::PrimitiveComponent* Collision, void* AttackType) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::FlyToWithDuration(_Script_Engine::Actor* InHomingTarget, _Script_CoreUObject::Vector& InTargetLocation, float InTimeToDestination, bool ReturnToThrower) {
    return;
}
void _Script_SwGame::SwLightsaberMovementComponent::FlyToAtSpeed(_Script_Engine::Actor* InHomingTarget, _Script_CoreUObject::Vector& InTargetLocation, float Speed, bool ReturnToThrower) {
    return;
}
