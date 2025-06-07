#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_SwGame {
struct RsAbilityInstanceData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct SwAttackState;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsAbilityUserComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x2d0]; public:
    void* get_AbilityClassNames();
    void* get_AbilityClasses();
    void* get_OnAbilityEffectApplied();
    void* get_DirectionFacing();
    void* get_HybridTargetData();
    int32_t& get_RopeTargetingFidelity();
    float& get_ExtrapolationTimeForActorsOnTopOf();
    bool get_bShouldApplyCameraPitchAdjustment();
    void set_bShouldApplyCameraPitchAdjustment(bool value);
    void* get_PitchAdjustmentData();
    void* get_DistanceExtensionData();
    void* get_OnAbilityActivated();
    bool get_bShouldHighlightCharacters();
    void set_bShouldHighlightCharacters(bool value);
    void* get_AbilityMap();
    _Script_SwGame::RsAbilityInstanceData*& get_InstanceData();
    static _Script_CoreUObject::Class* static_class();
    void TriggerAbilityWithHighestAcquiredUpgrade(void* AbilityType, bool bIsHeld);
    void TriggerAbility(void* AbilityType, void* UpgradeLevel, bool bIsHeld);
    void SetCanOnlyAffectCharacters(void* AbilityType, bool Value);
    void SetAbilityUpgradeLevel(void* AbilityType, void* UpgradeLevel);
    void RemoveAbility(void* AbilityType);
    bool IsAbilityTriggered(void* AbilityType);
    bool IsAbilityActive();
    _Script_Engine::Actor* GetCurrentAbilityTargetForBlueprint();
    void* GetAbilityUpgradeLevel(void* AbilityType);
    void* GetAbilityTargetsForBlueprint(void* AbilityType);
    _Script_CoreUObject::Vector GetAbilityDirection(void* AbilityType);
    void DeactivateAllChildEffectsForAbility(void* AbilityType);
    void DeactivateAllAbilities();
    void DeactivateAbilityOnTrigger(void* AbilityType);
    void DeactivateAbility(void* AbilityType);
    bool CanOnlyAffectCharacters(void* AbilityType);
    void AddAbility(void* AbilityType);
    void ActivateAbility(void* AbilityType, _Script_Engine::AnimationAsset* OverrideAnim, _Script_SwGame::SwAttackState* InAttackState, bool bIsChaining);
}; // Size: 0x440
#pragma pack(pop)
}
