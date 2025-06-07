#include "..\FUObjectArray.hpp"
#include "BP_Lightsaber_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SpotLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwLightsaberBladeState.hpp"
#include "..\_Script_SwGame\SwLightsaberMarksComponent.hpp"
#include "..\_Script_SwGame\SwLightsaberMovementComponent.hpp"
#include "..\_Script_SwGame\SwProjectileFX.hpp"
_Script_SwGame::SwLightsaberMovementComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SwLightSaberMovement() {
    return *(_Script_SwGame::SwLightsaberMovementComponent**)((uintptr_t)this + 0x398);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_LightsaberSkelMesh() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x390);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_tipLoc() {
    return *(float*)((uintptr_t)this + 0x3ec);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_ShadowCaster() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::TimelineComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLightFade() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x3e0);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_LightsaberTipLocator() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::CapsuleComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_capsule() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x378);
}
_Script_Engine::ParticleSystemComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_P_Lightsaber_Extend() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x380);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::LightsaberDeflectFX(_Script_SwGame::SwProjectileFX ProjectileFX) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_beingPulled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystemComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_P_Lightsaber_Glow() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x388);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Saber_Blade() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x3a0);
}
_Script_AkAudio::AkComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Audio_Lightsaber_Idle() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x3a8);
}
_Script_SwGame::SwLightsaberMarksComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SwLightsaberMarks() {
    return *(_Script_SwGame::SwLightsaberMarksComponent**)((uintptr_t)this + 0x3b0);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_On_Single() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x558);
}
_Script_Engine::SpotLightComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLight_Spot_01() {
    return *(_Script_Engine::SpotLightComponent**)((uintptr_t)this + 0x3b8);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_AttackType() {
    return (void*)((uintptr_t)this + 0x531);
}
_Script_Engine::SceneComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_hitEffectLocation() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x3c0);
}
_Script_Engine::PointLightComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLight_Point_01() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x3c8);
}
_Script_Engine::PointLightComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Saber_Light_Normal() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x3d0);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLightFade_IntensityFactor_401A3CED4B17BEB3692FA8A2954C9770() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Prev_Location() {
    return (void*)((uintptr_t)this + 0x418);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::UpdateLights() {
    return;
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLightFade__Direction_401A3CED4B17BEB3692FA8A2954C9770() {
    return (void*)((uintptr_t)this + 0x3dc);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_DisableSFX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x530 + 0);
    *(uint8_t*)((uintptr_t)this + 0x530 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Length() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_fan() {
    return (*(uint8_t*)((uintptr_t)this + 0x3f0 + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_fan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_tkWeightClass() {
    return *(int32_t*)((uintptr_t)this + 0x3f4);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::EndForceSlowdown() {
    return;
}
_Script_RsGameTechRT::RsAICharacter*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_lightsaberTarget() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x3f8);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_HeroTransform() {
    return (void*)((uintptr_t)this + 0x4e0);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_On() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x400);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_LIghtsaber_Off() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x408);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_On_Light() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x410);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeMeshLength() {
    return *(float*)((uintptr_t)this + 0x424);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::IsForceSlowdownObject(bool& Result) {
    return;
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeColor() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_Engine::PrimitiveComponent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_ThrowCollider() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0x540);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeGlowColor() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeMaterials() {
    return (void*)((uintptr_t)this + 0x448);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_OwnerCharacter() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x458);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_csBarehanded() {
    return (*(uint8_t*)((uintptr_t)this + 0x460 + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_csBarehanded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x460 + 0);
    *(uint8_t*)((uintptr_t)this + 0x460 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::IsBladeExtended() {
    return;
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_csFlashlight() {
    return (*(uint8_t*)((uintptr_t)this + 0x461 + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_csFlashlight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x461 + 0);
    *(uint8_t*)((uintptr_t)this + 0x461 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_ThrowSpeed() {
    return *(float*)((uintptr_t)this + 0x538);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_csBalanceBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0x462 + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_csBalanceBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x462 + 0);
    *(uint8_t*)((uintptr_t)this + 0x462 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_csFlashlightZone() {
    return (*(uint8_t*)((uintptr_t)this + 0x463 + 0)) & 1 != 0;
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_HiltVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x53c + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_csFlashlightZone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x463 + 0);
    *(uint8_t*)((uintptr_t)this + 0x463 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_ExtendDir() {
    return *(float*)((uintptr_t)this + 0x464);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_bAlwaysLeaveMarks() {
    return (*(uint8_t*)((uintptr_t)this + 0x468 + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_bAlwaysLeaveMarks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x468 + 0);
    *(uint8_t*)((uintptr_t)this + 0x468 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeExtended() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeRetracted() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_pullStartTransform() {
    return (void*)((uintptr_t)this + 0x490);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_beingPulled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 1 != 0;
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_maxPullDistance() {
    return *(float*)((uintptr_t)this + 0x4c4);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_DisableSFX() {
    return (*(uint8_t*)((uintptr_t)this + 0x530 + 0)) & 1 != 0;
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_lightsaberThrowStartLoc() {
    return (void*)((uintptr_t)this + 0x4c8);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Max_Rel_Vel_Saber() {
    return *(float*)((uintptr_t)this + 0x510);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Min_Rel_Vel_Saber() {
    return *(float*)((uintptr_t)this + 0x514);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_PreviousTipLocation() {
    return (void*)((uintptr_t)this + 0x518);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_PreviousRootLocation() {
    return (void*)((uintptr_t)this + 0x524);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_ThrowBaseDamage() {
    return *(float*)((uintptr_t)this + 0x534);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_HiltVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53c + 0);
    *(uint8_t*)((uintptr_t)this + 0x53c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLightPointIntensity() {
    return *(float*)((uintptr_t)this + 0x548);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_FlashLightSpotIntensity() {
    return *(float*)((uintptr_t)this + 0x54c);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_sfxOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x550 + 0)) & 1 != 0;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_sfxOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x550 + 0);
    *(uint8_t*)((uintptr_t)this + 0x550 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_2ndBlade() {
    return (*(uint8_t*)((uintptr_t)this + 0x551 + 0)) & 1 != 0;
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_On_Twin() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x568);
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::set_2ndBlade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x551 + 0);
    *(uint8_t*)((uintptr_t)this + 0x551 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_Lightsaber_Type() {
    return (void*)((uintptr_t)this + 0x552);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_On_Staff() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x560);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_Off_Single() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x570);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_Off_Staff() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x578);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_Off_Twin() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x580);
}
_Script_AkAudio::AkAudioEvent*& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SFX_Lightsaber_On_Skip_Ignition() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x588);
}
float& _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_LastLength() {
    return *(float*)((uintptr_t)this + 0x590);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_BladeBaseTransform() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::get_SaberColor() {
    return (void*)((uintptr_t)this + 0x5d0);
}
_Script_CoreUObject::Class* _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Items/Lightsaber/BP_Lightsaber.BP_Lightsaber_C");
    return result;
}
bool _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::CanBeForcePulledByCharacter(_Script_RsGameTechRT::RsCharacter* PullingCharacter) {
    return;
}
_Script_SwGame::SwLightsaberBladeState _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::GetBladeState() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::TelekinesisLift(bool& Success, int32_t& WeightClass) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::IsTelekinesisObject(bool& Result, int32_t& tkWeightClass) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ForceCrushGrab(bool& Success) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ChangeLightsaberColor(_Script_CoreUObject::LinearColor New_Blade_Color, _Script_CoreUObject::LinearColor New_Blade_Glow_Color) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::UpdateControlStack() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::Lightsaber_SFX(bool enable) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::UserConstructionScript0() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::FlashLightFade__FinishedFunc() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::FlashLightFade__UpdateFunc() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePullEnterHold() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePushEnd() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceSlowEnd() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::CatchLightsaber(_Script_RsGameTechRT::RsCharacter* CatchingCharacter) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OverchargeEffect(bool bStart, bool bActivate) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::TelekinesisPush(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::TelekinesisDrop(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::TelekinesisToss(_Script_CoreUObject::Vector Velocity) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ForceSlowdown(float defaultSlowdownLength) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ForceCrushRelease() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ForcePullJiggle(float delayWindow) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::DetachLightsaberFromActor() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ClearDroppedState() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnForcePullEnd() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::LightsaberReflectFX(_Script_SwGame::SwProjectileFX ProjectileFX) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::LightsaberThrow() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::SetLightsaberMarksState(bool bEnabled) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ExtendRetractBlade(bool bExtend, bool bInstant) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::UpdateBladeLength(float Delta_Time) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::BladeExtended_Event(void* Lightsaber) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::BladeRetracted_Event(void* Lightsaber) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::LightsaberSwipe(float Delta_Time) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::OnThrowReturned() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::UpdateBlade() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::LVL_SetHiltVisible(bool bNewVisibility) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::ExecuteUbergraph_BP_Lightsaber(int32_t EntryPoint) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::BladeRetracted__DelegateSignature(void* Lightsaber) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C::BladeExtended__DelegateSignature(void* Lightsaber) {
    return;
}
