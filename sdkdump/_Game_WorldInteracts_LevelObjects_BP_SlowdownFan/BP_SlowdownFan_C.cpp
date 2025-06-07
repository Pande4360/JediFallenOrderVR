#include "..\FUObjectArray.hpp"
#include "BP_SlowdownFan_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\RotatingMovementComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsDistanceTriggerComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
#include "..\_Script_SwGame\RsAbilityUserComponent.hpp"
bool _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_DealEnvironmentDeath() {
    return (*(uint8_t*)((uintptr_t)this + 0x3dc + 0)) & 1 != 0;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x398);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
_Script_RsGameTechRT::RsDistanceTriggerComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_RsDistanceTrigger() {
    return *(_Script_RsGameTechRT::RsDistanceTriggerComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::BoxComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_ForceCollision() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_BlockCamera() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_DamageCylinderInvis() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x380);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_Audio_Fan_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x460);
}
_Script_Engine::RotatingMovementComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_RotatingMovement() {
    return *(_Script_Engine::RotatingMovementComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_fan_01() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x390);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_LVL_ForceSlowEnd() {
    return (void*)((uintptr_t)this + 0x420);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_HitParticle() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanCenter() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3a8);
}
float& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanSpinUpTime() {
    return *(float*)((uintptr_t)this + 0x404);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_Rotator() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b0);
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3b8);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_Audio_Fan_Normal_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x410);
}
float& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanStartupSlowdown_RPM_FullSpeedMultiplier_EE3823E249014AE79E664FA1707CB1FA() {
    return *(float*)((uintptr_t)this + 0x3c0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanStartupSlowdown__Direction_EE3823E249014AE79E664FA1707CB1FA() {
    return (void*)((uintptr_t)this + 0x3c4);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanStartupSlowdown() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3c8);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_slowdownTimer() {
    return (void*)((uintptr_t)this + 0x3d0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanDamage() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::set_DealEnvironmentDeath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_bActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x3dd + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::set_bActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3dd + 0);
    *(uint8_t*)((uintptr_t)this + 0x3dd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePushEnd() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_LVL_activate() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::StartOff() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_LVL_Deactivate() {
    return (void*)((uintptr_t)this + 0x3f0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_FanRPM() {
    return *(float*)((uintptr_t)this + 0x400);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_Audio_Fan_Slow_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x408);
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::IsTelekinesisObject(bool& Result, int32_t& tkWeightClass) {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_Audio_Fan_Hit_Hero() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x418);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_LVL_ForceSlowStart() {
    return (void*)((uintptr_t)this + 0x430);
}
bool _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_bInsideTriggerVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x440 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::set_bInsideTriggerVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x440 + 0);
    *(uint8_t*)((uintptr_t)this + 0x440 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_DamageCooldown() {
    return *(float*)((uintptr_t)this + 0x444);
}
void* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_AdditionalObjectsToForceHighlight() {
    return (void*)((uintptr_t)this + 0x448);
}
_Script_SwGame::RsAbilityUserComponent*& _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::get_PlayerAbilityUser() {
    return *(_Script_SwGame::RsAbilityUserComponent**)((uintptr_t)this + 0x458);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_SlowdownFan.BP_SlowdownFan_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::TelekinesisLift(bool& Success, int32_t& WeightClass) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::IsForceSlowdownObject(bool& Result) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ForceCrushGrab(bool& Success) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::FanStartupSlowdown__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::FanStartupSlowdown__UpdateFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::TelekinesisPush(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::TelekinesisDrop(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::TelekinesisToss(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ForceSlowdown(float defaultSlowdownLength) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::EndForceSlowdown() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ForceCrushRelease() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ReEnableDamage() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ForcePullJiggle(float delayWindow) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForceSlowEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::LVL_Activate_Event() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::LVL_Deactivate_Event() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePullEnterHold() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::OnForcePullEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_FanStartMoving(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_FanStopMoving() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_Audio_FanSpinningLoop() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_Audio_FanTurnsOff() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_Audio_FanSpinningSloMo() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::PoweredOff(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::PoweredOn(bool BeginPlay) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::BndEvt__DamageCylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(_Script_Engine::PrimitiveComponent* OverlappedComponent, _Script_Engine::Actor* OtherActor, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::BndEvt__RsDistanceTrigger_K2Node_ComponentBoundEvent_0_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::BndEvt__RsDistanceTrigger_K2Node_ComponentBoundEvent_1_RsTriggerSignature__DelegateSignature(_Script_Engine::Actor* Actor) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_CameraBlockerOff() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_CameraBlockerOn() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_DamageOn() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::CE_DamageOff() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::ExecuteUbergraph_BP_SlowdownFan(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::LVL_ForceSlowStart__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::LVL_ForceSlowEnd__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::LVL_Deactivate__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SlowdownFan::BP_SlowdownFan_C::LVL_Activate__DelegateSignature() {
    return;
}
