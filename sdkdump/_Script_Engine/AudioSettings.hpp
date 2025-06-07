#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AudioSettings : public DeveloperSettings {
    private: char pad_38[0x258]; public:
    float& get_PlayerAsListener();
    bool get_DebugDraw();
    void set_DebugDraw(bool value);
    bool get_DebugDrawNames();
    void set_DebugDrawNames(bool value);
    void* get_DebugDrawActorName();
    bool get_OcclusionEnabled();
    void set_OcclusionEnabled(bool value);
    float& get_AdditionalRayConeAngleInDegrees();
    float& get_AdditionalRayConeRadius();
    bool get_UseConeRadius();
    void set_UseConeRadius(bool value);
    float& get_PeriodOfChecks();
    float& get_MaxPeriodOfChecks();
    float& get_MinPeriodOfChecksDistane();
    float& get_MaxPeriodOfChecksDistane();
    float& get_PeriodOfSoundPosUpdates();
    float& get_MaxPeriodOfSoundPosUpdates();
    float& get_MinPeriodOfSoundPosUpdatesDistane();
    float& get_MaxPeriodOfSoundPosUpdatesDistane();
    float& get_ObstructionPerMeter();
    float& get_MaxOcclusionDistance();
    void* get_AdditionalRays();
    void* get_MaxObjectsToHit();
    void* get_ListenerType();
    void* get_DebugSurfaceEffectType();
    float& get_MaxAudioPhysicsVelocity();
    float& get_MaxAudioPhysicsAngularVelocity();
    float& get_MaxAudioPhysicsImpactVelocity();
    bool get_DebugDrawImpact();
    void set_DebugDrawImpact(bool value);
    float& get_ImpactDelay();
    float& get_MinimumTimeBetweenTwoRagdollImpactSounds();
    float& get_MinimumTimeBetweenImpactSounds();
    void* get_GlobalUIStringTable();
    void* get_GlobalRAPDatabase();
    void* get_SilenceUID();
    void* get_SurfaceTypeOverrides();
    void* get_SurfaceEffectBoneMapping();
    void* get_SilenceTrackingEvent();
    void* get_LocalizedVOBanks();
    void* get_HighlightEvent();
    void* get_DefaultSoundClassName();
    void* get_DefaultMediaSoundClassName();
    void* get_DefaultSoundConcurrencyName();
    void* get_DefaultBaseSoundMix();
    void* get_VoiPSoundClass();
    void* get_VoiPSampleRate();
    float& get_VoipBufferingDelay();
    float& get_DefaultReverbSendLevel();
    int32_t& get_MaximumConcurrentStreams();
    void* get_QualityLevels();
    bool get_bAllowVirtualizedSounds();
    void set_bAllowVirtualizedSounds(bool value);
    bool get_bDisableMasterEQ();
    void set_bDisableMasterEQ(bool value);
    bool get_bAllowCenterChannel3DPanning();
    void set_bAllowCenterChannel3DPanning(bool value);
    void* get_MaxWaveInstances();
    void* get_NumStoppingSources();
    void* get_PanningMethod();
    void* get_MonoChannelUpmixMethod();
    void* get_DialogueFilenameFormat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x290
#pragma pack(pop)
}
