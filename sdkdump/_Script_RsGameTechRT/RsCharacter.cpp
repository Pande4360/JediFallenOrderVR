#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "RsCharacter.hpp"
#include "RsCharacterDamageModifiers.hpp"
#include "RsCharacterDeathDefinition.hpp"
#include "RsCharacterDefinition.hpp"
#include "RsCharacterReactionDefinition.hpp"
#include "RsCombatStateMachine.hpp"
#include "RsDamageParams.hpp"
#include "RsDefenseDefinition.hpp"
#include "RsHealthComponent.hpp"
#include "RsHitEvent.hpp"
#include "RsOffenseComponent.hpp"
#include "RsPhysicalAnimationComponent.hpp"
#include "RsReactionParameters.hpp"
#include "..\_Script_RsTechRT\RsBitStack.hpp"
#include "..\_Script_RsTechRT\rsActor.hpp"
void _Script_RsGameTechRT::RsCharacter::set_bIgnoresKillPlane(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsCharacter::SetLastDamageEffectType(void* DamageEffectType) {
    return;
}
_Script_RsTechRT::RsBitStack*& _Script_RsGameTechRT::RsCharacter::get_ControlStack() {
    return *(_Script_RsTechRT::RsBitStack**)((uintptr_t)this + 0x1870);
}
void _Script_RsGameTechRT::RsCharacter::OnAttackBlockedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::set_bPreventCombatSuction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnCharacterInterrupted() {
    return (void*)((uintptr_t)this + 0x1878);
}
void _Script_RsGameTechRT::RsCharacter::K2_TriggerReaction(_Script_Engine::Actor* Attacker, _Script_RsGameTechRT::RsReactionParameters& ReactionParameters, _Script_CoreUObject::Rotator& RotateToward, bool AlignToAttacker) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::get_OnTakeNoDamage() {
    return (void*)((uintptr_t)this + 0x1898);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnCharacterResetPhysics() {
    return (void*)((uintptr_t)this + 0x1888);
}
void _Script_RsGameTechRT::RsCharacter::set_bAllowCheapIk(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2352 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2352 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsCharacter::set_bCanDoGlancingBlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnReactionEvent() {
    return (void*)((uintptr_t)this + 0x18d8);
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsCharacter::GetLastDamageCauser() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::set_bAlwaysDeflectProjectiles(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnInstigatedZeroDamage() {
    return (void*)((uintptr_t)this + 0x2160);
}
void _Script_RsGameTechRT::RsCharacter::K2_ParriedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::UnregisterOnNavStateExited(void*& Delegate, void* State) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::get_OnHealthChanged() {
    return (void*)((uintptr_t)this + 0x18a8);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnHitCountThresholdReached() {
    return (void*)((uintptr_t)this + 0x18b8);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnHitCountReset() {
    return (void*)((uintptr_t)this + 0x18c8);
}
float& _Script_RsGameTechRT::RsCharacter::get_AttackDamageMultiplier() {
    return *(float*)((uintptr_t)this + 0x2354);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnPostReactionEvent() {
    return (void*)((uintptr_t)this + 0x18e8);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnCombatStateChangedEvent() {
    return (void*)((uintptr_t)this + 0x18f8);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnIsInWaterStateChanged() {
    return (void*)((uintptr_t)this + 0x1908);
}
void _Script_RsGameTechRT::RsCharacter::SetBlockMarkerOverrides(float Min, float Max) {
    return;
}
float& _Script_RsGameTechRT::RsCharacter::get_LookAtPitchSpeed() {
    return *(float*)((uintptr_t)this + 0x1924);
}
void* _Script_RsGameTechRT::RsCharacter::get_HeadBoneName() {
    return (void*)((uintptr_t)this + 0x1918);
}
float& _Script_RsGameTechRT::RsCharacter::get_LookAtYawSpeed() {
    return *(float*)((uintptr_t)this + 0x1920);
}
void _Script_RsGameTechRT::RsCharacter::set_bCanEvade(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_RsGameTechRT::RsCharacter::GetCurrentNavState() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::OnCombatContactEvent(_Script_RsGameTechRT::RsCharacter* Attacker) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::set_bEnableCharacterPhysicsOnCineEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_RsGameTechRT::RsPhysicalAnimationComponent*& _Script_RsGameTechRT::RsCharacter::get_RsPhysicalAnimationComponent() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationComponent**)((uintptr_t)this + 0x2348);
}
float& _Script_RsGameTechRT::RsCharacter::get_LookAtYawThreshold() {
    return *(float*)((uintptr_t)this + 0x1928);
}
void* _Script_RsGameTechRT::RsCharacter::get_OnInstigatedAnyDamage() {
    return (void*)((uintptr_t)this + 0x2150);
}
void _Script_RsGameTechRT::RsCharacter::set_bCanBlock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsCharacter::GetAttackingTarget() {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::get_OnAnyNavStateChange() {
    return (void*)((uintptr_t)this + 0x2170);
}
void _Script_RsGameTechRT::RsCharacter::ImpulsePush(_Script_Engine::Actor* DamageCauser, float Duration, float Distance) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::get_bInexpensiveCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 128 != 0;
}
void* _Script_RsGameTechRT::RsCharacter::get_OnRsHitCollided() {
    return (void*)((uintptr_t)this + 0x2190);
}
_Script_Engine::AnimMontage* _Script_RsGameTechRT::RsCharacter::PlayCharacterAnimation(_Script_Engine::AnimationAsset* Asset, float BlendInTime, float BlendOutTime, void* AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, _Script_CoreUObject::Vector2D BlendSpaceInput) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::get_OnRsDidProjectileDamage() {
    return (void*)((uintptr_t)this + 0x21a0);
}
void* _Script_RsGameTechRT::RsCharacter::get_InitialAttributeTags() {
    return (void*)((uintptr_t)this + 0x2458);
}
void* _Script_RsGameTechRT::RsCharacter::get_LastDamageInfo() {
    return (void*)((uintptr_t)this + 0x21d0);
}
int32_t& _Script_RsGameTechRT::RsCharacter::get_CharSyncID() {
    return *(int32_t*)((uintptr_t)this + 0x2330);
}
void _Script_RsGameTechRT::RsCharacter::OnBlockBreakOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::get_bAttackHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 4 != 0;
}
float& _Script_RsGameTechRT::RsCharacter::get_CinematicBlendInterp() {
    return *(float*)((uintptr_t)this + 0x2334);
}
bool _Script_RsGameTechRT::RsCharacter::get_bSkipCinematicBlendInterpReset() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 64 != 0;
}
void _Script_RsGameTechRT::RsCharacter::K2_EnableHitCollider(void* ColliderTag, _Script_RsGameTechRT::RsHitEvent& InHitEvent) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::get_PreCinematicSkeletalMeshCollisionEnabled() {
    return (void*)((uintptr_t)this + 0x2338);
}
bool _Script_RsGameTechRT::RsCharacter::get_bCanBlock() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 16 != 0;
}
_Script_RsGameTechRT::RsCombatStateMachine*& _Script_RsGameTechRT::RsCharacter::get_CombatStateMachine() {
    return *(_Script_RsGameTechRT::RsCombatStateMachine**)((uintptr_t)this + 0x2340);
}
void _Script_RsGameTechRT::RsCharacter::set_bForceSlowed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsCharacter::get_bCanReceiveDamageFromPhysicsCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsCharacter::OnDied(_Script_Engine::Actor* DeathActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::set_bCanReceiveDamageFromPhysicsCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsCharacter::set_bAttackHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_RsGameTechRT::RsCharacter::SetContextualEvaded() {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::get_bSkipDeathAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsCharacter::set_bSkipDeathAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsCharacter::get_bCanParry() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 32 != 0;
}
void _Script_RsGameTechRT::RsCharacter::set_bCanParry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2350 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_RsGameTechRT::RsCharacter::get_bCanEvade() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 64 != 0;
}
void _Script_RsGameTechRT::RsCharacter::GetHitCountStats(int32_t& MaxHitCount, int32_t& CurrentCount, int32_t& InverseHitCount) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::get_bCanDoGlancingBlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2350 + 0)) & 128 != 0;
}
_Script_Engine::MeshComponent* _Script_RsGameTechRT::RsCharacter::GetWeapon(int32_t Index) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::get_bIgnoresKillPlane() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsCharacter::get_bAlwaysDeflectProjectiles() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsCharacter::OnAttackEvadedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::set_bSkipCinematicBlendInterpReset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_RsGameTechRT::RsCharacter::get_bForceSlowed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsCharacter::get_bPreventCombatSuction() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 8 != 0;
}
bool _Script_RsGameTechRT::RsCharacter::get_bEnableCharacterPhysicsOnCineEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x2351 + 0)) & 32 != 0;
}
void* _Script_RsGameTechRT::RsCharacter::GetCombatState() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::set_bInexpensiveCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2351 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2351 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_RsGameTechRT::RsCharacter::SetBlockCountMarker(int32_t Count) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::get_bAllowCheapIk() {
    return (*(uint8_t*)((uintptr_t)this + 0x2352 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsCharacter::RegisterOnNavStateExited(void*& Delegate, void* State) {
    return;
}
_Script_Engine::SkeletalMeshComponent*& _Script_RsGameTechRT::RsCharacter::get_FacialRig() {
    return *(_Script_Engine::SkeletalMeshComponent**)((uintptr_t)this + 0x2358);
}
void* _Script_RsGameTechRT::RsCharacter::get_CombatMontage() {
    return (void*)((uintptr_t)this + 0x23a0);
}
void _Script_RsGameTechRT::RsCharacter::RotateToDamageCauserDirectional(void* InDirection) {
    return;
}
_Script_RsGameTechRT::RsCharacterDefinition*& _Script_RsGameTechRT::RsCharacter::get_CharacterDefinition() {
    return *(_Script_RsGameTechRT::RsCharacterDefinition**)((uintptr_t)this + 0x25a8);
}
float _Script_RsGameTechRT::RsCharacter::GetBlockMeter() {
    return;
}
_Script_RsGameTechRT::RsCharacterDefinition*& _Script_RsGameTechRT::RsCharacter::get_CharacterDefinition_TempHack() {
    return *(_Script_RsGameTechRT::RsCharacterDefinition**)((uintptr_t)this + 0x25b0);
}
_Script_RsGameTechRT::RsHealthComponent*& _Script_RsGameTechRT::RsCharacter::get_HealthComponent() {
    return *(_Script_RsGameTechRT::RsHealthComponent**)((uintptr_t)this + 0x2618);
}
void _Script_RsGameTechRT::RsCharacter::GetParryCountStats(int32_t& MaxParryCount, int32_t& CurrentParryCount) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::PlayReactionAnimation(void* ReactionType, void* AttackSwingDirection) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::get_FrameDamageTracker() {
    return (void*)((uintptr_t)this + 0x2688);
}
int32_t _Script_RsGameTechRT::RsCharacter::GetCurrentHitCount() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetCombatState(void* NewCombatState) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCharacter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCharacter");
    return result;
}
bool _Script_RsGameTechRT::RsCharacter::WasNavState(void* State) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::UnregisterOnNavStateEntered(void*& Delegate, void* State) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetAttackVictimDefendType() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::K2_CounteredEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::StartParryEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::StartGenericDefendEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* MappedDefenseType) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::GetSkipReaction() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::StartEvadeEnemyForceAbility(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::InNonProcessTopologyNavState() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::StartEvadeEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::StartBlockEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, bool IsStaffAttack, void* OriginalDefenseType) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::ShouldPlayDeathAnimation() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetWeapon(_Script_Engine::MeshComponent* InWeapon, int32_t Index) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetVisibility(bool bEnable) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetupDamageMaterials(void*& ElementIndices, void*& Materials) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetSkipReaction(bool enable, void*& ExcludedDamageTypes, bool AllowReactionInForceSlow, bool AllowReactionFromBlockBreak, bool AllowReactionFromUnblockable, bool SkipOnParryReactions) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetOverrideReactionDefinition(_Script_RsGameTechRT::RsCharacterReactionDefinition* ReactionDefinition) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetOverrideDefenseDefinition(_Script_RsGameTechRT::RsDefenseDefinition* DefenseDefinition) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetOverrideDeathDefinition(_Script_RsGameTechRT::RsCharacterDeathDefinition* DeathDefinition) {
    return;
}
_Script_RsGameTechRT::RsCharacter* _Script_RsGameTechRT::RsCharacter::GetInfoForAttackToDefend(void*& AttackerSwingDirection) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetNavState(void* NewState) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetLookAtTargetComponent(_Script_Engine::SceneComponent* InLookAtTarget, bool bResetOnReachThreshold) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetLookAtTarget() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetLookAtTarget(_Script_Engine::Actor* InLookAtTarget, bool bResetOnReachThreshold) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetLastDamageCauser(_Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetHitPause(float Duration, float AnimRate, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ReceiveInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetFacialRig(_Script_Engine::SkeletalMeshComponent* NewFacialRig) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetCinematicBlendInterp(float InterpValue) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::SetAttackSwingDirection(void* Direction) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::RsShouldTakeDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser) {
    return;
}
_Script_RsGameTechRT::RsCharacterDamageModifiers _Script_RsGameTechRT::RsCharacter::RsGetDamageModifiers(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageParams, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::RotateToDamageCauser() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::RotateToAlignXY(_Script_CoreUObject::Vector& AlignToVector, float RotationOffset) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::RotateToAlignDirectionalXY(_Script_CoreUObject::Vector& AlignToVector, void* InDirection) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::RotateToActorDirectional(_Script_Engine::Actor* TargetActor, void* InDirection) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::RotateToActor(_Script_Engine::Actor* TargetActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetToBestNavState() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetParry() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetHitCount() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetDamageInfo() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetContextualEvade() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ResetBlock() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::RegisterOnNavStateEntered(void*& Delegate, void* State) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::ReceiveInstigatedZeroDamage(_Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor, _Script_Engine::Actor* WouldBeDamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::OnRevived() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::OnReturnToNeutral() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::OnKilledCharacter(_Script_RsGameTechRT::RsCharacter* Victim) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::OnAttackParriedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::OnAttackCounteredByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::K2_DisableHitCollider(void* ColliderTag) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::K2_BlockedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsOverCurrentBlockCountMarker() {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsNavState(void* State) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsInWater() {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsInCombatState(void* CombatState) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsHostileTo(_Script_Engine::Actor* OtherActor) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsHeadTrackingPaused() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::IncrementBlockCount(int32_t Increment) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsFullyAwareOf(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::EnableAllDamageMaterials(float Opacity, float EmissiveIntensity) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsFriendlyTo(_Script_Engine::Actor* OtherActor) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsEqualOrOverCurrentBlockCountMarker() {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::IsAlive() {
    return;
}
float _Script_RsGameTechRT::RsCharacter::GetTimeInCurrentNavState() {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetReactionFromDamageType(void* DmgClass) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetPreviousNavState() {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetPrevCombatState() {
    return;
}
_Script_RsGameTechRT::RsOffenseComponent* _Script_RsGameTechRT::RsCharacter::GetOffenseComponent() {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetLastDefendType() {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetLastDamageSwingDirection() {
    return;
}
_Script_Engine::Controller* _Script_RsGameTechRT::RsCharacter::GetLastDamageInstigator() {
    return;
}
_Script_RsGameTechRT::RsHitEvent _Script_RsGameTechRT::RsCharacter::GetLastDamageHitEvent() {
    return;
}
_Script_RsGameTechRT::RsHealthComponent* _Script_RsGameTechRT::RsCharacter::GetHealthComponent() {
    return;
}
_Script_Engine::SkeletalMeshComponent* _Script_RsGameTechRT::RsCharacter::GetFacialRig() {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetDefendSwingDirection() {
    return;
}
_Script_RsGameTechRT::RsCharacter* _Script_RsGameTechRT::RsCharacter::GetDefendAttacker() {
    return;
}
_Script_RsGameTechRT::RsCharacterDefinition* _Script_RsGameTechRT::RsCharacter::GetCharacterDefinition() {
    return;
}
float _Script_RsGameTechRT::RsCharacter::GetBlockMarker() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::GetBlockCountStats(int32_t& MaxBlockCount, int32_t& CurrentBlockCount, int32_t& InverseBlockCount) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::GetAttackSwingDirection() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::DropWeapon() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::Dismember(void* configs, bool MasterPoseComponentMode) {
    return;
}
void* _Script_RsGameTechRT::RsCharacter::DetermineDefenseType(_Script_RsGameTechRT::RsCharacter* Attacker, void* DefendType) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::DeathMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::CanTakeDamageFromKillPlane() {
    return;
}
bool _Script_RsGameTechRT::RsCharacter::CanDoContextualEvade() {
    return;
}
void _Script_RsGameTechRT::RsCharacter::CancelFullBodyMontages(float BlendOutTime) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::CancelAllMontages(float BlendOutTime) {
    return;
}
void _Script_RsGameTechRT::RsCharacter::AddPhysicalAnimationTickDependency(_Script_Engine::SkeletalMeshComponent* NewDependent, bool ForceAlwaysDependOnPhysicalAnimation) {
    return;
}
