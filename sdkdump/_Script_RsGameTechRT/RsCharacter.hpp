#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "RsCharacterDamageModifiers.hpp"
#include "RsHitEvent.hpp"
#include "..\_Script_RsTechRT\rsActor.hpp"
namespace _Script_RsTechRT {
struct RsBitStack;
}
namespace _Script_Engine {
struct MeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsCombatStateMachine;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_RsGameTechRT {
struct RsCharacterReactionDefinition;
}
namespace _Script_RsGameTechRT {
struct RsCharacterDefinition;
}
namespace _Script_RsGameTechRT {
struct RsHealthComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsDefenseDefinition;
}
namespace _Script_RsGameTechRT {
struct RsCharacterDeathDefinition;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_RsGameTechRT {
struct RsReactionParameters;
}
namespace _Script_RsGameTechRT {
struct RsOffenseComponent;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsCharacter : public _Script_RsTechRT::rsActor {
    private: char pad_1870[0x1060]; public:
    _Script_RsTechRT::RsBitStack*& get_ControlStack();
    void* get_OnCharacterInterrupted();
    void* get_OnCharacterResetPhysics();
    void* get_OnTakeNoDamage();
    void* get_OnHealthChanged();
    void* get_OnHitCountThresholdReached();
    void* get_OnHitCountReset();
    void* get_OnReactionEvent();
    void* get_OnPostReactionEvent();
    void* get_OnCombatStateChangedEvent();
    void* get_OnIsInWaterStateChanged();
    void* get_HeadBoneName();
    float& get_LookAtYawSpeed();
    float& get_LookAtPitchSpeed();
    float& get_LookAtYawThreshold();
    void* get_OnInstigatedAnyDamage();
    void* get_OnInstigatedZeroDamage();
    void* get_OnAnyNavStateChange();
    void* get_OnRsHitCollided();
    void* get_OnRsDidProjectileDamage();
    void* get_LastDamageInfo();
    int32_t& get_CharSyncID();
    float& get_CinematicBlendInterp();
    void* get_PreCinematicSkeletalMeshCollisionEnabled();
    _Script_RsGameTechRT::RsCombatStateMachine*& get_CombatStateMachine();
    _Script_RsGameTechRT::RsPhysicalAnimationComponent*& get_RsPhysicalAnimationComponent();
    bool get_bCanReceiveDamageFromPhysicsCollision();
    void set_bCanReceiveDamageFromPhysicsCollision(bool value);
    bool get_bAttackHit();
    void set_bAttackHit(bool value);
    bool get_bSkipDeathAnimation();
    void set_bSkipDeathAnimation(bool value);
    bool get_bCanBlock();
    void set_bCanBlock(bool value);
    bool get_bCanParry();
    void set_bCanParry(bool value);
    bool get_bCanEvade();
    void set_bCanEvade(bool value);
    bool get_bCanDoGlancingBlow();
    void set_bCanDoGlancingBlow(bool value);
    bool get_bIgnoresKillPlane();
    void set_bIgnoresKillPlane(bool value);
    bool get_bAlwaysDeflectProjectiles();
    void set_bAlwaysDeflectProjectiles(bool value);
    bool get_bForceSlowed();
    void set_bForceSlowed(bool value);
    bool get_bPreventCombatSuction();
    void set_bPreventCombatSuction(bool value);
    bool get_bEnableCharacterPhysicsOnCineEnd();
    void set_bEnableCharacterPhysicsOnCineEnd(bool value);
    bool get_bSkipCinematicBlendInterpReset();
    void set_bSkipCinematicBlendInterpReset(bool value);
    bool get_bInexpensiveCharacter();
    void set_bInexpensiveCharacter(bool value);
    bool get_bAllowCheapIk();
    void set_bAllowCheapIk(bool value);
    float& get_AttackDamageMultiplier();
    _Script_Engine::SkeletalMeshComponent*& get_FacialRig();
    void* get_CombatMontage();
    void* get_InitialAttributeTags();
    _Script_RsGameTechRT::RsCharacterDefinition*& get_CharacterDefinition();
    _Script_RsGameTechRT::RsCharacterDefinition*& get_CharacterDefinition_TempHack();
    _Script_RsGameTechRT::RsHealthComponent*& get_HealthComponent();
    void* get_FrameDamageTracker();
    static _Script_CoreUObject::Class* static_class();
    bool WasNavState(void* State);
    void UnregisterOnNavStateExited(void*& Delegate, void* State);
    void UnregisterOnNavStateEntered(void*& Delegate, void* State);
    void StartParryEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType);
    void StartGenericDefendEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* MappedDefenseType);
    void StartEvadeEnemyForceAbility(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType);
    void StartEvadeEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, void* OriginalDefenseType);
    void StartBlockEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, bool IsStaffAttack, void* OriginalDefenseType);
    bool ShouldPlayDeathAnimation();
    void SetWeapon(_Script_Engine::MeshComponent* InWeapon, int32_t Index);
    void SetVisibility(bool bEnable);
    void SetupDamageMaterials(void*& ElementIndices, void*& Materials);
    void SetSkipReaction(bool enable, void*& ExcludedDamageTypes, bool AllowReactionInForceSlow, bool AllowReactionFromBlockBreak, bool AllowReactionFromUnblockable, bool SkipOnParryReactions);
    void SetOverrideReactionDefinition(_Script_RsGameTechRT::RsCharacterReactionDefinition* ReactionDefinition);
    void SetOverrideDefenseDefinition(_Script_RsGameTechRT::RsDefenseDefinition* DefenseDefinition);
    void SetOverrideDeathDefinition(_Script_RsGameTechRT::RsCharacterDeathDefinition* DeathDefinition);
    void SetNavState(void* NewState);
    void SetLookAtTargetComponent(_Script_Engine::SceneComponent* InLookAtTarget, bool bResetOnReachThreshold);
    void SetLookAtTarget(_Script_Engine::Actor* InLookAtTarget, bool bResetOnReachThreshold);
    void SetLastDamageEffectType(void* DamageEffectType);
    void SetLastDamageCauser(_Script_Engine::Actor* DamageCauser);
    void SetHitPause(float Duration, float AnimRate, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void SetFacialRig(_Script_Engine::SkeletalMeshComponent* NewFacialRig);
    void SetContextualEvaded();
    void SetCombatState(void* NewCombatState);
    void SetCinematicBlendInterp(float InterpValue);
    void SetBlockMarkerOverrides(float Min, float Max);
    void SetBlockCountMarker(int32_t Count);
    void SetAttackSwingDirection(void* Direction);
    bool RsShouldTakeDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser);
    _Script_RsGameTechRT::RsCharacterDamageModifiers RsGetDamageModifiers(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageParams, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser);
    void RotateToDamageCauserDirectional(void* InDirection);
    void RotateToDamageCauser();
    void RotateToAlignXY(_Script_CoreUObject::Vector& AlignToVector, float RotationOffset);
    void RotateToAlignDirectionalXY(_Script_CoreUObject::Vector& AlignToVector, void* InDirection);
    void RotateToActorDirectional(_Script_Engine::Actor* TargetActor, void* InDirection);
    void RotateToActor(_Script_Engine::Actor* TargetActor);
    void ResetToBestNavState();
    void ResetParry();
    void ResetLookAtTarget();
    void ResetHitCount();
    void ResetDamageInfo();
    void ResetContextualEvade();
    void ResetBlock();
    void RegisterOnNavStateExited(void*& Delegate, void* State);
    void RegisterOnNavStateEntered(void*& Delegate, void* State);
    void ReceiveInstigatedZeroDamage(_Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor, _Script_Engine::Actor* WouldBeDamageCauser);
    void ReceiveInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser);
    bool PlayReactionAnimation(void* ReactionType, void* AttackSwingDirection);
    _Script_Engine::AnimMontage* PlayCharacterAnimation(_Script_Engine::AnimationAsset* Asset, float BlendInTime, float BlendOutTime, void* AnimationSlot, bool PlayRandomAnimation, float StartPosition, float Playrate, float BlendOutTriggerTime, _Script_CoreUObject::Vector2D BlendSpaceInput);
    void OnRevived();
    void OnReturnToNeutral();
    void OnKilledCharacter(_Script_RsGameTechRT::RsCharacter* Victim);
    void OnDied(_Script_Engine::Actor* DeathActor);
    void OnCombatContactEvent(_Script_RsGameTechRT::RsCharacter* Attacker);
    void OnBlockBreakOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnAttackParriedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnAttackEvadedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnAttackCounteredByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnAttackBlockedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void K2_TriggerReaction(_Script_Engine::Actor* Attacker, _Script_RsGameTechRT::RsReactionParameters& ReactionParameters, _Script_CoreUObject::Rotator& RotateToward, bool AlignToAttacker);
    void K2_ParriedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    void K2_EnableHitCollider(void* ColliderTag, _Script_RsGameTechRT::RsHitEvent& InHitEvent);
    void K2_DisableHitCollider(void* ColliderTag);
    void K2_CounteredEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    void K2_BlockedEnemyAttack(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsDamageParams& DamageParams);
    bool IsOverCurrentBlockCountMarker();
    bool IsNavState(void* State);
    bool IsInWater();
    bool IsInCombatState(void* CombatState);
    bool IsHostileTo(_Script_Engine::Actor* OtherActor);
    bool IsHeadTrackingPaused();
    bool IsFullyAwareOf(_Script_Engine::Actor* OtherActor);
    bool IsFriendlyTo(_Script_Engine::Actor* OtherActor);
    bool IsEqualOrOverCurrentBlockCountMarker();
    bool IsAlive();
    bool InNonProcessTopologyNavState();
    void IncrementBlockCount(int32_t Increment);
    void ImpulsePush(_Script_Engine::Actor* DamageCauser, float Duration, float Distance);
    _Script_Engine::MeshComponent* GetWeapon(int32_t Index);
    float GetTimeInCurrentNavState();
    bool GetSkipReaction();
    void* GetReactionFromDamageType(void* DmgClass);
    void* GetPreviousNavState();
    void* GetPrevCombatState();
    void GetParryCountStats(int32_t& MaxParryCount, int32_t& CurrentParryCount);
    _Script_RsGameTechRT::RsOffenseComponent* GetOffenseComponent();
    void* GetLastDefendType();
    void* GetLastDamageSwingDirection();
    _Script_Engine::Controller* GetLastDamageInstigator();
    _Script_RsGameTechRT::RsHitEvent GetLastDamageHitEvent();
    _Script_Engine::Actor* GetLastDamageCauser();
    _Script_RsGameTechRT::RsCharacter* GetInfoForAttackToDefend(void*& AttackerSwingDirection);
    void GetHitCountStats(int32_t& MaxHitCount, int32_t& CurrentCount, int32_t& InverseHitCount);
    _Script_RsGameTechRT::RsHealthComponent* GetHealthComponent();
    _Script_Engine::SkeletalMeshComponent* GetFacialRig();
    void* GetDefendSwingDirection();
    _Script_RsGameTechRT::RsCharacter* GetDefendAttacker();
    void* GetCurrentNavState();
    int32_t GetCurrentHitCount();
    void* GetCombatState();
    _Script_RsGameTechRT::RsCharacterDefinition* GetCharacterDefinition();
    float GetBlockMeter();
    float GetBlockMarker();
    void GetBlockCountStats(int32_t& MaxBlockCount, int32_t& CurrentBlockCount, int32_t& InverseBlockCount);
    void* GetAttackVictimDefendType();
    void* GetAttackSwingDirection();
    _Script_Engine::Actor* GetAttackingTarget();
    void EnableAllDamageMaterials(float Opacity, float EmissiveIntensity);
    void DropWeapon();
    void Dismember(void* configs, bool MasterPoseComponentMode);
    void* DetermineDefenseType(_Script_RsGameTechRT::RsCharacter* Attacker, void* DefendType);
    void DeathMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted);
    bool CanTakeDamageFromKillPlane();
    bool CanDoContextualEvade();
    void CancelFullBodyMontages(float BlendOutTime);
    void CancelAllMontages(float BlendOutTime);
    void AddPhysicalAnimationTickDependency(_Script_Engine::SkeletalMeshComponent* NewDependent, bool ForceAlwaysDependOnPhysicalAnimation);
}; // Size: 0x28d0
#pragma pack(pop)
}
