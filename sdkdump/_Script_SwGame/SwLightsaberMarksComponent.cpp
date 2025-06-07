#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\DecalTrailComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "SwLightsaberMarksComponent.hpp"
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwLightsaberMarksComponent::get_AudioStopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x190);
}
_Script_Engine::DecalTrailComponent*& _Script_SwGame::SwLightsaberMarksComponent::get_TrailTemplate() {
    return *(_Script_Engine::DecalTrailComponent**)((uintptr_t)this + 0x170);
}
_Script_Engine::DataTable*& _Script_SwGame::SwLightsaberMarksComponent::get_SurfaceTypeTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x178);
}
_Script_Engine::DataTable*& _Script_SwGame::SwLightsaberMarksComponent::get_ActorInfoTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x180);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwLightsaberMarksComponent::get_AudioStartEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x188);
}
_Script_AkAudio::AkComponent*& _Script_SwGame::SwLightsaberMarksComponent::get_AudioComponent() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x2a0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwLightsaberMarksComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwLightsaberMarksComponent");
    return result;
}
bool _Script_SwGame::SwLightsaberMarksComponent::TracingActive() {
    return;
}
void _Script_SwGame::SwLightsaberMarksComponent::StopTracing() {
    return;
}
void _Script_SwGame::SwLightsaberMarksComponent::StartTracing() {
    return;
}
void _Script_SwGame::SwLightsaberMarksComponent::OwnerInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwLightsaberMarksComponent::OnParticleSystemFinished(_Script_Engine::ParticleSystemComponent* FinishedComponent) {
    return;
}
