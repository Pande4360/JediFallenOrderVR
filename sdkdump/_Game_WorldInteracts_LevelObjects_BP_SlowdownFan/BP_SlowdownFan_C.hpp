#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsDistanceTriggerComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_Engine {
struct RotatingMovementComponent;
}
namespace _Script_Engine {
struct BoxComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_SwGame {
struct RsAbilityUserComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SlowdownFan {
#pragma pack(push, 1)
struct BP_SlowdownFan_C : public _Script_Engine::Actor {
    private: char pad_360[0x108]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsDistanceTriggerComponent*& get_RsDistanceTrigger();
    _Script_Engine::BoxComponent*& get_ForceCollision();
    _Script_Engine::StaticMeshComponent*& get_BlockCamera();
    _Script_Engine::StaticMeshComponent*& get_DamageCylinderInvis();
    _Script_Engine::RotatingMovementComponent*& get_RotatingMovement();
    _Script_Engine::StaticMeshComponent*& get_fan_01();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_Engine::ParticleSystemComponent*& get_HitParticle();
    _Script_Engine::StaticMeshComponent*& get_FanCenter();
    _Script_Engine::SceneComponent*& get_Rotator();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_FanStartupSlowdown_RPM_FullSpeedMultiplier_EE3823E249014AE79E664FA1707CB1FA();
    void* get_FanStartupSlowdown__Direction_EE3823E249014AE79E664FA1707CB1FA();
    _Script_Engine::TimelineComponent*& get_FanStartupSlowdown();
    void* get_slowdownTimer();
    float& get_FanDamage();
    bool get_DealEnvironmentDeath();
    void set_DealEnvironmentDeath(bool value);
    bool get_bActive();
    void set_bActive(bool value);
    void* get_LVL_activate();
    void* get_LVL_Deactivate();
    float& get_FanRPM();
    float& get_FanSpinUpTime();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Fan_Slow_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Fan_Normal_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Fan_Hit_Hero();
    void* get_LVL_ForceSlowEnd();
    void* get_LVL_ForceSlowStart();
    bool get_bInsideTriggerVolume();
    void set_bInsideTriggerVolume(bool value);
    float& get_DamageCooldown();
    void* get_AdditionalObjectsToForceHighlight();
    _Script_SwGame::RsAbilityUserComponent*& get_PlayerAbilityUser();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Fan_Stop();
    static _Script_CoreUObject::Class* static_class();
    void TelekinesisLift(bool& Success, int32_t& WeightClass);
    void IsTelekinesisObject(bool& Result, int32_t& tkWeightClass);
    void IsForceSlowdownObject(bool& Result);
    void ForceCrushGrab(bool& Success);
    void UserConstructionScript0();
    void FanStartupSlowdown__FinishedFunc();
    void FanStartupSlowdown__UpdateFunc();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceTelekinesisEnd();
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void TelekinesisPush(_Script_CoreUObject::Vector Velocity);
    void TelekinesisDrop(_Script_CoreUObject::Vector Velocity);
    void TelekinesisToss(_Script_CoreUObject::Vector Velocity);
    void ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector);
    void ForceSlowdown(float defaultSlowdownLength);
    void EndForceSlowdown();
    void ForceCrushRelease();
    void ForcePullJiggle(float delayWindow);
    void ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress);
    void OnForcePushEnd();
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void ReceiveBeginPlay0();
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void LVL_Activate_Event();
    void LVL_Deactivate_Event();
    void OnForcePullEnterHold();
    void OnForcePullEnd();
    void CE_FanStartMoving(bool BeginPlay);
    void CE_FanStopMoving();
    void CE_Audio_FanSpinningLoop();
    void CE_Audio_FanTurnsOff();
    void CE_Audio_FanSpinningSloMo();
    void PoweredOff(bool BeginPlay);
    void PoweredOn(bool BeginPlay);
    void BndEvt__DamageCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void BndEvt__RsDistanceTrigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void BndEvt__RsDistanceTrigger_K2Node_ComponentBoundEvent_1_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor);
    void CE_CameraBlockerOff();
    void CE_CameraBlockerOn();
    void StartOff();
    void CE_DamageOn();
    void CE_DamageOff();
    void ReEnableDamage();
    void ExecuteUbergraph_BP_SlowdownFan(int32_t EntryPoint);
    void LVL_ForceSlowStart__DelegateSignature();
    void LVL_ForceSlowEnd__DelegateSignature();
    void LVL_Deactivate__DelegateSignature();
    void LVL_Activate__DelegateSignature();
}; // Size: 0x468
#pragma pack(pop)
}
