#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "SwMissile.hpp"
#include "SwMissileMovementComponent.hpp"
#include "SwTKProjectileBase.hpp"
void _Script_SwGame::SwMissile::DeactivateCollision() {
    return;
}
bool _Script_SwGame::SwMissile::get_bIsHomingMissile() {
    return (*(uint8_t*)((uintptr_t)this + 0x3dc + 0)) & 1 != 0;
}
bool _Script_SwGame::SwMissile::get_bSpawnUnarmed() {
    return (*(uint8_t*)((uintptr_t)this + 0x388 + 0)) & 1 != 0;
}
void _Script_SwGame::SwMissile::set_bSpawnUnarmed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwMissile::get_BaseDamage() {
    return *(float*)((uintptr_t)this + 0x38c);
}
void _Script_SwGame::SwMissile::ActivateCollision() {
    return;
}
void* _Script_SwGame::SwMissile::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Script_SwGame::SwMissile::OnArmed() {
    return;
}
float& _Script_SwGame::SwMissile::get_BlastRadius() {
    return *(float*)((uintptr_t)this + 0x390);
}
float& _Script_SwGame::SwMissile::get_AutoExplodeTotalTime() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
void _Script_SwGame::SwMissile::DisarmMissile() {
    return;
}
void _Script_SwGame::SwMissile::set_bIsHomingMissile(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwMissile::get_HomingDuration() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
float& _Script_SwGame::SwMissile::get_MissileArmDistance() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
float& _Script_SwGame::SwMissile::get_MissileNotificationRadius() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
_Script_SwGame::SwMissileMovementComponent*& _Script_SwGame::SwMissile::get_MissileMovement() {
    return *(_Script_SwGame::SwMissileMovementComponent**)((uintptr_t)this + 0x400);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMissile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMissile");
    return result;
}
void _Script_SwGame::SwMissile::TryToExplode(bool bCollidedWithActor, void* SurfaceType, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_SwGame::SwMissile::SetMissileAlive(bool bIsAlive) {
    return;
}
void _Script_SwGame::SwMissile::SetAttackTypeNames(void* ImpactEffect, void* AttackType) {
    return;
}
void _Script_SwGame::SwMissile::OnPlayStopSound() {
    return;
}
void _Script_SwGame::SwMissile::ArmMissile() {
    return;
}
void _Script_SwGame::SwMissile::OnPlayStartSound() {
    return;
}
void _Script_SwGame::SwMissile::OnPlayHitActorEffect() {
    return;
}
void _Script_SwGame::SwMissile::OnMissileHit(_Script_Engine::Actor* SelfActor, _Script_Engine::Actor* OtherActor, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_SwGame::SwMissile::OnMissileDeflected(_Script_CoreUObject::Vector& NewDirection, void*& CharactersInTrajectory) {
    return;
}
void _Script_SwGame::SwMissile::OnLaunched() {
    return;
}
void _Script_SwGame::SwMissile::OnDisarmed() {
    return;
}
void _Script_SwGame::SwMissile::OnAutoExplodeTimeUp() {
    return;
}
void _Script_SwGame::SwMissile::LaunchMissileInDirection(float InMissileArmDistance, bool bIsHoming, _Script_CoreUObject::Vector InDirection) {
    return;
}
void _Script_SwGame::SwMissile::LaunchMissile(float InMissileArmDistance, bool bIsHoming) {
    return;
}
bool _Script_SwGame::SwMissile::IsMissileAlive() {
    return;
}
