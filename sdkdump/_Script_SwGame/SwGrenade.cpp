#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "SwGrenade.hpp"
#include "SwTKProjectileBase.hpp"
float& _Script_SwGame::SwGrenade::get_BaseDamage() {
    return *(float*)((uintptr_t)this + 0x388);
}
float& _Script_SwGame::SwGrenade::get_AutoExplodeTotalTime() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
float& _Script_SwGame::SwGrenade::get_BlastRadius() {
    return *(float*)((uintptr_t)this + 0x38c);
}
void* _Script_SwGame::SwGrenade::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x390);
}
bool _Script_SwGame::SwGrenade::get_bShouldSpawnActorOnExplode() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGrenade::set_bShouldSpawnActorOnExplode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwGrenade::get_SpawnActorOnExplode() {
    return (void*)((uintptr_t)this + 0x3d8);
}
bool _Script_SwGame::SwGrenade::get_bExplodesOnCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e4 + 0)) & 1 != 0;
}
void _Script_SwGame::SwGrenade::set_bExplodesOnCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwGrenade::get_DamageFilterType() {
    return (void*)((uintptr_t)this + 0x3e5);
}
float& _Script_SwGame::SwGrenade::get_DelayOnDetonatedByExplosion() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
int32_t& _Script_SwGame::SwGrenade::get_Countdown() {
    return *(int32_t*)((uintptr_t)this + 0x414);
}
_Script_CoreUObject::Class* _Script_SwGame::SwGrenade::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwGrenade");
    return result;
}
void _Script_SwGame::SwGrenade::TryToExplode() {
    return;
}
void _Script_SwGame::SwGrenade::SetAttackTypeNames(void* ImpactEffect, void* AttackType) {
    return;
}
void _Script_SwGame::SwGrenade::OnPlayExplodeEffect() {
    return;
}
void _Script_SwGame::SwGrenade::OnGrenadeTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* InDamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwGrenade::OnGrenadeHit(_Script_Engine::PrimitiveComponent* HitComp, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_SwGame::SwGrenade::OnAutoExplodeTimeUp() {
    return;
}
void _Script_SwGame::SwGrenade::OnDisarmed() {
    return;
}
void _Script_SwGame::SwGrenade::OnCountdownTimeUp() {
    return;
}
void _Script_SwGame::SwGrenade::OnCountdownTicked() {
    return;
}
void _Script_SwGame::SwGrenade::OnCountdownBegan() {
    return;
}
void _Script_SwGame::SwGrenade::OnArmed() {
    return;
}
void _Script_SwGame::SwGrenade::NotifyOnTouchActor(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_SwGame::SwGrenade::DropGrenade(bool bArmGrenade, float ArmDelay) {
    return;
}
void _Script_SwGame::SwGrenade::DisarmGrenade() {
    return;
}
void _Script_SwGame::SwGrenade::DeactivateCollision() {
    return;
}
void _Script_SwGame::SwGrenade::ArmGrenade(float Delay) {
    return;
}
void _Script_SwGame::SwGrenade::AddCollisionShape(_Script_Engine::PrimitiveComponent* CollisionComponent) {
    return;
}
void _Script_SwGame::SwGrenade::ActivateCollision() {
    return;
}
