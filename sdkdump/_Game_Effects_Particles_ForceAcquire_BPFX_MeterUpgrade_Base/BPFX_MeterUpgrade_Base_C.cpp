#include "..\FUObjectArray.hpp"
#include "BPFX_MeterUpgrade_Base_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceTelekinesisEnd() {
    return;
}
void* _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_LoopingIntensityVariance__Direction_7C2A71CC4FF9A01993C7A1A8ABD96D84() {
    return (void*)((uintptr_t)this + 0x38c);
}
void* _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::PostProcessComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PP_MeterUpgrade() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x368);
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
_Script_Engine::PointLightComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PointLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::BoxComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x378);
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_P_MeterUpgradeParticle() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x380);
}
float& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_LoopingIntensityVariance_Intensity_7C2A71CC4FF9A01993C7A1A8ABD96D84() {
    return *(float*)((uintptr_t)this + 0x388);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_LoopingIntensityVariance() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x390);
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::UpgradeAcquired() {
    return;
}
float& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PostProcessTimeline_NewTrack_0_3B99B3BE49CAFAB794199FB4633ED625() {
    return *(float*)((uintptr_t)this + 0x398);
}
bool _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_Collected() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d9 + 0)) & 1 != 0;
}
void* _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PostProcessTimeline__Direction_3B99B3BE49CAFAB794199FB4633ED625() {
    return (void*)((uintptr_t)this + 0x39c);
}
float& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_FadingIntensities_PointLightIntensityScalar_853E636A482430EE309698B77B42A87C() {
    return *(float*)((uintptr_t)this + 0x3a8);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PostProcessTimeline() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3a0);
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
float& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_FadingIntensities_VFXIntensityFadeScalar_853E636A482430EE309698B77B42A87C() {
    return *(float*)((uintptr_t)this + 0x3ac);
}
void* _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_FadingIntensities__Direction_853E636A482430EE309698B77B42A87C() {
    return (void*)((uintptr_t)this + 0x3b0);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_FadingIntensities() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3b8);
}
bool _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_InBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::set_InBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PPMAT() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PPMAT_Nearby() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3d0);
}
bool _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_Disabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::set_Disabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::set_Collected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystem*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_UpgradeEventVFX() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x3e0);
}
_Script_AkAudio::AkAudioEvent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_AK_StopIdleLoopEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3e8);
}
_Script_AkAudio::AkAudioEvent*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_AK_MeterUpgradeActivateEvent() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::MaterialInterface*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_DynamicMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x3f8);
}
_Script_Engine::MaterialInterface*& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_NearbyUpgradeMaterial() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0x400);
}
void* _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_PlayerLocation() {
    return (void*)((uintptr_t)this + 0x408);
}
float& _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::get_FadingVFXIntensityScalar() {
    return *(float*)((uintptr_t)this + 0x414);
}
_Script_CoreUObject::Class* _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Particles/ForceAcquire/BPFX_MeterUpgrade_Base.BPFX_MeterUpgrade_Base_C");
    return result;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::PauseMenuToggled(bool PauseMenuOpened) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::FadingIntensities__FinishedFunc() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::FadingIntensities__UpdateFunc() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::LoopingIntensityVariance__FinishedFunc() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::LoopingIntensityVariance__UpdateFunc() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::PostProcessTimeline__FinishedFunc() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::PostProcessTimeline__UpdateFunc() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePullEnd() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePullEnterHold() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePushEnd() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceSlowEnd() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::ReceiveActorEndOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Effects_Particles_ForceAcquire_BPFX_MeterUpgrade_Base::BPFX_MeterUpgrade_Base_C::ExecuteUbergraph_BPFX_MeterUpgrade_Base(int32_t EntryPoint) {
    return;
}
