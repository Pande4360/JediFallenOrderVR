#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\ProjectileMovementComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "..\_Script_RsGameTechRT\RsProjectile.hpp"
#include "SwProjectile.hpp"
#include "SwProjectileSpreadingData.hpp"
float& _Script_SwGame::SwProjectile::get_MaxTravelDistance() {
    return *(float*)((uintptr_t)this + 0x378);
}
_Script_Engine::ProjectileMovementComponent*& _Script_SwGame::SwProjectile::get_ProjectileMovement() {
    return *(_Script_Engine::ProjectileMovementComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwProjectile::get_AttachToMuzzleComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b8);
}
_Script_AkAudio::AkComponent*& _Script_SwGame::SwProjectile::get_AkComponentForRemaingSounds() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x370);
}
bool _Script_SwGame::SwProjectile::get_bShouldCheckDistanceToTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c3 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwProjectile::get_ProjectileFX() {
    return (void*)((uintptr_t)this + 0x380);
}
_Script_Engine::Actor*& _Script_SwGame::SwProjectile::get_ShootTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3a0);
}
void _Script_SwGame::SwProjectile::ExecuteReflectBehavior(_Script_RsGameTechRT::RsCharacter* ReflectionInstigator) {
    return;
}
_Script_Engine::Actor*& _Script_SwGame::SwProjectile::get_ProjectileOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3a8);
}
float& _Script_SwGame::SwProjectile::get_DistanceToTarget() {
    return *(float*)((uintptr_t)this + 0x3c4);
}
_Script_SwGame::SwProjectileSpreadingData*& _Script_SwGame::SwProjectile::get_SpreadingData() {
    return *(_Script_SwGame::SwProjectileSpreadingData**)((uintptr_t)this + 0x3b0);
}
void* _Script_SwGame::SwProjectile::get_ProjectileType() {
    return (void*)((uintptr_t)this + 0x3c0);
}
bool _Script_SwGame::SwProjectile::get_bIsCheap() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectile::set_bIsCheap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwProjectile::get_bShouldUseCheapMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c2 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectile::set_bShouldUseCheapMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwProjectile::set_bShouldCheckDistanceToTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwProjectile::get_bShouldCheckDistanceDoDamageToTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectile::set_bShouldCheckDistanceDoDamageToTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwProjectile::get_bShouldUseRayCast() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectile::set_bShouldUseRayCast(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwProjectile::get_bShouldPlayImpact() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ca + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectile::set_bShouldPlayImpact(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ca + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwProjectile::get_bShouldUseCheapFlyby() {
    return (*(uint8_t*)((uintptr_t)this + 0x3cb + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectile::set_bShouldUseCheapFlyby(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3cb + 0);
    *(uint8_t*)((uintptr_t)this + 0x3cb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystemComponent*& _Script_SwGame::SwProjectile::get_ProjectileVisual() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x4a0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwProjectile");
    return result;
}
_Script_CoreUObject::Vector _Script_SwGame::SwProjectile::TrackingShotVector(_Script_Engine::Actor* HitTarget, _Script_CoreUObject::Vector Offset) {
    return;
}
void _Script_SwGame::SwProjectile::SetReflectionCollision(_Script_Engine::PrimitiveComponent* InCollisionComponent) {
    return;
}
void _Script_SwGame::SwProjectile::SetProjectileCollision(_Script_Engine::PrimitiveComponent* InCollisionComponent) {
    return;
}
void _Script_SwGame::SwProjectile::SetAttackTypeName(void* InTypeName) {
    return;
}
void _Script_SwGame::SwProjectile::PostProjectileCollisionEvent(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Script_SwGame::SwProjectile::OnReflectionCollisionEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Script_SwGame::SwProjectile::OnReflectionCollisionBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Script_SwGame::SwProjectile::OnProjectileHitActor(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
bool _Script_SwGame::SwProjectile::HasBeenReflected() {
    return;
}
bool _Script_SwGame::SwProjectile::HasBeenDeflected() {
    return;
}
float _Script_SwGame::SwProjectile::GetInitialSpeed() {
    return;
}
_Script_RsGameTechRT::RsHitEvent _Script_SwGame::SwProjectile::GetHitEvent() {
    return;
}
void _Script_SwGame::SwProjectile::ExecuteDeflectBehavior(_Script_RsGameTechRT::RsCharacter* DeflectionInstigator) {
    return;
}
bool _Script_SwGame::SwProjectile::CheckHitActorReflection(_Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
