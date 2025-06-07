#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AkAudio {
struct AkAuxBus;
}
namespace _Script_AkAudio {
struct AkAudioBank;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkGameplayStatics : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UseReverbVolumes(bool inUseReverbVolumes, _Script_Engine::Actor* Actor);
    void UseEarlyReflections(_Script_Engine::Actor* Actor, _Script_AkAudio::AkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, void* AuxBusName);
    void UnloadBankByName(void* BankName);
    void UnloadBankAsync(_Script_AkAudio::AkAudioBank* Bank, void*& BankUnloadedCallback);
    void UnloadBank(_Script_AkAudio::AkAudioBank* Bank, void* BankName, _Script_Engine::LatentActionInfo LatentInfo, _Script_CoreUObject::Object* WorldContextObject);
    void StopProfilerCapture();
    void StopOutputCapture();
    void StopAllAmbientSounds(_Script_CoreUObject::Object* WorldContextObject);
    void StopAll();
    void StopActor(_Script_Engine::Actor* Actor);
    void StartProfilerCapture(void* Filename);
    void StartOutputCapture(void* Filename);
    void StartAllAmbientSounds(_Script_CoreUObject::Object* WorldContextObject);
    _Script_AkAudio::AkComponent* SpawnAkComponentAtLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_AkAudio::AkAudioEvent* AkEvent, _Script_AkAudio::AkAuxBus* EarlyReflectionsBus, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, bool AutoPost, void* EventName, void* EarlyReflectionsBusName, bool AutoDestroy, bool OcclusionEnabled);
    bool ShouldPlaySound(_Script_AkAudio::AkAudioEvent* Event, _Script_Engine::World* World, _Script_CoreUObject::Vector& Location);
    void SetSwitchOnComponent(void* SwitchGroup, void* SwitchState, _Script_AkAudio::AkComponent* Component);
    void SetSwitch(void* SwitchGroup, void* SwitchState, _Script_Engine::Actor* Actor);
    void SetState(void* StateGroup, void* State);
    void SetSpeakerAngles(void*& SpeakerAngles, float HeightAngle, void* DeviceShareset);
    void SetRTPCValue(void* RTPC, float Value, int32_t InterpolationTimeMs, _Script_Engine::Actor* Actor);
    void SetPanningRule(void* PanRule);
    void SetOutputBusVolume(float BusVolume, _Script_Engine::Actor* Actor);
    void SetOcclusionScalingFactor(float ScalingFactor);
    void SetMultiplePositions(_Script_AkAudio::AkComponent* GameObjectAkComponent, void* Positions, void* MultiPositionType);
    void SetMultipleChannelEmitterPositions(_Script_AkAudio::AkComponent* GameObjectAkComponent, void* ChannelMasks, void* Positions, void* MultiPositionType);
    void SetListenerType(void* ListenerType, float InterpolationTime);
    bool SetLanguageToCurrentCulture(void* LanguageName);
    void SetGlobalSwitch(void* SwitchGroup, void* SwitchState);
    void SetBusConfig(void* BusName, void* ChannelConfiguration);
    void PostTrigger(void* Trigger, _Script_Engine::Actor* Actor);
    int32_t PostGlobalEvent(_Script_AkAudio::AkAudioEvent* AkEvent);
    _Script_AkAudio::AkComponent* PostEventOnComponent(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::SceneComponent* AttachToComponent, bool OcclusionEnabled);
    void PostEventByName(void* EventName, _Script_Engine::Actor* Actor, bool bStopWhenAttachedToDestroyed, bool bOcclusionEnabled);
    int32_t PostEventAttached(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, void* AttachPointName, bool bStopWhenAttachedToDestroyed, void* EventName, bool bOcclusionEnabled);
    void PostEventAtLocationByName(void* EventName, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, _Script_CoreUObject::Object* WorldContextObject);
    int32_t PostEventAtLocation(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Orientation, void* EventName, _Script_CoreUObject::Object* WorldContextObject);
    int32_t PostEvent(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, bool bStopWhenAttachedToDestroyed, void* EventName, bool bOcclusionEnabled);
    int32_t PostAndWaitForEndOfEvent(_Script_AkAudio::AkAudioEvent* AkEvent, _Script_Engine::Actor* Actor, bool bStopWhenAttachedToDestroyed, void* EventName, _Script_Engine::LatentActionInfo LatentInfo);
    void LoadInitBank();
    void LoadBanks(void*& SoundBanks, bool SynchronizeSoundBanks);
    void LoadBankByName(void* BankName);
    void LoadBankAsync(_Script_AkAudio::AkAudioBank* Bank, void*& BankLoadedCallback);
    void LoadBank(_Script_AkAudio::AkAudioBank* Bank, void* BankName, _Script_Engine::LatentActionInfo LatentInfo, _Script_CoreUObject::Object* WorldContextObject);
    bool IsLoadingAudioBanks();
    bool IsGame(_Script_CoreUObject::Object* WorldContextObject);
    bool IsEditor();
    void GetSpeakerAngles(void*& SpeakerAngles, float& HeightAngle, void* DeviceShareset);
    float GetOcclusionScalingFactor();
    void* GetListenerType();
    void* GetLanguageForCurrentCulture();
    _Script_AkAudio::AkComponent* GetAkComponent(_Script_Engine::SceneComponent* AttachToComponent, void* AttachPointName, _Script_CoreUObject::Vector Location, void* LocationType);
    void ExecuteActionOnEvent(_Script_AkAudio::AkAudioEvent* AkEvent, void* ActionType, _Script_Engine::Actor* Actor, int32_t TransitionDuration, void* FadeCurve, int32_t PlayingID);
    void ClearBanks();
    void CancelEventCallback(void*& PostEventCallback);
    void AddOutputCaptureMarker(void* MarkerText);
}; // Size: 0x28
#pragma pack(pop)
}
