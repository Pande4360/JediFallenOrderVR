#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\StaticMeshActor.hpp"
namespace _Script_SwGame {
struct RsAbilityEffectVictimComponent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_WorldInteracts_Telekinesis_BP_TKObject {
#pragma pack(push, 1)
struct BP_TKObject_C : public _Script_Engine::StaticMeshActor {
    private: char pad_370[0xd0]; public:
    void* get_UberGraphFrame();
    _Script_SwGame::RsAbilityEffectVictimComponent*& get_RsAbilityEffectVictim();
    _Script_Engine::StaticMesh*& get_static_Mesh();
    int32_t& get_tkWeightClass();
    void* get_linearVelocity_Slowdown();
    void* get_angularVelocity_Slowdown();
    float& get_slowdownTime();
    void* get_Gravity();
    bool get_forceSlowed();
    void set_forceSlowed(bool value);
    void* get_endSlowdownTimer();
    float& get_slowdownMultiplier();
    float& get_InvMass();
    bool get_tkLifted();
    void set_tkLifted(bool value);
    float& get_SlowdownWarningTime();
    bool get_tkPulled();
    void set_tkPulled(bool value);
    float& get_tkPullUpOffset();
    float& get_tkPullFwdOffset();
    float& get_tkPullRightOffset();
    bool get_tkPullJiggle();
    void set_tkPullJiggle(bool value);
    float& get_jiggleInterval();
    float& get_jiggleDownwardVelocity();
    void* get_pullStartTransform();
    void* get_RockStartLocation();
    void* get_RockDestination();
    _Script_RsGameTechRT::RsCharacter*& get_OtherActor();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
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
    void EnableCollisionPhysics(bool Disable);
    void ExecuteUbergraph_BP_TKObject(int32_t EntryPoint);
}; // Size: 0x440
#pragma pack(pop)
}
