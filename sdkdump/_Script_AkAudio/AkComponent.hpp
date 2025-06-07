#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LatentActionInfo.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
namespace _Script_AkAudio {
struct AkAuxBus;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkComponent : public _Script_Engine::SceneComponent {
    private: char pad_2d0[0x240]; public:
    bool get_bUseSpatialAudio();
    void set_bUseSpatialAudio(bool value);
    _Script_AkAudio::AkAuxBus*& get_EarlyReflectionAuxBus();
    void* get_EarlyReflectionAuxBusName();
    int32_t& get_EarlyReflectionOrder();
    float& get_EarlyReflectionBusSendGain();
    float& get_EarlyReflectionMaxPathLength();
    void* get_OcclusionCollisionChannel();
    bool get_EnableSpotReflectors();
    void set_EnableSpotReflectors(bool value);
    float& get_roomReverbAuxBusGain();
    int32_t& get_diffractionMaxEdges();
    int32_t& get_diffractionMaxPaths();
    float& get_diffractionMaxPathLength();
    bool get_DrawFirstOrderReflections();
    void set_DrawFirstOrderReflections(bool value);
    bool get_DrawSecondOrderReflections();
    void set_DrawSecondOrderReflections(bool value);
    bool get_DrawHigherOrderReflections();
    void set_DrawHigherOrderReflections(bool value);
    bool get_DrawGeometricDiffraction();
    void set_DrawGeometricDiffraction(bool value);
    bool get_DrawSoundPropagation();
    void set_DrawSoundPropagation(bool value);
    bool get_StopWhenOwnerDestroyed();
    void set_StopWhenOwnerDestroyed(bool value);
    float& get_AttenuationScalingFactor();
    float& get_OcclusionInterpolationRate();
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    _Script_AkAudio::AkAudioEvent*& get_AkAudioEvent();
    void* get_EventName();
    static _Script_CoreUObject::Class* static_class();
    void UseReverbVolumes(bool inUseReverbVolumes);
    void UseEarlyReflections(_Script_AkAudio::AkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, void* AuxBusName);
    void Stop();
    void SetUseSpatialAudio(bool bNewValue);
    void SetSwitch(void* SwitchGroup, void* SwitchState);
    void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);
    void SetRTPCValue(void* RTPC, float Value, int32_t InterpolationTimeMs);
    void SetOutputBusVolume(float BusVolume);
    void SetOcclusionEnabled(bool Value);
    void SetListeners(void*& Listeners);
    void SetAttenuationScalingFactor(float Value);
    void PostTrigger(void* Trigger);
    int32_t PostAssociatedAkEventAndWaitForEnd(_Script_Engine::LatentActionInfo LatentInfo);
    int32_t PostAssociatedAkEvent(int32_t CallbackMask, void*& PostEventCallback);
    int32_t PostAkEventByName(void* in_EventName);
    int32_t PostAkEventAndWaitForEnd(_Script_AkAudio::AkAudioEvent* AkEvent, void* in_EventName, _Script_Engine::LatentActionInfo LatentInfo);
    int32_t PostAkEvent(_Script_AkAudio::AkAudioEvent* AkEvent, int32_t CallbackMask, void*& PostEventCallback, void* in_EventName);
    void OcclusionFinished();
    float GetRelativeVelocityRTPC();
    float GetAttenuationRadius();
    void EnableRelativeVelocityRTPC(float MaxRelativeVelocity, float MinRelativeVelocity, bool DebugDraw, int32_t InterpolationTimeMs);
    void DisableRelativeVelocityRTPC();
}; // Size: 0x510
#pragma pack(pop)
}
