#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\ShapeComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsNavVolume.hpp"
#include "SwQuicksandActor.hpp"
#include "SwQuicksandSettingsDataAsset.hpp"
_Script_RsGameTechRT::RsNavVolume*& _Script_SwGame::SwQuicksandActor::get_CollisionVolumeActor() {
    return *(_Script_RsGameTechRT::RsNavVolume**)((uintptr_t)this + 0x398);
}
void _Script_SwGame::SwQuicksandActor::OnActorOverlapBegin(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_SwGame::SwQuicksandActor::set_DisableQuicksand(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwQuicksandActor::OnActorOverlapEnd(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
bool _Script_SwGame::SwQuicksandActor::get_DisableQuicksand() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwQuicksandActor::get_DebugLogAffectedActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x361 + 0)) & 1 != 0;
}
void _Script_SwGame::SwQuicksandActor::set_DebugLogAffectedActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x361 + 0);
    *(uint8_t*)((uintptr_t)this + 0x361 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwQuicksandActor::get_DebugVisualizeEntryPoints() {
    return (*(uint8_t*)((uintptr_t)this + 0x362 + 0)) & 1 != 0;
}
void _Script_SwGame::SwQuicksandActor::set_DebugVisualizeEntryPoints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x362 + 0);
    *(uint8_t*)((uintptr_t)this + 0x362 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwQuicksandActor::get_DefaultSettings() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwQuicksandActor::get_QuicksandHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x3a0);
}
_Script_SwGame::SwQuicksandSettingsDataAsset*& _Script_SwGame::SwQuicksandActor::get_QuicksandSettingsDataAsset() {
    return *(_Script_SwGame::SwQuicksandSettingsDataAsset**)((uintptr_t)this + 0x3a8);
}
void* _Script_SwGame::SwQuicksandActor::get_IgnoredActors() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Script_SwGame::SwQuicksandActor::get_IgnoredActorTypes() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Script_SwGame::SwQuicksandActor::get_OnStartAffectingActorEvent() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_SwGame::SwQuicksandActor::get_OnStopAffectingActorEvent() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void* _Script_SwGame::SwQuicksandActor::get_m_ActorsInQuicksandVolume() {
    return (void*)((uintptr_t)this + 0x3f0);
}
_Script_Engine::ShapeComponent*& _Script_SwGame::SwQuicksandActor::get_CollisionComponent() {
    return *(_Script_Engine::ShapeComponent**)((uintptr_t)this + 0x410);
}
_Script_Engine::PrimitiveComponent*& _Script_SwGame::SwQuicksandActor::get_SandSurfaceComponent() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x418);
}
void* _Script_SwGame::SwQuicksandActor::get_m_ActiveEffects() {
    return (void*)((uintptr_t)this + 0x420);
}
_Script_CoreUObject::Class* _Script_SwGame::SwQuicksandActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwQuicksandActor");
    return result;
}
void _Script_SwGame::SwQuicksandActor::SetSurfaceDesiredOffset(float TargetOffset, float MovementSpeed) {
    return;
}
void _Script_SwGame::SwQuicksandActor::OnTriggerHeroKill(_Script_RsGameTechRT::RsHero* heroActor) {
    return;
}
void _Script_SwGame::SwQuicksandActor::OnStopAffectingActor(_Script_Engine::Actor* actorStoppedBeingAffectedByQuicksand) {
    return;
}
void _Script_SwGame::SwQuicksandActor::OnStartAffectingActor(_Script_Engine::Actor* actorAffectedByQuicksand) {
    return;
}
void _Script_SwGame::SwQuicksandActor::OnPrimitiveOverlapEnd(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void _Script_SwGame::SwQuicksandActor::OnPrimitiveOverlapBegin(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
