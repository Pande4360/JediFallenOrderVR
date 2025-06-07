#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsBitfield_HeroInputFlags.hpp"
#include "RsBitfield_HeroLoadoutFlags.hpp"
#include "RsBitfield_HeroUpgradeFlags.hpp"
#include "RsCharacter.hpp"
#include "RsHero.hpp"
#include "RsHeroFlagSetDefinition.hpp"
#include "RsHeroStateDefinition.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsInputActionSetDefinition.hpp"
#include "RsPhysicalAnimationProfile.hpp"
_Script_RsGameTechRT::RsHeroStateDefinition*& _Script_RsGameTechRT::RsHero::get_HeroStates() {
    return *(_Script_RsGameTechRT::RsHeroStateDefinition**)((uintptr_t)this + 0x2938);
}
void* _Script_RsGameTechRT::RsHero::DebugGetHeroUpgradeFlagsText() {
    return;
}
void* _Script_RsGameTechRT::RsHero::get_OnInputAction() {
    return (void*)((uintptr_t)this + 0x28d8);
}
void* _Script_RsGameTechRT::RsHero::get_OnHeroLoadoutChanged() {
    return (void*)((uintptr_t)this + 0x28e8);
}
void _Script_RsGameTechRT::RsHero::UnregisterOnActionUnbuffered(void*& Delegate, void* ActionName) {
    return;
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsHero::get_PhysicalAnimationProfileHeroStops() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x2958);
}
void* _Script_RsGameTechRT::RsHero::get_OnHeroUpgradeChanged() {
    return (void*)((uintptr_t)this + 0x28f8);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsHero::get_PhysicalAnimationProfileHeroStarts() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x2950);
}
void _Script_RsGameTechRT::RsHero::ForceReleaseInput(void* ActionName) {
    return;
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsHero::get_PhysicalAnimationProfileHeroTurnings() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x2948);
}
_Script_RsGameTechRT::RsCharacter*& _Script_RsGameTechRT::RsHero::get_ParriedTarget() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x2e70);
}
_Script_RsGameTechRT::RsInputActionSetDefinition*& _Script_RsGameTechRT::RsHero::get_ActionsSet() {
    return *(_Script_RsGameTechRT::RsInputActionSetDefinition**)((uintptr_t)this + 0x2940);
}
void _Script_RsGameTechRT::RsHero::SetTemporarilyGiveAllLoadoutAndUpgrades(bool bShouldGiveAll) {
    return;
}
void* _Script_RsGameTechRT::RsHero::get_MotionTweakMap() {
    return (void*)((uintptr_t)this + 0x2960);
}
void* _Script_RsGameTechRT::RsHero::get_CollisionTweakMap() {
    return (void*)((uintptr_t)this + 0x29b0);
}
void* _Script_RsGameTechRT::RsHero::get_ModifierInstances() {
    return (void*)((uintptr_t)this + 0x2a58);
}
void* _Script_RsGameTechRT::RsHero::get_AppliedModifierInstances() {
    return (void*)((uintptr_t)this + 0x2a68);
}
void* _Script_RsGameTechRT::RsHero::get_TimedModifierTimerHandles() {
    return (void*)((uintptr_t)this + 0x2a78);
}
void* _Script_RsGameTechRT::RsHero::DebugGetHeroLoadoutFlagsText() {
    return;
}
_Script_RsGameTechRT::RsHeroFlagSetDefinition*& _Script_RsGameTechRT::RsHero::get_FlagSetDefinition() {
    return *(_Script_RsGameTechRT::RsHeroFlagSetDefinition**)((uintptr_t)this + 0x2ae0);
}
float& _Script_RsGameTechRT::RsHero::get_SlideSlopeInput() {
    return *(float*)((uintptr_t)this + 0x2e44);
}
bool _Script_RsGameTechRT::RsHero::RemoveHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime) {
    return;
}
void* _Script_RsGameTechRT::RsHero::get_SlideSlopeYawVec() {
    return (void*)((uintptr_t)this + 0x2e48);
}
void _Script_RsGameTechRT::RsHero::PhysicalAnimationBlendingCustomControllerFactorChanged(void* blendingCustomController, float previousBlendValue, float newBlendValue) {
    return;
}
float& _Script_RsGameTechRT::RsHero::get_SlideSlopeRelativeSpeed() {
    return *(float*)((uintptr_t)this + 0x2e54);
}
bool _Script_RsGameTechRT::RsHero::get_bDisallowPhysicalAnimationDuringGroundNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e58 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsHero::HasHeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags Flags) {
    return;
}
void _Script_RsGameTechRT::RsHero::set_bDisallowPhysicalAnimationDuringGroundNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsHero::get_bDisableTimeDilation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e59 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsHero::HasBufferedAction(bool bIncludeBufferedRelease) {
    return;
}
void _Script_RsGameTechRT::RsHero::set_bDisableTimeDilation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsHero::get_SoftTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2e60);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsHero::get_zTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2e68);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHero::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsHero");
    return result;
}
void _Script_RsGameTechRT::RsHero::UnregisterOnActionBuffered(void*& Delegate, void* ActionName) {
    return;
}
void _Script_RsGameTechRT::RsHero::SlideNavStop() {
    return;
}
bool _Script_RsGameTechRT::RsHero::HasHeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Flags) {
    return;
}
bool _Script_RsGameTechRT::RsHero::SlideNav() {
    return;
}
bool _Script_RsGameTechRT::RsHero::ShouldSlideNav() {
    return;
}
bool _Script_RsGameTechRT::RsHero::LastActionReleasedWithinTime(void* ActionName, float Duration) {
    return;
}
void _Script_RsGameTechRT::RsHero::SetParriedTarget(_Script_RsGameTechRT::RsCharacter* Target, float ValidDuration) {
    return;
}
void _Script_RsGameTechRT::RsHero::ResetInputFlags() {
    return;
}
void _Script_RsGameTechRT::RsHero::OnActionReleased(void* ActionName) {
    return;
}
void _Script_RsGameTechRT::RsHero::ResetBufferedAction() {
    return;
}
bool _Script_RsGameTechRT::RsHero::HasHeroUpgradeFlag(void* Flag) {
    return;
}
void _Script_RsGameTechRT::RsHero::ResetAllState() {
    return;
}
void _Script_RsGameTechRT::RsHero::RemoveHeroUpgradeFlag(void* Flags) {
    return;
}
void _Script_RsGameTechRT::RsHero::RemoveHeroLoadoutFlag(void* Flags) {
    return;
}
void _Script_RsGameTechRT::RsHero::DebugSetHeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Flags) {
    return;
}
void _Script_RsGameTechRT::RsHero::RegisterOnActionUnbuffered(void*& Delegate, void* ActionName) {
    return;
}
void _Script_RsGameTechRT::RsHero::RegisterOnActionBuffered(void*& Delegate, void* ActionName) {
    return;
}
bool _Script_RsGameTechRT::RsHero::IsActionBuffered(void* ActionName, bool bIncludeBufferedRelease) {
    return;
}
void _Script_RsGameTechRT::RsHero::PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options) {
    return;
}
void _Script_RsGameTechRT::RsHero::OnActionPressed(void* ActionName) {
    return;
}
bool _Script_RsGameTechRT::RsHero::IsInputPressed(void* ActionName) {
    return;
}
bool _Script_RsGameTechRT::RsHero::IsExecutingBufferedAction() {
    return;
}
bool _Script_RsGameTechRT::RsHero::HasHeroLoadoutFlag(void* Flag) {
    return;
}
bool _Script_RsGameTechRT::RsHero::HasHeroInputFlags(_Script_RsGameTechRT::RsBitfield_HeroInputFlags Flags) {
    return;
}
bool _Script_RsGameTechRT::RsHero::HasHeroInputFlag(void* Flag) {
    return;
}
void* _Script_RsGameTechRT::RsHero::GetMotionTweaksNameFromEnum(void* motionEnum) {
    return;
}
float _Script_RsGameTechRT::RsHero::GetLastActionReleasedTime(void* ActionName) {
    return;
}
void _Script_RsGameTechRT::RsHero::ForceExecuteBuffer(void* ActionName) {
    return;
}
void _Script_RsGameTechRT::RsHero::ForceBufferAction(void* ActionName) {
    return;
}
void _Script_RsGameTechRT::RsHero::DetermineSoftLockTarget(float MaxDistance, float MaxAngle) {
    return;
}
void _Script_RsGameTechRT::RsHero::DebugSetHeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags Flags) {
    return;
}
bool _Script_RsGameTechRT::RsHero::DebugGetHeroStateModifiers(void*& HeroModifiers) {
    return;
}
void _Script_RsGameTechRT::RsHero::DeactivateCombatSuction() {
    return;
}
void _Script_RsGameTechRT::RsHero::AddHeroUpgradeFlag(void* Flag) {
    return;
}
bool _Script_RsGameTechRT::RsHero::AddHeroStateModifierForDuration(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, void*& OnRemovedCallback, float Duration, float BlendInTime, float BlendOutTime) {
    return;
}
bool _Script_RsGameTechRT::RsHero::AddHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, void*& OnRemovedCallback, float BlendTime) {
    return;
}
void _Script_RsGameTechRT::RsHero::AddHeroLoadoutFlag(void* Flag) {
    return;
}
void _Script_RsGameTechRT::RsHero::AddAllHeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags Flags, bool bSaveImmediately) {
    return;
}
void _Script_RsGameTechRT::RsHero::AddAllHeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Flags, bool bSaveImmediately) {
    return;
}
bool _Script_RsGameTechRT::RsHero::ActivateCombatSuction(_Script_Engine::Actor* SuctionTarget, float TimeToTarget, float Offset, float MaxRange) {
    return;
}
