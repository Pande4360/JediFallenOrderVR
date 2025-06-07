#include "..\FUObjectArray.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info\Comp_Audio_Debug_Print_Cinematic_Info_C.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics\Comp_Audio_Debug_Print_IsSimulatingPhysics_C.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus\Comp_Audio_Debug_Print_MusicSystemStatus_C.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Debug_Print_ReverbPreset\Comp_Audio_Debug_Print_ReverbPreset_C.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager\Comp_Audio_Hero_Combat_State_Manager_C.hpp"
#include "..\_Game_Audio_Component_Comp_Audio_Hero_State_Underwater\Comp_Audio_Hero_State_Underwater_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Control\BP_Control_C.hpp"
#include "BP_Hero_C.hpp"
#include "..\_Game_Items_Lightsaber_BP_Lightsaber_Hero\BP_Lightsaber_Hero_C.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "..\_Script_Engine\ChildActorComponent.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\SphereComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_MovieScene\MovieSceneSequence.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsAISenseComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "..\_Script_RsGameTechRT\RsTargetableComponent.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapHologramBase.hpp"
#include "..\_Script_RsTechRT\RsActorMotion.hpp"
#include "..\_Script_SwGame\CombatAttackTableRow.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
#include "..\_Script_SwGame\RsFallingKillRelocator.hpp"
#include "..\_Script_SwGame\SwAIFightComponent.hpp"
#include "..\_Script_SwGame\SwBuddyOwnerComponent.hpp"
#include "..\_Script_SwGame\SwProjectile.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::HealSuccess0() {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_heatMeterCooldown() {
    return (*(uint8_t*)((uintptr_t)this + 0x3370 + 0)) & 1 != 0;
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_weaponCollision() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x31a8);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x30f0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_heatMeterCooldownTime() {
    return *(float*)((uintptr_t)this + 0x33a0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_BoostDuration() {
    return *(float*)((uintptr_t)this + 0x32a0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_OpenedMap(void* Event_Name, bool MissionToast) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_EVT_DemoMode() {
    return (void*)((uintptr_t)this + 0x3708);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_ClimbingClaws() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x30f8);
}
_Script_UMG::WidgetComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_staminaBarWidget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x3398);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Yaw_Delta() {
    return *(float*)((uintptr_t)this + 0x356c);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Poncho() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3128);
}
_Script_RsTechRT::RsActorMotion*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RsActorMotion() {
    return *(_Script_RsTechRT::RsActorMotion**)((uintptr_t)this + 0x34d8);
}
_Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Comp_Audio_Debug_Print_IsSimulatingPhysics() {
    return *(_Game_Audio_Component_Comp_Audio_Debug_Print_IsSimulatingPhysics::Comp_Audio_Debug_Print_IsSimulatingPhysics_C**)((uintptr_t)this + 0x3120);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_OnSwapYoungCalCompleted() {
    return (void*)((uintptr_t)this + 0x3720);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_takeReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0x34e4 + 0)) & 1 != 0;
}
_Script_Engine::ChildActorComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DynamicDeformer() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x3168);
}
_Game_Audio_Component_Comp_Audio_Debug_Print_ReverbPreset::Comp_Audio_Debug_Print_ReverbPreset_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Comp_Audio_Debug_Print_ReverbPreset() {
    return *(_Game_Audio_Component_Comp_Audio_Debug_Print_ReverbPreset::Comp_Audio_Debug_Print_ReverbPreset_C**)((uintptr_t)this + 0x3118);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_InvulnerabilityTimerHandle() {
    return (void*)((uintptr_t)this + 0x36d0);
}
_Game_Audio_Component_Comp_Audio_Hero_State_Underwater::Comp_Audio_Hero_State_Underwater_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Comp_Audio_Hero_State_Underwater() {
    return *(_Game_Audio_Component_Comp_Audio_Hero_State_Underwater::Comp_Audio_Hero_State_Underwater_C**)((uintptr_t)this + 0x3138);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_maxStamina() {
    return *(float*)((uintptr_t)this + 0x3378);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::TurnOffMap() {
    return;
}
_Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Comp_Audio_Debug_Print_Cinematic_Info() {
    return *(_Game_Audio_Component_Comp_Audio_Debug_Print_Cinematic_Info::Comp_Audio_Debug_Print_Cinematic_Info_C**)((uintptr_t)this + 0x3100);
}
_Script_Engine::SphereComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_footCollision_R() {
    return *(_Script_Engine::SphereComponent**)((uintptr_t)this + 0x3108);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_attackStamina() {
    return *(float*)((uintptr_t)this + 0x337c);
}
_Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Comp_Audio_Debug_Print_MusicSystemStatus() {
    return *(_Game_Audio_Component_Comp_Audio_Debug_Print_MusicSystemStatus::Comp_Audio_Debug_Print_MusicSystemStatus_C**)((uintptr_t)this + 0x3110);
}
_Script_Engine::SkeletalMeshComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_face() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x3130);
}
_Script_Engine::ChildActorComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Lightsaber_02() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x3140);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Influence_GroundJump() {
    return (void*)((uintptr_t)this + 0x31c0);
}
_Script_Engine::ChildActorComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Lightsaber_01() {
    return *(_Script_Engine::ChildActorComponent**)((uintptr_t)this + 0x3148);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_regenStaminaAmount() {
    return *(float*)((uintptr_t)this + 0x3388);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_AI(void* Event_Name, _Script_Engine::Actor* AI) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_YoungCalFace() {
    return (void*)((uintptr_t)this + 0x35b8);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_weaponCollision_Large_02() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x3150);
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_weaponCollision_02() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x3158);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_heatMeterCooldown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_Event_HasJumped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SwGame::SwAIFightComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_SwAIFight() {
    return *(_Script_SwGame::SwAIFightComponent**)((uintptr_t)this + 0x3160);
}
_Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Comp_Audio_Hero_Combat_State_Manager() {
    return *(_Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C**)((uintptr_t)this + 0x3170);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_DoubleJumping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x323d + 0);
    *(uint8_t*)((uintptr_t)this + 0x323d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_SwGame::SwBuddyOwnerComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RsBuddyOwner() {
    return *(_Script_SwGame::SwBuddyOwnerComponent**)((uintptr_t)this + 0x3178);
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x3180);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::GetPoncho0(_Script_Engine::SkeletalMeshComponent*& Poncho) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_doublejumpburst() {
    return *(float*)((uintptr_t)this + 0x3228);
}
_Script_SwGame::RsFallingKillRelocator*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RsFallingKillRelocator() {
    return *(_Script_SwGame::RsFallingKillRelocator**)((uintptr_t)this + 0x3188);
}
_Script_RsGameTechRT::RsTargetableComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RsTargetable() {
    return *(_Script_RsGameTechRT::RsTargetableComponent**)((uintptr_t)this + 0x3190);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::StartBlockEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, bool IsStaffAttack, void* OriginalDefenseType) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_KilledAnEnemy() {
    return (void*)((uintptr_t)this + 0x3740);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DoubleJumping() {
    return (*(uint8_t*)((uintptr_t)this + 0x323d + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsAISenseComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RsAISense() {
    return *(_Script_RsGameTechRT::RsAISenseComponent**)((uintptr_t)this + 0x3198);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetCalFaceDirty0(bool IsDirty) {
    return;
}
_Script_Engine::CapsuleComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_weaponCollision_Large() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x31a0);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Influence_Bounce() {
    return (void*)((uintptr_t)this + 0x32b0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RunSpeed() {
    return *(float*)((uintptr_t)this + 0x31b0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_M_Gear() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3540);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Event_HasJumped() {
    return (*(uint8_t*)((uintptr_t)this + 0x3220 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_jumpshift() {
    return (*(uint8_t*)((uintptr_t)this + 0x3221 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SwapToNormalCal() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_jumpshift(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3221 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3221 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_doublejumpacceleration() {
    return *(float*)((uintptr_t)this + 0x3224);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_jumpStartTime() {
    return *(float*)((uintptr_t)this + 0x322c);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Gravity() {
    return *(float*)((uintptr_t)this + 0x3230);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::InitializeUpgrades0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::GetLightsaberType(void*& CurrentType) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Influence_WallJump() {
    return (void*)((uintptr_t)this + 0x33b0);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_jumpCancelled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3234 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_jumpCancelled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3234 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3234 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_JumpApex() {
    return (*(uint8_t*)((uintptr_t)this + 0x3235 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_evadeStamina() {
    return *(float*)((uintptr_t)this + 0x3380);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_JumpApex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3235 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3235 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Initialize() {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_timeSinceGroundTolerance() {
    return *(float*)((uintptr_t)this + 0x3238);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_HasDoubleJumpAbility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x323c + 0);
    *(uint8_t*)((uintptr_t)this + 0x323c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_HasDoubleJumpAbility() {
    return (*(uint8_t*)((uintptr_t)this + 0x323c + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Influence_DoubleJump() {
    return (void*)((uintptr_t)this + 0x3240);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_bTailWindActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3768 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3768 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DoubleJumpComplete() {
    return (*(uint8_t*)((uintptr_t)this + 0x32a4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_DoubleJumpComplete(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x32a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x32a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Influence_SuperBounce() {
    return (void*)((uintptr_t)this + 0x3310);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_currentStamina() {
    return *(float*)((uintptr_t)this + 0x3374);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_PonchoHoodUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36dd + 0);
    *(uint8_t*)((uintptr_t)this + 0x36dd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_regenStaminaRate() {
    return *(float*)((uintptr_t)this + 0x3384);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_regenStaminaActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x338c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_regenStaminaActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x338c + 0);
    *(uint8_t*)((uintptr_t)this + 0x338c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_regenStaminaTimeDelay() {
    return *(float*)((uintptr_t)this + 0x3390);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_heatMeterCooldownStartTime() {
    return *(float*)((uintptr_t)this + 0x33a4);
}
float _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::getFallDamage() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Influence_SuperJump() {
    return (void*)((uintptr_t)this + 0x3410);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnBlockBreakOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::GetHeroRig0(_Script_Engine::SkeletalMeshComponent*& HeroRig) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_InfluenceHitAir() {
    return (void*)((uintptr_t)this + 0x3470);
}
_Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LightsaberChild_01() {
    return *(_Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C**)((uintptr_t)this + 0x34d0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::VelocityDeathTrace(_Script_Engine::Actor*& OutHit_HitActor) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DelayRespawnTime() {
    return *(float*)((uintptr_t)this + 0x34e0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_takeReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LeftWallDistance() {
    return *(float*)((uintptr_t)this + 0x34e8);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ShowScarGlow0(float EmissiveStrength) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::UseHealthPot0(bool& Result) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_FrontWallDistance() {
    return *(float*)((uintptr_t)this + 0x34ec);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ReceivePossessed0(_Script_Engine::Controller* NewController) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DistanceFromWall() {
    return *(float*)((uintptr_t)this + 0x34f0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LeftWallDistance45() {
    return *(float*)((uintptr_t)this + 0x34f4);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_EVT_HUDvis() {
    return (void*)((uintptr_t)this + 0x36f0);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_MapDebounceTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x34f8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_MapDebounceTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x34f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x34f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_windStrength() {
    return (void*)((uintptr_t)this + 0x34fc);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SwapToYoungCal(_Script_RsGameTechRT::RsHeroStateModifierDefinition* StateModifier) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SwimEnter(void* NewState, void* PrevState) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_windSpeed() {
    return *(float*)((uintptr_t)this + 0x3508);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_M_Jacket_Upper() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3510);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Combat_Status(void* Event_Name, bool IsInCombat) {
    return;
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_M_Jacket_Lower() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3518);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_M_Pants() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3520);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_M_Vest() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3528);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::GetCurrentCombatSequence0(_Script_SwGame::CombatAttackTableRow& CombatSequence) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Wind_Strength_Param() {
    return (void*)((uintptr_t)this + 0x3530);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::CancelCurrentSync() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_wind_Speed_Param() {
    return (void*)((uintptr_t)this + 0x3538);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Music_CheckTurnOnAutoStartCombatMusic() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_PrevLocation() {
    return (void*)((uintptr_t)this + 0x3548);
}
_Script_AkAudio::AkComponent*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Anim_Ak_Component_() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x3558);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetInvulnerableForDuration(float Duration) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetCameraFocusToEnemy(_Script_Engine::Actor* Enemy) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Previous_Rotation() {
    return (void*)((uintptr_t)this + 0x3560);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Bat_JumpToSwayze__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnGameStateChangedEvent(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_ShowMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x3570 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_ShowMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3570 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3570 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ClearInvulnerability() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::getSwordTrace0(_Script_Engine::Actor*& Target) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_HasFallingSoundTriggered() {
    return (*(uint8_t*)((uintptr_t)this + 0x3571 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_HasFallingSoundTriggered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3571 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3571 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Young_Cal_rig() {
    return (void*)((uintptr_t)this + 0x3578);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnLoaded_784B4E614ECA9FC0E8168B9E8C46EF35(_Script_CoreUObject::Object* Loaded) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_HeroEnvDeath() {
    return (void*)((uintptr_t)this + 0x35a0);
}
_Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LightsaberChild_02() {
    return *(_Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C**)((uintptr_t)this + 0x35b0);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_YoungCalSaber() {
    return (void*)((uintptr_t)this + 0x35e0);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_timeFalling() {
    return *(float*)((uintptr_t)this + 0x3608);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Section_End(void* EventName) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::K2_BlockedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_HealSuccess_0() {
    return (void*)((uintptr_t)this + 0x3610);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ParryStart0(_Script_Engine::Actor* AI) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Section(void* EventName, void* Section) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Bat_GrabbedByBat() {
    return (void*)((uintptr_t)this + 0x3620);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Bat_HitBat() {
    return (void*)((uintptr_t)this + 0x3630);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetCurrentCombatMontage0(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ManageLightsaberType(void* NewType) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Bat_LatchBatFromClaw() {
    return (void*)((uintptr_t)this + 0x3640);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_RandomNarrativeEnemy() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3650);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnForcePushOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
_Script_CoreUObject::Object*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Global_PP() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x3658);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ResizeHealthMeter() {
    return;
}
_Script_RsGameTechRT::RsWorldMapHologramBase*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_WorldMapHologram() {
    return *(_Script_RsGameTechRT::RsWorldMapHologramBase**)((uintptr_t)this + 0x3660);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Bat_FreeFall_GrabBat() {
    return (void*)((uintptr_t)this + 0x3668);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Force_AI(void* EventName, _Script_Engine::Actor* Target, bool HasSucceeded) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Bat_JumpToSwayze() {
    return (void*)((uintptr_t)this + 0x3678);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LSSwitchHandle() {
    return (void*)((uintptr_t)this + 0x3688);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_HighlightedLSType() {
    return (void*)((uintptr_t)this + 0x3690);
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LSSwitchTimer() {
    return *(float*)((uintptr_t)this + 0x3694);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_MapOn() {
    return (void*)((uintptr_t)this + 0x3698);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_MapOff() {
    return (void*)((uintptr_t)this + 0x36a8);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_HeroEnvDeathFadeIn() {
    return (void*)((uintptr_t)this + 0x36b8);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::InpActEvt_ForcePull_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_HealthDifficultyModifier() {
    return *(float*)((uintptr_t)this + 0x36c8);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnAttackBlockedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DamageDifficultyModifier() {
    return *(float*)((uintptr_t)this + 0x36cc);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::UserConstructionScript0() {
    return;
}
int32_t& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_CurrentLightsaberColorIndex() {
    return *(int32_t*)((uintptr_t)this + 0x36d8);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_MapOn__DelegateSignature() {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_PonchoIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x36dc + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_ZTarget_AI(void* EventName, float ZTargetTime, _Script_Engine::Actor* AI) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_PonchoIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x36dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x36dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_PonchoHoodUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x36dd + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_PonchoCachedVisibilityAnimTickOption() {
    return (void*)((uintptr_t)this + 0x36de);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_Bat_CSVec() {
    return (void*)((uintptr_t)this + 0x36e0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnLoaded_249DC13F47DD2D85F394ECB2E4EBADCB(_Script_CoreUObject::Object* Loaded) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_droidBackpack() {
    return (*(uint8_t*)((uintptr_t)this + 0x3700 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LightsaberSwitch_Right() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_droidBackpack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3700 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_YoungCalHeroState() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x3718);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_ZTarget(void* EventName, float ZTargetTime, int32_t NumTargets) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ReceiveInstigatedZeroDamage(_Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor, _Script_Engine::Actor* WouldBeDamageCauser) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_OnSwapAdultCalCompleted() {
    return (void*)((uintptr_t)this + 0x3730);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::StartEvadeEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_VelocityThresholdForDeath() {
    return *(float*)((uintptr_t)this + 0x3750);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::PurchaseSkillUpgrade0(int32_t ForcePoints, void* UpgradeFlag) {
    return;
}
float& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_VelocityDeathTime() {
    return *(float*)((uintptr_t)this + 0x3754);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::GetCurrentCombatMontage0(_Script_Engine::AnimMontage*& CombatMontage) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DisableVelocityDeath() {
    return (*(uint8_t*)((uintptr_t)this + 0x3758 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_DisableVelocityDeath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3758 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3758 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Ability_Activated(void* AbilityType, _Script_Engine::Actor* Target, bool bHasSucceeded) {
    return;
}
_Script_Engine::MaterialInstanceDynamic*& _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_MI_Face() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x3760);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_bTailWindActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x3768 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_DirtFaceMat() {
    return (void*)((uintptr_t)this + 0x3770);
}
void* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_LVL_OnSwapInquisitorCalCompleted() {
    return (void*)((uintptr_t)this + 0x3798);
}
bool _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::get_InitialClothClampSettleTime() {
    return (*(uint8_t*)((uintptr_t)this + 0x37a8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::KilledBountyHunter0(_Script_Engine::Actor* KilledCharacter) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry(void* Event_Name) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::set_InitialClothClampSettleTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x37a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/BP_Hero.BP_Hero_C");
    return result;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::GetLightsaber(_Script_Engine::Actor*& Lightsaber, _Script_Engine::Actor*& Lightsaber02) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetPonchoMaterial0(_Script_Engine::MaterialInstance* PonchoMaterial) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ConfirmMaterialSwapSuccess(_Script_Engine::SkeletalMesh* LoadedMesh, _Script_Engine::PrimitiveComponent* TargetComponent, bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::AudioTrace(_Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float& HitTime) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ResetHero() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SkinSwapReapplyMaterials(_Script_Engine::SkeletalMesh* LoadedMesh, _Script_Engine::PrimitiveComponent* TargetComponent) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::UpdateMaxHealth() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Bat_Boss(void* EventName, void* BossAction, int32_t FightNumber) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_DifficultyChanged(void* EventName) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Player_Died(void* Event_Name, _Script_Engine::Actor* AI, bool EnvDeath) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Revive(void* EventName, bool Acquired) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Mission(void* EventName, void* MissionKey, bool HasCompleted) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Collectible(void* Event_Name, void* String_ID) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Unblockable(void* Event_Name, _Script_Engine::Actor* AI, bool Blocking) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ToggleWorldMap() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_Force(void* EventName, bool HasSucceeded) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetClimbingClawsVisible0(bool IsVisible) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Force_Activated(void* EventName, _Script_Engine::Actor* Target, bool HasSucceeded) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LogTelemetry_ZTarget(void* EventName, float ZTargetTime, int32_t TargetChanges) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Audio_Hero_Velocity(float Dt) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::RotateToTarget(_Script_Engine::Actor* target_enemy, float yawAmount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnLoaded_9C170BEA46BD06C3638A459CE4AB0BFD(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnLoaded_3E51E1B3417974A2D65905A979D97166(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Revive(void* EventName, bool Acquired) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::BeginFX() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SwimExit(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Bat_HitBat__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ClearZTarget0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::IncreaseHealthMeter() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::EnvDeath0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnBuddyOwnerEnteredNavMesh() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnBuddyOwnerLeftNavMesh() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnReturnToNeutral() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnReflectedProjectile0(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnDeflectedProjectile0(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ReceiveInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::BndEvt__RsFallingKillRelocator_K2Node_ComponentBoundEvent_0_RsOnPlayerTeleportedSignature__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::BndEvt__RsFallingKillRelocator_K2Node_ComponentBoundEvent_1_RsOnPlayerTeleportedSignature__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnForcePullOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::DecreaseHealthMeter() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LightsaberSwitch(void* NewType) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ResetDoubleJump0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ExecuteCombatSequence0(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LightsaberSwitch_Left() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnDifficultyChanged() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetPonchoVisibility0(bool IsVisible, bool hoodIsUp) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::CaptureHero0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::UpdateDifficultySettings() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetPonchoHoodMaterial0(_Script_Engine::MaterialInstance* HoodMaterial) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnKilledCharacter(_Script_RsGameTechRT::RsCharacter* Victim) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnMasterSequenceStart_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Mission(void* EventName, void* MissionKey, bool HasCompleted) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnMasterSequenceEnd_BP(_Script_MovieScene::MovieSceneSequence* MasterSequence, void* Reason) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnHeroResetPhysics() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Bat_LatchBatFromClaw__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::AddAchievementProgress0(void* Achievement, int32_t Amount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::QuickRecoverTutorial0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_HeroEnvDeath__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::CheckVelocityDeath() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::HealSuccess_0__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetPonchoStyle0(_Script_Engine::SkeletalMesh* PonchoStyle) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetAchievementProgress0(void* Achievement, int32_t Amount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::HideScarGlow0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::BndEvt__MotionModel_K2Node_ComponentBoundEvent_2_RsMotionParmChangedEvent__DelegateSignature(_Script_RsTechRT::RsActorMotion* MotionComponent, void* MotionParm) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Stop_TailWind_Rumbles() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::AddedDatabankEntry0(_Script_GameplayTags::GameplayTagContainer AddedTag) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::BndEvt__RsFallingKillRelocator_K2Node_ComponentBoundEvent_3_RsOnFindingRespawnPointFailureSignature__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Bat_FreeFall_GrabBat__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetDemoMode0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::DEV_AwardForcePoint_50() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::DEV_AwardForcePoint() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::HUDvis0(bool On) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetLightsaberAttacksEnabled(bool NewEnabled, bool HideLightsaberWhileDisabled) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetLightsaberType(void* NewType) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SaberSheathe(bool Unsheathe, bool ignoreFlashlight, bool saveFlashlight) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SaberOn(bool Off, bool Instant, void* SaberToExtend) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SaberAttach(bool hip) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::FanLightsaber(bool On) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Bat_GrabbedByBat__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::VerifyAndAddHeroStateModifier0(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime, float Duration) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::UpgradeLightsaberDamage0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::K2_ParriedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::OnAttackCounteredByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::RefillHealthPots0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::K2_CounteredEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::RefillForceMeter0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetCurrentCombatSequence0(void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::clearSwordTrace0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::NewGamePlus_AdultCalSwapAdditionalHousekeeping() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::NewGamePlus_SwapToNormalCal0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::NewGamePlus_SwapToInquisitorCal0() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SetEyeTransparency0(bool Transparent) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::SwapToInquisitorCal() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Bat_Boss(void* EventName, void* BossAction, int32_t FightNumber) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Initialize() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_Collectible(void* EventName, void* String_ID) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::UXRSurvery_Accepted(_Script_RsGameTechRT::RsUiButton* Button) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_ZTarget_AI(void* EventName, float ZTargetTime, _Script_Engine::Actor* AI) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry_AI(void* EventName, _Script_Engine::Actor* AI) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::Telemetry(void* EventName) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::ExecuteUbergraph_BP_Hero(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_OnSwapInquisitorCalCompleted__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::KilledAnEnemy__DelegateSignature(_Script_RsGameTechRT::RsCharacter* CharacterKilled) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_OnSwapAdultCalCompleted__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_OnSwapYoungCalCompleted__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::EVT_DemoMode__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::EVT_HUDvis__DelegateSignature(bool Visible) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_HeroEnvDeathFadeIn__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C::LVL_MapOff__DelegateSignature() {
    return;
}
