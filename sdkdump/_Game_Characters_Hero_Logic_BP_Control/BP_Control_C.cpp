#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid\BP_BuddyDroid_C.hpp"
#include "BP_Control_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerController\BP_SwPlayerController_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions\HC_Base_Reactions_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Defense\HC_Defense_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Evade\HC_Evade_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Health\HC_Health_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Revenge\HC_Revenge_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe\HC_Sheathe_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Sword\HC_Sword_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting\HC_zTargeting_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers\HC_ForcePowers_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage\HC_ForceUsage_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_CameraPOI\HC_CameraPOI_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Flashlight\HC_Flashlight_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Progression\HC_Progression_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_WorldMap\HC_WorldMap_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam\HC_BalanceBeam_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Climb\HC_Climb_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Jump\HC_Jump_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab\HC_LedgeGrab_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation\HC_Navigation_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology\HC_ProcessTopology_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes\HC_Ropes_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Slide\HC_Slide_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint\HC_Sprint_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina\HC_Stamina_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Swim\HC_Swim_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun\HC_WallRun_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline\HC_Zipline_C.hpp"
#include "..\_Game_GlobalData_Structs_Struct_CameraPOIVar\Struct_CameraPOIVar.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\ForceFeedbackEffect.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_MediaAssets\MediaSoundComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "..\_Script_SwGame\CombatAttackTableRow.hpp"
#include "..\_Script_SwGame\RsAbilityUserComponent.hpp"
#include "..\_Script_SwGame\SwAIBuddyDroid.hpp"
#include "..\_Script_SwGame\SwHero.hpp"
#include "..\_Script_SwGame\SwProjectile.hpp"
_Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Revenge() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C**)((uintptr_t)this + 0x2ee0);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x2ed0);
}
_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_StoredInteractDroid() {
    return *(_Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C**)((uintptr_t)this + 0x3030);
}
_Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_WorldMap() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C**)((uintptr_t)this + 0x2ed8);
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_blockHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x3061 + 0)) & 1 != 0;
}
_Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_R4PlayerController() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C**)((uintptr_t)this + 0x2fc0);
}
_Script_MediaAssets::MediaSoundComponent*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_StoryboardMediaSound() {
    return *(_Script_MediaAssets::MediaSoundComponent**)((uintptr_t)this + 0x2ee8);
}
_Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Flashlight() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Flashlight::HC_Flashlight_C**)((uintptr_t)this + 0x2f60);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetBuddyButtonEnabled(bool NewEnabled) {
    return;
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Stamina() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C**)((uintptr_t)this + 0x2f08);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Sprint() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Sprint::HC_Sprint_C**)((uintptr_t)this + 0x2f58);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::AddAchievementProgress(void* Achievement, int32_t Amount) {
    return;
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Swim() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Swim::HC_Swim_C**)((uintptr_t)this + 0x2f38);
}
_Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Progression() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Progression::HC_Progression_C**)((uintptr_t)this + 0x2ef8);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_CheckHideHUD(bool& Result) {
    return;
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Sheathe() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Sheathe::HC_Sheathe_C**)((uintptr_t)this + 0x2f78);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePushEnd() {
    return;
}
_Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_CameraPOI() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_CameraPOI::HC_CameraPOI_C**)((uintptr_t)this + 0x2ef0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::CancelToNav() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetPonchoHoodMaterial(_Script_Engine::MaterialInstance* HoodMaterial) {
    return;
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Zipline() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Zipline::HC_Zipline_C**)((uintptr_t)this + 0x2f00);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation::HC_Navigation_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Navigation() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Navigation::HC_Navigation_C**)((uintptr_t)this + 0x2f10);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetPonchoMaterial(_Script_Engine::MaterialInstance* PonchoMaterial) {
    return;
}
_Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_ForcePowers() {
    return *(_Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForcePowers::HC_ForcePowers_C**)((uintptr_t)this + 0x2f18);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53(float AxisValue) {
    return;
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Climb() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Climb::HC_Climb_C**)((uintptr_t)this + 0x2f20);
}
_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_BuddyDroid() {
    return *(_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C**)((uintptr_t)this + 0x3040);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_MotionTweakEnumsToTweaks() {
    return (void*)((uintptr_t)this + 0x2fc8);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Defense() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C**)((uintptr_t)this + 0x2fa8);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Ropes() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C**)((uintptr_t)this + 0x2f48);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::IsMotionParmActive(void* MotionTweaks, bool& Active) {
    return;
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_WallRun() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_WallRun::HC_WallRun_C**)((uintptr_t)this + 0x2f28);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Base_Reactions() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C**)((uintptr_t)this + 0x2f30);
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_SwPlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x3048);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ShowScarGlow(float EmissiveStrength) {
    return;
}
_Script_SwGame::RsAbilityUserComponent*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_RsAbilityUser() {
    return *(_Script_SwGame::RsAbilityUserComponent**)((uintptr_t)this + 0x2f40);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_BalanceBeam() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_BalanceBeam::HC_BalanceBeam_C**)((uintptr_t)this + 0x2f50);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ProjectileReflection(_Script_SwGame::SwProjectile* BaseProjectile, bool& HeroDefended, bool& Reflected) {
    return;
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_CurrentBDHintTrigger() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30d8);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Evade() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Evade::HC_Evade_C**)((uintptr_t)this + 0x2fb0);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Slide() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Slide::HC_Slide_C**)((uintptr_t)this + 0x2f68);
}
_Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_ForceUsage() {
    return *(_Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage::HC_ForceUsage_C**)((uintptr_t)this + 0x2f70);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Droid_Died(_Script_Engine::Actor* DestroyedActor) {
    return;
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Health() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C**)((uintptr_t)this + 0x2f80);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_DisableLedgeAndClimbStamina(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3063 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3063 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_ProcessTopology() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_ProcessTopology::HC_ProcessTopology_C**)((uintptr_t)this + 0x2f90);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Sword() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C**)((uintptr_t)this + 0x2f88);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_LedgeGrab() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_LedgeGrab::HC_LedgeGrab_C**)((uintptr_t)this + 0x2f98);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_Jump() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Jump::HC_Jump_C**)((uintptr_t)this + 0x2fa0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_blockHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3061 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3061 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_HC_zTargeting() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_zTargeting::HC_zTargeting_C**)((uintptr_t)this + 0x2fb8);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_StoredInteractsRegular() {
    return (void*)((uintptr_t)this + 0x3018);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ReceivePossessed(_Script_Engine::Controller* NewController) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::UserConstructionScript() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_LVL_BuddyDroidSpawned() {
    return (void*)((uintptr_t)this + 0x30c8);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_Debug_Motion_Tweaks() {
    return (void*)((uintptr_t)this + 0x3028);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_CurrentInteractAnimated() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3038);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_LVL_HeroSpawned() {
    return (void*)((uintptr_t)this + 0x3050);
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_InGodMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x3062 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_ForceTKHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x3060 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_EVT_ToggleMaxForce() {
    return (void*)((uintptr_t)this + 0x3098);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_ForceTKHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3060 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3060 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38(float AxisValue) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_InGodMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3062 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3062 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_DisableLedgeAndClimbStamina() {
    return (*(uint8_t*)((uintptr_t)this + 0x3063 + 0)) & 1 != 0;
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_ScriptedAnimActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3068);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_ConstrainedControlActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3070);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GripInput_Released() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_EVT_KillAI() {
    return (void*)((uintptr_t)this + 0x3078);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_EVT_ToggleMaxStamina() {
    return (void*)((uintptr_t)this + 0x3088);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ClearZTarget() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_EVT_ToggleAudioDebug() {
    return (void*)((uintptr_t)this + 0x30a8);
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_EVT_ToggleSlowMotion() {
    return (void*)((uintptr_t)this + 0x30b8);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_CurrentUnlockingDoor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x30e0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnDeflectedProjectile(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_BuddyButtonEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x30e8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::DespawnBuddyDroid() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_BuddyButtonEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetClimbingClawsVisible(bool IsVisible) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_ShouldSetBuddyAttachPoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x30e9 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetCalFaceDirty(bool IsDirty) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_ShouldSetBuddyAttachPoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::VerifyAndAddHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime, float Duration) {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::get_CurrentlyYoungCal() {
    return (*(uint8_t*)((uintptr_t)this + 0x30ea + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::set_CurrentlyYoungCal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x30ea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/BP_Control.BP_Control_C");
    return result;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnReflectedProjectile(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::HandleProjectileReflection(_Script_SwGame::SwProjectile* IncomingProjectile) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetCurrentCombatSequence(_Script_SwGame::CombatAttackTableRow& CombatSequence) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetCurrentCombatMontage(_Script_Engine::AnimMontage*& CombatMontage) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::getSwordTrace(_Script_Engine::Actor*& Target) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::AmIYoungCal(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Action_DeactivateForcePush() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetCurrentUnlockingDoor(_Script_Engine::Actor*& Door) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetAndRemoveCurrentUnlockingDoor(_Script_Engine::Actor*& CurrentDoor) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetBDHintTrigger(_Script_Engine::Actor*& Trigger) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetHeroRig(_Script_Engine::SkeletalMeshComponent*& HeroRig) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ExecuteUbergraph_BP_Control(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetPoncho(_Script_Engine::SkeletalMeshComponent*& Poncho) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetCurrentUnlockingDoor(_Script_Engine::Actor* Door) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::UseHealthPot(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetBestCurrentInteract(_Script_Engine::Actor*& BestInteract, void*& Type) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_CheckMaxStamina(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_CheckMaxForce(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_ToggleMaxForce(bool& NewMaxForce) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_ToggleMaxStamina(bool& NewMaxStamina) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Spawned_Droid_From_Anim(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_ToggleGodMode(bool& NewGodMode) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_CheckGodMode(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_CheckSlowMotion(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::DroidButtonPress(bool& Handled) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ScriptedAnimEnd() {
    return;
}
_Script_SwGame::SwAIBuddyDroid* _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GetBuddyDroidActor0() {
    return;
}
bool _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::RsShouldTakeDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ActionCheck_CanUseStoredInteract(void* ActionName, bool& CanUse) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InitFromPlayerState() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ScriptedAnimStart(_Script_Engine::Actor* ScriptingActor) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::popzTarget() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpActEvt_MeleeAttack_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpActEvt_Droid_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::CameraPOIInterface_StartPOIwithCameraMode(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables, void* CameraMode) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpActEvt_KillDroid_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::HUDvis(bool On) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::RumbleFeedback(_Script_Engine::ForceFeedbackEffect* Force_Feedback) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ResetDoubleJump() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::PurchaseSkillUpgrade(int32_t ForcePoints, void* UpgradeFlag) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::RefillHealthPots() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetPonchoVisibility(bool IsVisible, bool hoodIsUp) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::CaptureHero() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::popInteractEnemy() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InitializeUpgrades() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::HealSuccess() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetDemoMode() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::UpgradeLightsaberDamage() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::popStack(void* Name) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::QuickRecoverTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::EVT_ToggleAudioDebug__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetPonchoStyle(_Script_Engine::SkeletalMesh* PonchoStyle) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetAchievementProgress(void* Achievement, int32_t Amount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::HideScarGlow() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::EVT_ToggleMaxStamina__DelegateSignature(bool RegularStaminaMeter) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetEyeTransparency(bool Transparent) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::AddedDatabankEntry(_Script_GameplayTags::GameplayTagContainer AddedTag) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::NewGamePlus_SwapToInquisitorCal() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::LVL_HeroSpawned__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::NewGamePlus_SwapToNormalCal() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePullEnd() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePullEnterHold() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::BuddySpawn(bool spawnDetached) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::PauseMenuCleanup() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceSlowEnd() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::CameraPOIInterface_EndPOI() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::EVT_ToggleSlowMotion__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ButtonPress() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_KillAI() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_ToggleSlowMotion() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::PlayHealingMontageOutro() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_ToggleHideHUD() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ConstrainedControlEnd() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::cheat_ToggleAudioDebug() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::EnvDeath() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::KilledBountyHunter(_Script_Engine::Actor* KilledCharacter) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::AutoActivateZTargeting0(_Script_Engine::Actor* AutoTarget) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Music_Set_World_State(void* WorldStateMusic) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Heal(void* Amount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ReleaseForcePull() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Action_StoredInteract() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::BuddyAcquire() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::RefillForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::GripInput_Pressed() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::PauseMenuInitialization() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Action_DroidConfirm() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::AddTutorialTags() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetCurrentCombatMontage(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Action_ConstrainedControl() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetCurrentCombatSequence(void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpAxisEvt_MoveLeftAnalogY_K2Node_InputAxisEvent_22(float AxisValue) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ExecuteCombatSequence(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::clearSwordTrace() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::BuddyAllowDetach(bool Allow) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ParryStart(_Script_Engine::Actor* AI) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetDebugMotionTweaks() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SpawnBuddyDroid() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Reset_Stack() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::AcquireBuddyDroid(_Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::pushStack(void* Name) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::RadialRumble(float Intensity, float Duration, _Script_CoreUObject::Vector Loc) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::PushMotionParm(void* MotionParm, float Blend) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::PopMotionParm(void* MotionParm, float Blend) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::BuddyLight(bool On) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::pushInteractEnemy() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::Droid_Spawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::setForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::TogglePauseMenu() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::CameraPOIInterface_StartPOI(_Game_GlobalData_Structs_Struct_CameraPOIVar::Struct_CameraPOIVar POIVariables) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpAxisEvt_MoveLeftAnalogX_K2Node_InputAxisEvent_15(float AxisValue) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::CameraPOIInterface_EndPOIwithoutCameraReset() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ScriptedAnimNotify(void* NotifyName) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::UpdateCurrentInteractZone(_Script_Engine::Actor* zone, void* Type) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::RemoveInteractZone(_Script_Engine::Actor* Interact) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::ConstrainedControlStart(_Script_Engine::Actor* ConstrainedControlActor) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InteractAnimationDone() {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::SetBDHintTrigger(_Script_Engine::Actor* HintTrigger) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::BuddySpawnAndSetAttachPoint(void* AttachPoint, bool LockAttachPoint) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::InpAxisEvt_MouseTurn_K2Node_InputAxisEvent_4(float AxisValue) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::LVL_BuddyDroidSpawned__DelegateSignature(_Script_SwGame::SwAIBuddyDroid* BuddyDroid) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::EVT_ToggleMaxForce__DelegateSignature(bool RegularForceMeter) {
    return;
}
void _Game_Characters_Hero_Logic_BP_Control::BP_Control_C::EVT_KillAI__DelegateSignature() {
    return;
}
