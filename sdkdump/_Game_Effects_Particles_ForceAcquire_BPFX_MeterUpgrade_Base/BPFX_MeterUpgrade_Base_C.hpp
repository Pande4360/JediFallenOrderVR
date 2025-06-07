#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct PostProcessComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base {
#pragma pack(push, 1)
struct BPFX_MeterUpgrade_Base_C : public _Script_Engine::Actor {
    private: char pad_360[0xb8]; public:
    void* get_UberGraphFrame();
    _Script_Engine::PostProcessComponent*& get_PP_MeterUpgrade();
    _Script_Engine::PointLightComponent*& get_PointLight();
    _Script_Engine::BoxComponent*& get_Box();
    _Script_Engine::ParticleSystemComponent*& get_P_MeterUpgradeParticle();
    float& get_LoopingIntensityVariance_Intensity_7C2A71CC4FF9A01993C7A1A8ABD96D84();
    void* get_LoopingIntensityVariance__Direction_7C2A71CC4FF9A01993C7A1A8ABD96D84();
    _Script_Engine::TimelineComponent*& get_LoopingIntensityVariance();
    float& get_PostProcessTimeline_NewTrack_0_3B99B3BE49CAFAB794199FB4633ED625();
    void* get_PostProcessTimeline__Direction_3B99B3BE49CAFAB794199FB4633ED625();
    _Script_Engine::TimelineComponent*& get_PostProcessTimeline();
    float& get_FadingIntensities_PointLightIntensityScalar_853E636A482430EE309698B77B42A87C();
    float& get_FadingIntensities_VFXIntensityFadeScalar_853E636A482430EE309698B77B42A87C();
    void* get_FadingIntensities__Direction_853E636A482430EE309698B77B42A87C();
    _Script_Engine::TimelineComponent*& get_FadingIntensities();
    bool get_InBox();
    void set_InBox(bool value);
    _Script_Engine::MaterialInstanceDynamic*& get_PPMAT();
    _Script_Engine::MaterialInstanceDynamic*& get_PPMAT_Nearby();
    bool get_Disabled();
    void set_Disabled(bool value);
    bool get_Collected();
    void set_Collected(bool value);
    _Script_Engine::ParticleSystem*& get_UpgradeEventVFX();
    _Script_AkAudio::AkAudioEvent*& get_AK_StopIdleLoopEvent();
    _Script_AkAudio::AkAudioEvent*& get_AK_MeterUpgradeActivateEvent();
    _Script_Engine::MaterialInterface*& get_DynamicMaterial();
    _Script_Engine::MaterialInterface*& get_NearbyUpgradeMaterial();
    void* get_PlayerLocation();
    float& get_FadingVFXIntensityScalar();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void FadingIntensities__FinishedFunc();
    void FadingIntensities__UpdateFunc();
    void LoopingIntensityVariance__FinishedFunc();
    void LoopingIntensityVariance__UpdateFunc();
    void PostProcessTimeline__FinishedFunc();
    void PostProcessTimeline__UpdateFunc();
    void OnForcePullEnd();
    void OnForcePullEnterHold();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushEnd();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisEnd();
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void UpgradeAcquired();
    void ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor);
    void ReceiveActorEndOverlap0(_Script_Engine::Actor* OtherActor);
    void ReceiveBeginPlay0();
    void PauseMenuToggled(bool PauseMenuOpened);
    void ExecuteUbergraph_BPFX_MeterUpgrade_Base(int32_t EntryPoint);
}; // Size: 0x418
#pragma pack(pop)
}
