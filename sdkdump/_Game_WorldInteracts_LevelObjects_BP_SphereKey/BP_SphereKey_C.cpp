#include "..\FUObjectArray.hpp"
#include "BP_SphereKey_C.hpp"
#include "..\_Game_WorldInteracts_LevelObjects_BP_SphereSocket\BP_SphereSocket_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\StaticMeshActor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
#include "..\_Script_RsGameTechRT\RsTargetableComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
#include "..\_Script_SwGame\RsAbilityUserComponent.hpp"
#include "..\_Script_SwGame\SwQuicksandActor.hpp"
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_SphereMid() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3a0);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_MagneticEffect() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x380);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_Audio_Spin_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x468);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x370);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_P_Magnet_Effect_Pull() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x378);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePullEnd() {
    return;
}
_Script_RsGameTechRT::RsTargetableComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_RsTargetable() {
    return *(_Script_RsGameTechRT::RsTargetableComponent**)((uintptr_t)this + 0x390);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::SpinSpheres__UpdateFunc() {
    return;
}
_Script_AkAudio::AkBankLoadComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::StaticMeshComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_SphereInner() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x398);
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x3a8);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_ComeToStop_InterpSpeed_5EE7F10A4F2CFE8A0670C585F88B691D() {
    return *(float*)((uintptr_t)this + 0x3b0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_ComeToStop_SpinSpeed_5EE7F10A4F2CFE8A0670C585F88B691D() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_ComeToStop__Direction_5EE7F10A4F2CFE8A0670C585F88B691D() {
    return (void*)((uintptr_t)this + 0x3b8);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::EnableTick_MovementChecker() {
    return;
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_ComeToStop() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3c0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_SpinSpheres__Direction_C26979A148D7ACC73EAAEBAB800D8C99() {
    return (void*)((uintptr_t)this + 0x3c8);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_Audio_Spin_Loop_Stop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x478);
}
_Script_Engine::TimelineComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_SpinSpheres() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3d0);
}
_Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_currentSocket() {
    return *(_Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C**)((uintptr_t)this + 0x3d8);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_LVL_HitWithForce() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_strongForcePushResponse() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_strongForcePushResponse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_standardForcePushDamping() {
    return *(float*)((uintptr_t)this + 0x3f4);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_strongForcePushDamping() {
    return *(float*)((uintptr_t)this + 0x3f8);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::SpinSpheres__FinishedFunc() {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_LVL_OnForceSlowStart() {
    return (void*)((uintptr_t)this + 0x400);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_LVL_OnForceSlowEnd() {
    return (void*)((uintptr_t)this + 0x410);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_bBallSaveTickEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_LVL_OnForceTelekinesisEnd() {
    return (void*)((uintptr_t)this + 0x420);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_AltSave_Active(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_InitialRotationMid() {
    return (void*)((uintptr_t)this + 0x430);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_InitialRotationInner() {
    return (void*)((uintptr_t)this + 0x43c);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_HasLeftSocket() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_HasLeftSocket(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_BallSaveTimer() {
    return *(float*)((uintptr_t)this + 0x44c);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePushEnd() {
    return;
}
float& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_BallSaveDelay() {
    return *(float*)((uintptr_t)this + 0x450);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_bBallSaveTickEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_bMovementCheckerTickEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_IsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x456 + 0);
    *(uint8_t*)((uintptr_t)this + 0x456 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_bMovementCheckerTickEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::ComeToStop__UpdateFunc() {
    return;
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_IsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x456 + 0)) & 1 != 0;
}
_Script_SwGame::RsAbilityUserComponent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_PlayerAbilityUser() {
    return *(_Script_SwGame::RsAbilityUserComponent**)((uintptr_t)this + 0x458);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_Highlight_AllowMovementChecker() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_Highlight_AllowMovementChecker(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AkAudio::AkAudioEvent*& _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_Audio_Idle_Loop() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x470);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_strongForcePushVictimData() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_standardForcePushVictimData() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_BackUpReleaseEvent() {
    return (void*)((uintptr_t)this + 0x490);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_AltSave_Active() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a0 + 0)) & 1 != 0;
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_AltSave_StartAtAlternateStartingPosition() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a1 + 0)) & 1 != 0;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_AltSave_StartAtAlternateStartingPosition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_AltSave_AlternateStartingPosition() {
    return (void*)((uintptr_t)this + 0x4a4);
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::set_AltSave_HeldBySocket(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::get_AltSave_HeldBySocket() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/LevelObjects/BP_SphereKey.BP_SphereKey_C");
    return result;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::UpdateStopSpinSpheres(float InterpSpeed) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::UpdateSpinSpheres(float SpinSpeed) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePullEnterHold() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_IsAttachedToSocket(bool& Attached) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::ComeToStop__FinishedFunc() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_DeactivateBall(_Game_WorldInteracts_LevelObjects_BP_SphereSocket::BP_SphereSocket_C* socket) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::ReceiveBeginPlay() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_EnableStrongForcePush() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_DisableStrongForcePush() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceSlowEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_ActivateBall() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::StartSpin() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::StopSpin() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnStartBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnStopBeingAffectedByQuicksand(_Script_SwGame::SwQuicksandActor* QuicksandActor) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Lvl_SaveSphereKey_EnterSocket() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Lvl_SaveSphereKey_LeftSocket() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Tick_LeftSocketSaveTimer(float Dt) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::BeginPlay_Highlight() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Highlight_SetToNoForceSlow() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Highlight_SetToYesForceSlow() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::EnableTick_BallSave() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::DisableTick_BallSave() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::DisableTick_MovementChecker() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Tick_MovementChecker(float Dt) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Lvl_LockSphereIntoSocket() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::Highlight_TurnOffHighlight() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LoadoutChanged(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::OnActorHidden(bool Actor_Hidden_) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::SetToSocketOrAlternatePosition() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::ExecuteUbergraph_BP_SphereKey(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::BackUpReleaseEvent__DelegateSignature(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_OnForceTelekinesisEnd__DelegateSignature(_Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C* SphereKey) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_OnForceSlowEnd__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_OnForceSlowStart__DelegateSignature(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom) {
    return;
}
void _Game_WorldInteracts_LevelObjects_BP_SphereKey::BP_SphereKey_C::LVL_HitWithForce__DelegateSignature(_Script_Engine::Actor* DispatchActor) {
    return;
}
