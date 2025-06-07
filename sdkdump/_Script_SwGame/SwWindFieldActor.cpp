#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\ShapeComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsPhysicalAnimationProfile.hpp"
#include "SwWindFieldActor.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWindFieldActor::get_StartSoundBeam() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3c0);
}
bool _Script_SwGame::SwWindFieldActor::get_SaveGameImmediately() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwWindFieldActor::get_PhysicalAnimationProfileHorizontalWindRunningPerpendicular() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x410);
}
void _Script_SwGame::SwWindFieldActor::set_SaveGameImmediately(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWindFieldActor::get_UpField() {
    return (*(uint8_t*)((uintptr_t)this + 0x361 + 0)) & 1 != 0;
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWindFieldActor::get_Start_Sound_HeadWind() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3b0);
}
void _Script_SwGame::SwWindFieldActor::set_UpField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x361 + 0);
    *(uint8_t*)((uintptr_t)this + 0x361 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystem*& _Script_SwGame::SwWindFieldActor::get_DoorFXEmitterTemplate() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x3e0);
}
bool _Script_SwGame::SwWindFieldActor::get_bAutoFall() {
    return (*(uint8_t*)((uintptr_t)this + 0x362 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWindFieldActor::set_bAutoFall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x362 + 0);
    *(uint8_t*)((uintptr_t)this + 0x362 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWindFieldActor::get_AutoFallTimer() {
    return *(float*)((uintptr_t)this + 0x364);
}
bool _Script_SwGame::SwWindFieldActor::get_OnlyWhenFallingMode_ClearVerticalVelocityOnEnter() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwWindFieldActor::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWindFieldActor::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWindFieldActor::get_HorizontalInfluence() {
    return *(float*)((uintptr_t)this + 0x36c);
}
void* _Script_SwGame::SwWindFieldActor::get_VerticalInfluenceMode() {
    return (void*)((uintptr_t)this + 0x370);
}
float& _Script_SwGame::SwWindFieldActor::get_VerticalInfluence() {
    return *(float*)((uintptr_t)this + 0x374);
}
_Script_RsGameTechRT::RsHero*& _Script_SwGame::SwWindFieldActor::get_BPHero() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x438);
}
bool _Script_SwGame::SwWindFieldActor::get_bIgnorePlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
_Script_AkAudio::AkComponent*& _Script_SwGame::SwWindFieldActor::get_m_MoveableAkComponent() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x440);
}
void _Script_SwGame::SwWindFieldActor::set_bIgnorePlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwWindFieldActor::set_DebugLogAffectedActor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3aa + 0);
    *(uint8_t*)((uintptr_t)this + 0x3aa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwWindFieldActor::get_IgnoredActors() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Script_SwGame::SwWindFieldActor::get_IgnoredActorTypes() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Script_SwGame::SwWindFieldActor::set_OnlyWhenFallingMode_ClearVerticalVelocityOnEnter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWindFieldActor::get_AccelerationTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWindFieldActor::set_AccelerationTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWindFieldActor::get_AccelerationAmount() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
bool _Script_SwGame::SwWindFieldActor::get_AccelerationOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWindFieldActor::set_AccelerationOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWindFieldActor::get_DebugArrowOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWindFieldActor::set_DebugArrowOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWindFieldActor::get_DebugLogAffectedActor() {
    return (*(uint8_t*)((uintptr_t)this + 0x3aa + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwWindFieldActor::get_PhysicalAnimationProfileHorizontalWindBack() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x408);
}
bool _Script_SwGame::SwWindFieldActor::get_FXandSound() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ab + 0)) & 1 != 0;
}
void _Script_SwGame::SwWindFieldActor::set_FXandSound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ab + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ab + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWindFieldActor::get_Stop_Sound_HeadWind() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3b8);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwWindFieldActor::get_StopSoundBeam() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3c8);
}
void* _Script_SwGame::SwWindFieldActor::get_ObjectsForcePushAbilityEffectClass() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void _Script_SwGame::SwWindFieldActor::OnPrimitiveOverlapEnd(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    return;
}
void* _Script_SwGame::SwWindFieldActor::get_PopBallClass() {
    return (void*)((uintptr_t)this + 0x3d8);
}
void _Script_SwGame::SwWindFieldActor::OnHeroNavStateChanged(void* NewState, void* PrevState) {
    return;
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwWindFieldActor::get_WindAirHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x3e8);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwWindFieldActor::get_EndPointComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x430);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwWindFieldActor::get_HeadWindHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x3f0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwWindFieldActor::get_TailWindHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x3f8);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_SwGame::SwWindFieldActor::get_PhysicalAnimationProfileHorizontalWindFront() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x400);
}
_Script_Engine::ShapeComponent*& _Script_SwGame::SwWindFieldActor::get_CollisionComponent() {
    return *(_Script_Engine::ShapeComponent**)((uintptr_t)this + 0x418);
}
_Script_Engine::ArrowComponent*& _Script_SwGame::SwWindFieldActor::get_ArrowComponent() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x420);
}
_Script_Engine::SceneComponent*& _Script_SwGame::SwWindFieldActor::get_StartPointComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x428);
}
_Script_Engine::ParticleSystemComponent*& _Script_SwGame::SwWindFieldActor::get_m_DoorSpawnedEmitter() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x448);
}
_Script_CoreUObject::Class* _Script_SwGame::SwWindFieldActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwWindFieldActor");
    return result;
}
void _Script_SwGame::SwWindFieldActor::OnPrimitiveOverlapBegin(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Script_SwGame::SwWindFieldActor::OnHeroNavStateChanged_UntilNotFalling(void* NewState, void* PrevState) {
    return;
}
