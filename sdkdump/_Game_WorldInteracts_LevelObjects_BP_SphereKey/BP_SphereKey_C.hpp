#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
namespace _Script_AkAudio {
struct AkBankLoadComponent;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_SwGame {
struct SwQuicksandActor;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SphereSocket {
struct BP_SphereSocket_C;
}
namespace _Script_SwGame {
struct RsAbilityUserComponent;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_WorldInteracts_LevelObjects_BP_SphereKey {
#pragma pack(push, 1)
struct BP_SphereKey_C : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0x148]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_P_Magnet_Effect_Pull();
    _Script_Engine::StaticMeshComponent*& get_MagneticEffect();
    _Script_AkAudio::AkBankLoadComponent*& get_AkBankLoad();
    _Script_RsGameTechRT::RsTargetableComponent*& get_RsTargetable();
    _Script_Engine::StaticMeshComponent*& get_SphereInner();
    _Script_Engine::StaticMeshComponent*& get_SphereMid();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    float& get_ComeToStop_InterpSpeed_5EE7F10A4F2CFE8A0670C585F88B691D();
    float& get_ComeToStop_SpinSpeed_5EE7F10A4F2CFE8A0670C585F88B691D();
    void* get_ComeToStop__Direction_5EE7F10A4F2CFE8A0670C585F88B691D();
    _Script_Engine::TimelineComponent*& get_ComeToStop();
    void* get_SpinSpheres__Direction_C26979A148D7ACC73EAAEBAB800D8C99();
    _Script_Engine::TimelineComponent*& get_SpinSpheres();
    _Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C*& get_currentSocket();
    void* get_LVL_HitWithForce();
    bool get_strongForcePushResponse();
    void set_strongForcePushResponse(bool value);
    float& get_standardForcePushDamping();
    float& get_strongForcePushDamping();
    void* get_LVL_OnForceSlowStart();
    void* get_LVL_OnForceSlowEnd();
    void* get_LVL_OnForceTelekinesisEnd();
    void* get_InitialRotationMid();
    void* get_InitialRotationInner();
    bool get_HasLeftSocket();
    void set_HasLeftSocket(bool value);
    float& get_BallSaveTimer();
    float& get_BallSaveDelay();
    bool get_bBallSaveTickEnabled();
    void set_bBallSaveTickEnabled(bool value);
    bool get_bMovementCheckerTickEnabled();
    void set_bMovementCheckerTickEnabled(bool value);
    bool get_IsLocked();
    void set_IsLocked(bool value);
    _Script_SwGame::RsAbilityUserComponent*& get_PlayerAbilityUser();
    bool get_Highlight_AllowMovementChecker();
    void set_Highlight_AllowMovementChecker(bool value);
    _Script_AkAudio::AkAudioEvent*& get_Audio_Spin_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Idle_Loop();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Spin_Loop_Stop();
    void* get_strongForcePushVictimData();
    void* get_standardForcePushVictimData();
    void* get_BackUpReleaseEvent();
    bool get_AltSave_Active();
    void set_AltSave_Active(bool value);
    bool get_AltSave_StartAtAlternateStartingPosition();
    void set_AltSave_StartAtAlternateStartingPosition(bool value);
    void* get_AltSave_AlternateStartingPosition();
    bool get_AltSave_HeldBySocket();
    void set_AltSave_HeldBySocket(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateStopSpinSpheres(float InterpSpeed);
    void UpdateSpinSpheres(float SpinSpeed);
    void LVL_IsAttachedToSocket(bool& Attached);
    void UserConstructionScript();
    void SpinSpheres__FinishedFunc();
    void SpinSpheres__UpdateFunc();
    void ComeToStop__FinishedFunc();
    void ComeToStop__UpdateFunc();
    void OnForcePullEnd();
    void OnForcePullEnterHold();
    void OnForcePushEnd();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void LVL_DeactivateBall(_Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C* socket);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ReceiveBeginPlay();
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void LVL_EnableStrongForcePush();
    void LVL_DisableStrongForcePush();
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void LVL_ActivateBall();
    void OnForceTelekinesisEnd();
    void StartSpin();
    void StopSpin();
    void OnStartBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor);
    void OnStopBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor);
    void Lvl_SaveSphereKey_EnterSocket();
    void Lvl_SaveSphereKey_LeftSocket();
    void ReceiveTick(float DeltaSeconds);
    void Tick_LeftSocketSaveTimer(float Dt);
    void BeginPlay_Highlight();
    void Highlight_SetToNoForceSlow();
    void Highlight_SetToYesForceSlow();
    void EnableTick_BallSave();
    void DisableTick_BallSave();
    void EnableTick_MovementChecker();
    void DisableTick_MovementChecker();
    void Tick_MovementChecker(float Dt);
    void Lvl_LockSphereIntoSocket();
    void Highlight_TurnOffHighlight();
    void LoadoutChanged(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags);
    void OnActorHidden(bool Actor_Hidden_);
    void SetToSocketOrAlternatePosition();
    void ExecuteUbergraph_BP_SphereKey(int32_t EntryPoint);
    void BackUpReleaseEvent__DelegateSignature(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey);
    void LVL_OnForceTelekinesisEnd__DelegateSignature(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey);
    void LVL_OnForceSlowEnd__DelegateSignature();
    void LVL_OnForceSlowStart__DelegateSignature(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom);
    void LVL_HitWithForce__DelegateSignature(_Script_Engine::Actor* DispatchActor);
}; // Size: 0x4b8
#pragma pack(pop)
}
