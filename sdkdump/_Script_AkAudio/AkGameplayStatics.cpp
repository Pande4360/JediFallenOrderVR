#include "..\FUObjectArray.hpp"
#include "AkAudioBank.hpp"
#include "AkAudioEvent.hpp"
#include "AkAuxBus.hpp"
#include "AkComponent.hpp"
#include "AkGameplayStatics.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\World.hpp"
void _Script_AkAudio::AkGameplayStatics::SetMultiplePositions(_Script_AkAudio::AkComponent* GameObjectAkComponent, void* Positions, void* MultiPositionType) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::UnloadBankAsync(_Script_AkAudio::AkAudioBank* Bank, void*& BankUnloadedCallback) {
    return;
}
_Script_CoreUObject::Class* _Script_AkAudio::AkGameplayStatics::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkGameplayStatics");
    return result;
}
void _Script_AkAudio::AkGameplayStatics::UnloadBankByName(void* BankName) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::UseReverbVolumes(bool inUseReverbVolumes, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::PostEventByName(void* EventName, _Script_Engine::Actor* Actor, bool bStopWhenAttachedToDestroyed, bool bOcclusionEnabled) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::UseEarlyReflections(_Script_Engine::Actor* Actor, _Script_AkAudio::AkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, void* AuxBusName) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::LoadBankAsync(_Script_AkAudio::AkAudioBank* Bank, void*& BankLoadedCallback) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::UnloadBank(_Script_AkAudio::AkAudioBank* Bank, void* BankName, _Script_Engine::LatentActionInfo LatentInfo, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StopProfilerCapture() {
    return;
}
void* _Script_AkAudio::AkGameplayStatics::GetLanguageForCurrentCulture() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StopOutputCapture() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StopAllAmbientSounds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StopAll() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::LoadInitBank() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StopActor(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StartProfilerCapture(void* Filename) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::CancelEventCallback(void*& PostEventCallback) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StartOutputCapture(void* Filename) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::StartAllAmbientSounds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
_Script_AkAudio::AkComponent* _Script_AkAudio::AkGameplayStatics::SpawnAkComponentAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_AkAudio::AkAudioEvent* AkEvent, _Script_AkAudio::AkAuxBus* EarlyReflectionsBus, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, bool AutoPost, void* EventName, void* EarlyReflectionsBusName, bool AutoDestroy, bool OcclusionEnabled) {
    return;
}
bool _Script_AkAudio::AkGameplayStatics::ShouldPlaySound(_Script_AkAudio::AkAudioEvent* Event, _Script_Engine::World* World, _Script_CoreUObject::Vector& Location) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetSwitchOnComponent(void* SwitchGroup, void* SwitchState, _Script_AkAudio::AkComponent* Component) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetSwitch(void* SwitchGroup, void* SwitchState, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetState(void* StateGroup, void* State) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetSpeakerAngles(void*& SpeakerAngles, float HeightAngle, void* DeviceShareset) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetRTPCValue(void* RTPC, float Value, int32_t InterpolationTimeMs, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetPanningRule(void* PanRule) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetOutputBusVolume(float BusVolume, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::AddOutputCaptureMarker(void* MarkerText) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetOcclusionScalingFactor(float ScalingFactor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetMultipleChannelEmitterPositions(_Script_AkAudio::AkComponent* GameObjectAkComponent, void* ChannelMasks, void* Positions, void* MultiPositionType) {
    return;
}
int32_t _Script_AkAudio::AkGameplayStatics::PostGlobalEvent(_Script_AkAudio::AkAudioEvent* AkEvent) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetListenerType(void* ListenerType, float InterpolationTime) {
    return;
}
bool _Script_AkAudio::AkGameplayStatics::SetLanguageToCurrentCulture(void* LanguageName) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetGlobalSwitch(void* SwitchGroup, void* SwitchState) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::PostTrigger(void* Trigger, _Script_Engine::Actor* Actor) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::SetBusConfig(void* BusName, void* ChannelConfiguration) {
    return;
}
_Script_AkAudio::AkComponent* _Script_AkAudio::AkGameplayStatics::PostEventOnComponent(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::SceneComponent* AttachToComponent, bool OcclusionEnabled) {
    return;
}
int32_t _Script_AkAudio::AkGameplayStatics::PostEventAttached(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, void* AttachPointName, bool bStopWhenAttachedToDestroyed, void* EventName, bool bOcclusionEnabled) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::PostEventAtLocationByName(void* EventName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
int32_t _Script_AkAudio::AkGameplayStatics::PostEventAtLocation(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, void* EventName, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
int32_t _Script_AkAudio::AkGameplayStatics::PostEvent(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, bool bStopWhenAttachedToDestroyed, void* EventName, bool bOcclusionEnabled) {
    return;
}
_Script_AkAudio::AkComponent* _Script_AkAudio::AkGameplayStatics::GetAkComponent(_Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, void* LocationType) {
    return;
}
int32_t _Script_AkAudio::AkGameplayStatics::PostAndWaitForEndOfEvent(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, bool bStopWhenAttachedToDestroyed, void* EventName, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::LoadBanks(void*& SoundBanks, bool SynchronizeSoundBanks) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::LoadBankByName(void* BankName) {
    return;
}
float _Script_AkAudio::AkGameplayStatics::GetOcclusionScalingFactor() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::LoadBank(_Script_AkAudio::AkAudioBank* Bank, void* BankName, _Script_Engine::LatentActionInfo LatentInfo, _Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_AkAudio::AkGameplayStatics::IsLoadingAudioBanks() {
    return;
}
bool _Script_AkAudio::AkGameplayStatics::IsGame(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_AkAudio::AkGameplayStatics::IsEditor() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::GetSpeakerAngles(void*& SpeakerAngles, float& HeightAngle, void* DeviceShareset) {
    return;
}
void* _Script_AkAudio::AkGameplayStatics::GetListenerType() {
    return;
}
void _Script_AkAudio::AkGameplayStatics::ExecuteActionOnEvent(_Script_AkAudio::AkAudioEvent* AkEvent, void* ActionType, _Script_Engine::Actor* Actor, int32_t TransitionDuration, void* FadeCurve, int32_t PlayingID) {
    return;
}
void _Script_AkAudio::AkGameplayStatics::ClearBanks() {
    return;
}
