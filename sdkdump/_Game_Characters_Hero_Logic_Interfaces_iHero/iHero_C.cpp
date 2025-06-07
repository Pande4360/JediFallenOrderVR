#include "..\FUObjectArray.hpp"
#include "iHero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\MaterialInstance.hpp"
#include "..\_Script_Engine\SkeletalMesh.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetEyeTransparency(bool Transparent) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::RefillHealthPots() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Interfaces/iHero.iHero_C");
    return result;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::AmIYoungCal(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::PushMotionParm(void* MotionParm, float Blend) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::NewGamePlus_SwapToNormalCal() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_CheckMaxForce(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::NewGamePlus_SwapToInquisitorCal() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetCalFaceDirty(bool IsDirty) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::CaptureHero() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::AddedDatabankEntry(_Script_GameplayTags::GameplayTagContainer AddedTag) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::GetCurrentUnlockingDoor(_Script_Engine::Actor*& Door) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::HideScarGlow() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::PopMotionParm(void* MotionParm, float Blend) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_ToggleMaxForce(bool& NewMaxForce) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::ShowScarGlow(float EmissiveStrength) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetClimbingClawsVisible(bool IsVisible) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_ToggleAudioDebug() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetBuddyButtonEnabled(bool NewEnabled) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::GetAndRemoveCurrentUnlockingDoor(_Script_Engine::Actor*& CurrentDoor) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetCurrentUnlockingDoor(_Script_Engine::Actor* Door) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetAchievementProgress(void* Achievement, int32_t Amount) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::GetBDHintTrigger(_Script_Engine::Actor*& Trigger) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetBDHintTrigger(_Script_Engine::Actor* HintTrigger) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::GetHeroRig(_Script_Engine::SkeletalMeshComponent*& HeroRig) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_CheckGodMode(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::VerifyAndAddHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime, float Duration) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetPonchoStyle(_Script_Engine::SkeletalMesh* PonchoStyle) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_ToggleGodMode(bool& NewGodMode) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::QuickRecoverTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::Heal(void* Amount) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::AddAchievementProgress(void* Achievement, int32_t Amount) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::UpdateCurrentInteractZone(_Script_Engine::Actor* zone, void* Type) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::UpgradeLightsaberDamage() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::PauseMenuInitialization() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::PauseMenuCleanup() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::GetPoncho(_Script_Engine::SkeletalMeshComponent*& Poncho) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetDemoMode() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::HealSuccess() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::UseHealthPot(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetPonchoHoodMaterial(_Script_Engine::MaterialInstance* HoodMaterial) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_CheckSlowMotion(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetPonchoMaterial(_Script_Engine::MaterialInstance* PonchoMaterial) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::InitializeUpgrades() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_KillAI() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::ConstrainedControlEnd() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::ConstrainedControlStart(_Script_Engine::Actor* ConstrainedControlActor) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::HUDvis(bool On) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::SetPonchoVisibility(bool IsVisible, bool hoodIsUp) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::RemoveInteractZone(_Script_Engine::Actor* Interact) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::EnvDeath() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::GetBestCurrentInteract(_Script_Engine::Actor*& BestInteract, void*& Type) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::IsMotionParmActive(void* MotionTweaks, bool& Active) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::PurchaseSkillUpgrade(int32_t ForcePoints, void* UpgradeFlag) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_CheckMaxStamina(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_ToggleMaxStamina(bool& NewMaxStamina) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::ResetDoubleJump() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::TogglePauseMenu() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_CheckHideHUD(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_ToggleHideHUD() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::cheat_ToggleSlowMotion() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::setForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::popInteractEnemy() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::pushInteractEnemy() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::popStack(void* Name) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero::iHero_C::pushStack(void* Name) {
    return;
}
