#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
namespace _Script_RsGameTechRT {
struct RsAIPOISyncDefinition;
}
namespace _Script_RsGameTechRT {
struct RsAIPOIDefinition;
}
namespace _Script_RsGameTechRT {
struct RsNarrativeTriggerComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIPOI : public _Script_Engine::Actor {
    private: char pad_360[0x210]; public:
    bool get_bStartEnabled();
    void set_bStartEnabled(bool value);
    bool get_bDisableOnInteract();
    void set_bDisableOnInteract(bool value);
    bool get_bResetEnabledStateOnNewEncountersInstance();
    void set_bResetEnabledStateOnNewEncountersInstance(bool value);
    float& get_CooldownDuration();
    float& get_Radius();
    bool get_bCanBroadcast();
    void set_bCanBroadcast(bool value);
    bool get_bAllowedInAmbientState();
    void set_bAllowedInAmbientState(bool value);
    bool get_bAllowedInAlertState();
    void set_bAllowedInAlertState(bool value);
    bool get_bAllowedInAggroState();
    void set_bAllowedInAggroState(bool value);
    bool get_bUseCharacterTypeFilter();
    void set_bUseCharacterTypeFilter(bool value);
    bool get_bUseSpawnGroupNameFilter();
    void set_bUseSpawnGroupNameFilter(bool value);
    bool get_bOverridesScriptingMode();
    void set_bOverridesScriptingMode(bool value);
    bool get_bSetScriptingModeWhenDone();
    void set_bSetScriptingModeWhenDone(bool value);
    void* get_CharacterTypeFilter();
    void* get_SpawnGroupNameFilter();
    void* get_ScriptingModeDuringUse();
    void* get_ScriptingModeWhenDone();
    void* get_CollisionOverrideMode();
    bool get_bMoveToPOILocation();
    void set_bMoveToPOILocation(bool value);
    bool get_bAlignToSyncPointLocation();
    void set_bAlignToSyncPointLocation(bool value);
    bool get_bAlignToSyncPointRotation();
    void set_bAlignToSyncPointRotation(bool value);
    bool get_bSetAsNewHomeLocation();
    void set_bSetAsNewHomeLocation(bool value);
    bool get_bOverridesAttackTarget();
    void set_bOverridesAttackTarget(bool value);
    bool get_bOverrideMotionParm();
    void set_bOverrideMotionParm(bool value);
    void* get_OverrideAttackTargetMode();
    _Script_Engine::Actor*& get_OverrideAttackTarget();
    float& get_BroadcastInterval();
    void* get_LinkedPOIsList();
    void* get_OverrideMotionParmName();
    _Script_RsGameTechRT::RsAIPOIDefinition*& get_POIDefinition();
    _Script_RsGameTechRT::RsAIPOISyncDefinition*& get_SyncDefinition();
    bool get_bLoopPOIBehavior();
    void set_bLoopPOIBehavior(bool value);
    bool get_bLockGoals();
    void set_bLockGoals(bool value);
    bool get_bDisableCrowdAvoidance();
    void set_bDisableCrowdAvoidance(bool value);
    void* get_OnPOIOperated();
    void* get_OnPOIEnabled();
    void* get_OnPOIDisabled();
    void* get_OnApproachingPOI();
    void* get_OnArrivedAtPOI();
    void* get_OnLeavingPOI();
    void* get_OnPOIActionBegin();
    void* get_OnPOIActionEnd();
    void* get_EncounterGroups();
    _Script_RsGameTechRT::RsNarrativeTriggerComponent*& get_NarrativeTriggerComponent();
    void* get_GameplayTags();
    static _Script_CoreUObject::Class* static_class();
    void UsePOI();
    bool ShouldDisableOnInteract();
    void SetSyncPointComponent(_Script_Engine::SceneComponent* InSyncPoint);
    void OnEncounterInstanceIncremented();
    bool IsSyncSlotFull();
    bool IsEnabled();
    _Script_CoreUObject::Rotator GetSyncPointRotation();
    _Script_CoreUObject::Vector GetSyncPointLocation();
    _Script_CoreUObject::Vector GetSyncPointForwardVector();
    _Script_Engine::SceneComponent* GetSyncPointComponent();
    float GetLastInteractionTime();
    float GetCooldownDuration();
    void EnablePOI();
    void DisablePOI(void* BehaviorAction, bool bTriggerUseEventOnAbort);
    void DisableAllPOIsWithMatchingTags(_Script_GameplayTags::GameplayTagContainer IgnoredTags);
}; // Size: 0x570
#pragma pack(pop)
}
