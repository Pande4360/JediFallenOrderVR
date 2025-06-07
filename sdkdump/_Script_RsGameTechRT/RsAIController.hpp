#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAIControllerBase.hpp"
namespace _Script_RsGameTechRT {
struct RsAIGoalManager;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIPOI;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_RsGameTechRT {
struct RsAICharacterDefinition;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIController : public RsAIControllerBase {
    private: char pad_488[0x3a0]; public:
    void* get_OnAwarenessStateChangedEvent();
    void* get_OnAwarenessLevelChangedEvent();
    void* get_OnSpawnIntroCompletedEvent();
    void* get_OnPatrolPathCompleted();
    void* get_OnAIFightSlotClaim();
    void* get_OnAIFightSlotUnclaim();
    void* get_OnAIAttackTargetChangedEvent();
    void* get_OnAIScreenStatusChangedEvent();
    float& get_HeightOffsetFromAttackTarget();
    bool get_bWantMaintainsHeightOffset();
    void set_bWantMaintainsHeightOffset(bool value);
    bool get_bCanInterruptSpawnIntroByAwarenessStateChange();
    void set_bCanInterruptSpawnIntroByAwarenessStateChange(bool value);
    _Script_RsGameTechRT::RsAIGoalManager*& get_GoalManager();
    bool get_bAllowAwarenessReactions();
    void set_bAllowAwarenessReactions(bool value);
    bool get_bUseCrowdAvoidance();
    void set_bUseCrowdAvoidance(bool value);
    bool get_bUsePathSmoothing();
    void set_bUsePathSmoothing(bool value);
    bool get_bCanUseNavLinks();
    void set_bCanUseNavLinks(bool value);
    bool get_bCanTrackFocusWhileMoving();
    void set_bCanTrackFocusWhileMoving(bool value);
    bool get_bCanEverUpdateFocusLocationFromHomeRotation();
    void set_bCanEverUpdateFocusLocationFromHomeRotation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void StopWaiting();
    void StartWaiting();
    bool ShouldUnsheatheWeaponOnSpawn();
    void SetScriptingMode(void* NewScriptingMode);
    void SetRole(void* NewAIRole);
    void SetOverrideFocusTarget(_Script_Engine::Actor* FocusTarget);
    void SetDelegatePOIActor(_Script_Engine::Actor* DelegateActor);
    void SetAttackTargetOverrideActor(_Script_Engine::Actor* AttackTarget);
    void ReceiveUninitializeAI();
    void ReceiveInitializeAI();
    void OnTakeNoDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnPreFactionChange(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent, _Script_GameplayTags::GameplayTag PreviousFactionTag, _Script_GameplayTags::GameplayTag NewFactionTag);
    void OnOwnerDied(_Script_Engine::Actor* DeadActor);
    void OnNavLinkTraversalSyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnNavLinkApproachSyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void OnFactionChanged(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent);
    bool IsOnScreen();
    bool IsAttackTargetOverridden();
    bool IsAttackTargetLocked();
    bool IsAttacking();
    _Script_Engine::Actor* GetSourceOfLastAwarenessStateChange();
    void* GetScriptingMode();
    void* GetRole();
    void* GetPreviousAwarenessState();
    _Script_Engine::Actor* GetDelegatePOIActor();
    _Script_RsGameTechRT::RsAIPOI* GetCurrentPOI();
    void* GetAwarenessState();
    _Script_RsGameTechRT::RsAICharacterDefinition* GetAICharacterDefinition();
    void FinishPOIBehavior();
    _Script_Engine::Actor* FindHuntTarget();
    void EnableCrowdAvoidance(bool bEnable);
    void ClearOverrideFocusTarget();
    void ClearLeashingBounds();
    void ClearAttackTargetOverride();
    void* BeginPOIBehavior(_Script_RsGameTechRT::RsAIPOI* InPOIActor, bool bInterruptCurrent);
    void AbortPOIBehavior(bool bTriggersUsePOIEvent);
}; // Size: 0x828
#pragma pack(pop)
}
