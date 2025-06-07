#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_SwGame\SwLightsaberBladeState.hpp"
#include "..\_Script_SwGame\SwProjectileFX.hpp"
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_SwGame {
struct SwLightsaberMarksComponent;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_SwGame {
struct SwLightsaberMovementComponent;
}
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Items_Lightsaber_BP_Lightsaber {
#pragma pack(push, 1)
struct BP_Lightsaber_C : public _Script_Engine::Actor {
    private: char pad_360[0x280]; public:
    void* get_UberGraphFrame();
    _Script_Engine::StaticMeshComponent*& get_ShadowCaster();
    _Script_Engine::StaticMeshComponent*& get_LightsaberTipLocator();
    _Script_Engine::CapsuleComponent*& get_capsule();
    _Script_Engine::ParticleSystemComponent*& get_P_Lightsaber_Extend();
    _Script_Engine::ParticleSystemComponent*& get_P_Lightsaber_Glow();
    _Script_Engine::SkeletalMeshComponent*& get_LightsaberSkelMesh();
    _Script_SwGame::SwLightsaberMovementComponent*& get_SwLightSaberMovement();
    _Script_Engine::StaticMeshComponent*& get_Saber_Blade();
    _Script_AkAudio::AkComponent*& get_Audio_Lightsaber_Idle();
    _Script_SwGame::SwLightsaberMarksComponent*& get_SwLightsaberMarks();
    _Script_Engine::SpotLightComponent*& get_FlashLight_Spot_01();
    _Script_Engine::SceneComponent*& get_hitEffectLocation();
    _Script_Engine::PointLightComponent*& get_FlashLight_Point_01();
    _Script_Engine::PointLightComponent*& get_Saber_Light_Normal();
    float& get_FlashLightFade_IntensityFactor_401A3CED4B17BEB3692FA8A2954C9770();
    void* get_FlashLightFade__Direction_401A3CED4B17BEB3692FA8A2954C9770();
    _Script_Engine::TimelineComponent*& get_FlashLightFade();
    float& get_Length();
    float& get_tipLoc();
    bool get_fan();
    void set_fan(bool value);
    int32_t& get_tkWeightClass();
    _Script_RsGameTechRT::RsAICharacter*& get_lightsaberTarget();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_On();
    _Script_AkAudio::AkAudioEvent*& get_SFX_LIghtsaber_Off();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_On_Light();
    void* get_Prev_Location();
    float& get_BladeMeshLength();
    void* get_BladeColor();
    void* get_BladeGlowColor();
    void* get_BladeMaterials();
    _Script_RsGameTechRT::RsCharacter*& get_OwnerCharacter();
    bool get_csBarehanded();
    void set_csBarehanded(bool value);
    bool get_csFlashlight();
    void set_csFlashlight(bool value);
    bool get_csBalanceBeam();
    void set_csBalanceBeam(bool value);
    bool get_csFlashlightZone();
    void set_csFlashlightZone(bool value);
    float& get_ExtendDir();
    bool get_bAlwaysLeaveMarks();
    void set_bAlwaysLeaveMarks(bool value);
    void* get_BladeExtended();
    void* get_BladeRetracted();
    void* get_pullStartTransform();
    bool get_beingPulled();
    void set_beingPulled(bool value);
    float& get_maxPullDistance();
    void* get_lightsaberThrowStartLoc();
    void* get_HeroTransform();
    float& get_Max_Rel_Vel_Saber();
    float& get_Min_Rel_Vel_Saber();
    void* get_PreviousTipLocation();
    void* get_PreviousRootLocation();
    bool get_DisableSFX();
    void set_DisableSFX(bool value);
    void* get_AttackType();
    float& get_ThrowBaseDamage();
    float& get_ThrowSpeed();
    bool get_HiltVisible();
    void set_HiltVisible(bool value);
    _Script_Engine::PrimitiveComponent*& get_ThrowCollider();
    float& get_FlashLightPointIntensity();
    float& get_FlashLightSpotIntensity();
    bool get_sfxOn();
    void set_sfxOn(bool value);
    bool get_2ndBlade();
    void set_2ndBlade(bool value);
    void* get_Lightsaber_Type();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_On_Single();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_On_Staff();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_On_Twin();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_Off_Single();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_Off_Staff();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_Off_Twin();
    _Script_AkAudio::AkAudioEvent*& get_SFX_Lightsaber_On_Skip_Ignition();
    float& get_LastLength();
    void* get_BladeBaseTransform();
    void* get_SaberColor();
    static _Script_CoreUObject::Class* static_class();
    bool CanBeForcePulledByCharacter(_Script_RsGameTechRT::RsCharacter* PullingCharacter);
    bool IsBladeExtended();
    _Script_SwGame::SwLightsaberBladeState GetBladeState();
    void TelekinesisLift(bool& Success, int32_t& WeightClass);
    void IsTelekinesisObject(bool& Result, int32_t& tkWeightClass);
    void IsForceSlowdownObject(bool& Result);
    void ForceCrushGrab(bool& Success);
    void ChangeLightsaberColor(_Script_CoreUObject::LinearColor New_Blade_Color, _Script_CoreUObject::LinearColor New_Blade_Glow_Color);
    void UpdateControlStack();
    void Lightsaber_SFX(bool enable);
    void UserConstructionScript0();
    void FlashLightFade__FinishedFunc();
    void FlashLightFade__UpdateFunc();
    void OnForcePullEnterHold();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
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
    void CatchLightsaber(_Script_RsGameTechRT::RsCharacter* CatchingCharacter);
    void OverchargeEffect(bool bStart, bool bActivate);
    void TelekinesisPush(_Script_CoreUObject::Vector Velocity);
    void TelekinesisDrop(_Script_CoreUObject::Vector Velocity);
    void TelekinesisToss(_Script_CoreUObject::Vector Velocity);
    void ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector);
    void ForceSlowdown(float defaultSlowdownLength);
    void EndForceSlowdown();
    void ForceCrushRelease();
    void ForcePullJiggle(float delayWindow);
    void ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress);
    void DetachLightsaberFromActor();
    void ClearDroppedState();
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullEnd();
    void LightsaberReflectFX(_Script_SwGame::SwProjectileFX ProjectileFX);
    void LightsaberDeflectFX(_Script_SwGame::SwProjectileFX ProjectileFX);
    void LightsaberThrow();
    void SetLightsaberMarksState(bool bEnabled);
    void ExtendRetractBlade(bool bExtend, bool bInstant);
    void ReceiveBeginPlay0();
    void ReceiveTick0(float DeltaSeconds);
    void UpdateBladeLength(float Delta_Time);
    void BladeExtended_Event(void* Lightsaber);
    void BladeRetracted_Event(void* Lightsaber);
    void UpdateLights();
    void LightsaberSwipe(float Delta_Time);
    void OnThrowReturned();
    void UpdateBlade();
    void LVL_SetHiltVisible(bool bNewVisibility);
    void ExecuteUbergraph_BP_Lightsaber(int32_t EntryPoint);
    void BladeRetracted__DelegateSignature(void* Lightsaber);
    void BladeExtended__DelegateSignature(void* Lightsaber);
}; // Size: 0x5e0
#pragma pack(pop)
}
