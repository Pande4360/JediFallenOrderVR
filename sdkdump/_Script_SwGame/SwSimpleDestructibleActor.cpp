#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "SwSimpleDestructibleActor.hpp"
bool _Script_SwGame::SwSimpleDestructibleActor::get_DestructionDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructibleActor::set_DestructionDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructibleActor::get_TakeDamageAcceptedOnlyFromHero() {
    return (*(uint8_t*)((uintptr_t)this + 0x369 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructibleActor::set_TakeDamageAcceptedOnlyFromHero(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x369 + 0);
    *(uint8_t*)((uintptr_t)this + 0x369 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructibleActor::get_SetToForceIgnoredWhenDestroyed() {
    return (*(uint8_t*)((uintptr_t)this + 0x36b + 0)) & 1 != 0;
}
bool _Script_SwGame::SwSimpleDestructibleActor::get_TakeDamageMethodNeverAccepted() {
    return (*(uint8_t*)((uintptr_t)this + 0x36a + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructibleActor::set_TakeDamageMethodNeverAccepted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36a + 0);
    *(uint8_t*)((uintptr_t)this + 0x36a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_CommonReactionOnCharacterOverlap() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Script_SwGame::SwSimpleDestructibleActor::set_SetToForceIgnoredWhenDestroyed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36b + 0);
    *(uint8_t*)((uintptr_t)this + 0x36b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_m_SaveGameState() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_ParallelStates() {
    return (void*)((uintptr_t)this + 0x36c);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_SaveGameType() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_DestructionPhases() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_DestructiblePiecesCommonPhysicsParameters() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_DestructiblePieces() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::GetCurrentActiveParallelState() {
    return;
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_CommonAudioParameters() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_CommonOptimizationParameters() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_OnPhaseDestructedEvent() {
    return (void*)((uintptr_t)this + 0x400);
}
bool _Script_SwGame::SwSimpleDestructibleActor::get_DebugLogDestruction() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructibleActor::set_DebugLogDestruction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructibleActor::get_DebugLogSleepingStateForAllRigidBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructibleActor::set_DebugLogSleepingStateForAllRigidBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructibleActor::get_OnLastPhaseDestructedEvent() {
    return (void*)((uintptr_t)this + 0x410);
}
bool _Script_SwGame::SwSimpleDestructibleActor::get_NeverDisableTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x420 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructibleActor::set_NeverDisableTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x420 + 0);
    *(uint8_t*)((uintptr_t)this + 0x420 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructibleActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSimpleDestructibleActor");
    return result;
}
void _Script_SwGame::SwSimpleDestructibleActor::OnPhaseDestructed(int32_t PhaseIndex) {
    return;
}
void _Script_SwGame::SwSimpleDestructibleActor::OnLastPhaseDestructed() {
    return;
}
bool _Script_SwGame::SwSimpleDestructibleActor::IsFullyDestroyed(_Script_Engine::Actor* DestructibleActor) {
    return;
}
void _Script_SwGame::SwSimpleDestructibleActor::HandleOnComponentHit(_Script_Engine::PrimitiveComponent* HitComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, _Script_CoreUObject::Vector NormalImpulse, _Script_Engine::HitResult& Hit) {
    return;
}
void _Script_SwGame::SwSimpleDestructibleActor::HandleOnComponentEndOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Script_SwGame::SwSimpleDestructibleActor::HandleOnComponentBeginOverlap(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Script_SwGame::SwSimpleDestructibleActor::FullyDestroyDestructible(_Script_Engine::Actor* destructibleActorToFullyDestroy, _Script_CoreUObject::Vector DestructionCenterPosition, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
