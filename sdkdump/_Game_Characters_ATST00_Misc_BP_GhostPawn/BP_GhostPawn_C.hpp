#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_ATST00_Misc_BP_GhostPawn {
#pragma pack(push, 1)
struct BP_GhostPawn_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    void* get_UberGraphFrame();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_RsGameTechRT::RsTargetableComponent*& get_RsTargetable();
    _Script_Engine::CapsuleComponent*& get_capsule();
    static _Script_CoreUObject::Class* static_class();
    void TelekinesisLift(bool& Success, int32_t& WeightClass);
    void IsTelekinesisObject(bool& Result, int32_t& tkWeightClass);
    void IsForceSlowdownObject(bool& Result);
    void ForceCrushGrab(bool& Success);
    void UserConstructionScript0();
    void OnForcePullEnd();
    void OnForcePullEnterHold();
    void OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushEnd();
    void OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowEnd();
    void OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel);
    void OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisEnd();
    void OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void ExecuteUbergraph_BP_GhostPawn(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)
}
