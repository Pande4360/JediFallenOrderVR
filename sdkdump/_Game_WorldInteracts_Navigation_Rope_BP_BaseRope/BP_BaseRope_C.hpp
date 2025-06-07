#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Navigation_Rope_RopeForce\RopeForce.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_RsGameTechRT\RsRopeActor.hpp"
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_RsGameTechRT {
struct RsRopeComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsRopeAttachmentComponent;
}
namespace _Game_WorldInteracts_Navigation_Rope_BP_BaseRope {
#pragma pack(push, 1)
struct BP_BaseRope_C : public _Script_RsGameTechRT::RsRopeActor {
    private: char pad_368[0xf0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetComponent*& get_InteractWidget();
    _Script_Engine::BillboardComponent*& get_Billboard();
    _Script_Engine::SceneComponent*& get_LookAtPoint();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    bool get_ApplyAttachmentImpulse();
    void set_ApplyAttachmentImpulse(bool value);
    float& get_OverrideAttachmentImpulseStrength();
    bool get_AttachmentImpulseSetVelocity();
    void set_AttachmentImpulseSetVelocity(bool value);
    float& get_MinAttachmentLength();
    float& get_MaxAttachmentLength();
    bool get_LookAtRopeWhenAttachedOnGround();
    void set_LookAtRopeWhenAttachedOnGround(bool value);
    void* get_LVL_AttachedToRope();
    float& get_MaxVerticalStrafeLookAngle();
    float& get_MinVerticalStrafeLookAngle();
    bool get_AllowAttachWhenForcePulled();
    void set_AllowAttachWhenForcePulled(bool value);
    bool get_AllowAutoAttachInAir();
    void set_AllowAutoAttachInAir(bool value);
    bool get_AllowAutoAttachOnGround();
    void set_AllowAutoAttachOnGround(bool value);
    bool get_AllowAnyAttachAfterInitialAttach();
    void set_AllowAnyAttachAfterInitialAttach(bool value);
    int32_t& get_AllowAttachCounter();
    bool get_PushAllowAttachOnGround();
    void set_PushAllowAttachOnGround(bool value);
    bool get_PushAllowAttachInAir();
    void set_PushAllowAttachInAir(bool value);
    bool get_AutoDetachOnGroundAttach();
    void set_AutoDetachOnGroundAttach(bool value);
    bool get_ApplyWind();
    void set_ApplyWind(bool value);
    void* get_WindDir();
    void* get_WinDirTarget();
    float& get_GustTimer();
    void* get_RopeForces();
    float& get_MinTimeBetweenGusts();
    float& get_MaxTimeBetweenGusts();
    float& get_MinGustStrength();
    float& get_MaxGustStrength();
    float& get_MinGustDuration();
    float& get_MaxGustDuration();
    float& get_MinWindDirVarianceDegrees();
    float& get_MaxWindDirVarianceDegrees();
    int32_t& get_MinAffectedRopeParticleRadius();
    int32_t& get_MaxAffectedRopeParticleRadius();
    float& get_MinGustStrengthDropoffOverParticles();
    float& get_MaxGustStrengthDropoffOverParticles();
    bool get_DebugDrawGusts();
    void set_DebugDrawGusts(bool value);
    void* get_LVL_OnForcePullRope();
    bool get_IsBeingForcePulled();
    void set_IsBeingForcePulled(bool value);
    void* get_LVL_OnForcePullRopeEnd();
    static _Script_CoreUObject::Class* static_class();
    void TelekinesisLift(bool& Success, int32_t& WeightClass);
    void IsTelekinesisObject(bool& Result, int32_t& tkWeightClass);
    void IsForceSlowdownObject(bool& Result);
    void ForceCrushGrab(bool& Success);
    void TickRopeForces(float Dt);
    void AddRopeForce(_Game_WorldInteracts_Navigation_Rope_RopeForce::RopeForce RopeForce);
    void TickWind(float Dt);
    void PopAttachPermissions();
    void PushAttachPermissions();
    void UpdateInteractWidget(bool Visible, _Script_CoreUObject::Vector Location);
    void GetMaxAttachmentLength(float& Length);
    void UserConstructionScript();
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
    void TelekinesisPush(_Script_CoreUObject::Vector Velocity);
    void TelekinesisDrop(_Script_CoreUObject::Vector Velocity);
    void TelekinesisToss(_Script_CoreUObject::Vector Velocity);
    void ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector);
    void ForceSlowdown(float defaultSlowdownLength);
    void EndForceSlowdown();
    void ForceCrushRelease();
    void ForcePullJiggle(float delayWindow);
    void ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullEnd();
    void BndEvt__RopeComponent_K2Node_ComponentBoundEvent_0_OnRopeAttached__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment);
    void BndEvt__RopeComponent_K2Node_ComponentBoundEvent_1_OnRopeDetached__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment);
    void BndEvt__RopeComponent_K2Node_ComponentBoundEvent_4_OnRopeAttachedGroundBegin__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_RsGameTechRT::RsRopeAttachmentComponent* RopeAttachment);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Lvl_HighlightSetUp();
    void Highlight_NoHighlight();
    void Highlight_BlueHighlight();
    void Highlight_RedHighlight();
    void ExecuteUbergraph_BP_BaseRope(int32_t EntryPoint);
    void LVL_OnForcePullRopeEnd__DelegateSignature();
    void LVL_OnForcePullRope__DelegateSignature();
    void LVL_AttachedToRope__DelegateSignature();
}; // Size: 0x458
#pragma pack(pop)
}
