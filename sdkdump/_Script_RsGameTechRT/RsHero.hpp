#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBitfield_HeroInputFlags.hpp"
#include "RsBitfield_HeroLoadoutFlags.hpp"
#include "RsBitfield_HeroUpgradeFlags.hpp"
#include "RsCharacter.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateDefinition;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsInputActionSetDefinition;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_RsGameTechRT {
struct RsHeroFlagSetDefinition;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsHero : public RsCharacter {
    private: char pad_28d0[0x5d0]; public:
    void* get_OnInputAction();
    void* get_OnHeroLoadoutChanged();
    void* get_OnHeroUpgradeChanged();
    _Script_RsGameTechRT::RsHeroStateDefinition*& get_HeroStates();
    _Script_RsGameTechRT::RsInputActionSetDefinition*& get_ActionsSet();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHeroTurnings();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHeroStarts();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileHeroStops();
    void* get_MotionTweakMap();
    void* get_CollisionTweakMap();
    void* get_ModifierInstances();
    void* get_AppliedModifierInstances();
    void* get_TimedModifierTimerHandles();
    _Script_RsGameTechRT::RsHeroFlagSetDefinition*& get_FlagSetDefinition();
    float& get_SlideSlopeInput();
    void* get_SlideSlopeYawVec();
    float& get_SlideSlopeRelativeSpeed();
    bool get_bDisallowPhysicalAnimationDuringGroundNavigation();
    void set_bDisallowPhysicalAnimationDuringGroundNavigation(bool value);
    bool get_bDisableTimeDilation();
    void set_bDisableTimeDilation(bool value);
    _Script_Engine::Actor*& get_SoftTarget();
    _Script_Engine::Actor*& get_zTarget();
    _Script_RsGameTechRT::RsCharacter*& get_ParriedTarget();
    static _Script_CoreUObject::Class* static_class();
    void UnregisterOnActionUnbuffered(void*& Delegate, void* ActionName);
    void UnregisterOnActionBuffered(void*& Delegate, void* ActionName);
    void SlideNavStop();
    bool SlideNav();
    bool ShouldSlideNav();
    void SetTemporarilyGiveAllLoadoutAndUpgrades(bool bShouldGiveAll);
    void SetParriedTarget(_Script_RsGameTechRT::RsCharacter* Target, float ValidDuration);
    void ResetInputFlags();
    void ResetBufferedAction();
    void ResetAllState();
    void RemoveHeroUpgradeFlag(void* Flags);
    bool RemoveHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, float BlendTime);
    void RemoveHeroLoadoutFlag(void* Flags);
    void RegisterOnActionUnbuffered(void*& Delegate, void* ActionName);
    void RegisterOnActionBuffered(void*& Delegate, void* ActionName);
    void PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options);
    void PhysicalAnimationBlendingCustomControllerFactorChanged(void* blendingCustomController, float previousBlendValue, float newBlendValue);
    void OnActionReleased(void* ActionName);
    void OnActionPressed(void* ActionName);
    bool LastActionReleasedWithinTime(void* ActionName, float Duration);
    bool IsInputPressed(void* ActionName);
    bool IsExecutingBufferedAction();
    bool IsActionBuffered(void* ActionName, bool bIncludeBufferedRelease);
    bool HasHeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags Flags);
    bool HasHeroUpgradeFlag(void* Flag);
    bool HasHeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Flags);
    bool HasHeroLoadoutFlag(void* Flag);
    bool HasHeroInputFlags(_Script_RsGameTechRT::RsBitfield_HeroInputFlags Flags);
    bool HasHeroInputFlag(void* Flag);
    bool HasBufferedAction(bool bIncludeBufferedRelease);
    void* GetMotionTweaksNameFromEnum(void* motionEnum);
    float GetLastActionReleasedTime(void* ActionName);
    void ForceReleaseInput(void* ActionName);
    void ForceExecuteBuffer(void* ActionName);
    void ForceBufferAction(void* ActionName);
    void DetermineSoftLockTarget(float MaxDistance, float MaxAngle);
    void DebugSetHeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags Flags);
    void DebugSetHeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Flags);
    void* DebugGetHeroUpgradeFlagsText();
    bool DebugGetHeroStateModifiers(void*& HeroModifiers);
    void* DebugGetHeroLoadoutFlagsText();
    void DeactivateCombatSuction();
    void AddHeroUpgradeFlag(void* Flag);
    bool AddHeroStateModifierForDuration(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, void*& OnRemovedCallback, float Duration, float BlendInTime, float BlendOutTime);
    bool AddHeroStateModifier(_Script_CoreUObject::Object* InstanceOwner, _Script_RsGameTechRT::RsHeroStateModifierDefinition* Modifier, void*& OnRemovedCallback, float BlendTime);
    void AddHeroLoadoutFlag(void* Flag);
    void AddAllHeroUpgradeFlags(_Script_RsGameTechRT::RsBitfield_HeroUpgradeFlags Flags, bool bSaveImmediately);
    void AddAllHeroLoadoutFlags(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags Flags, bool bSaveImmediately);
    bool ActivateCombatSuction(_Script_Engine::Actor* SuctionTarget, float TimeToTarget, float Offset, float MaxRange);
}; // Size: 0x2ea0
#pragma pack(pop)
}
