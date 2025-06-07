#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterDamageModifiers.hpp"
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_RsGameTechRT {
struct RsDamageParams;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct DamageType;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsNavVolume;
}
namespace _Script_RsGameTechRT {
struct RsHitEvent;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_RsGameTechRT {
struct RsAISpawner;
}
namespace _Script_RsGameTechRT {
struct RsAIController;
}
namespace _Game_Characters_Croakadile_Logic_BP_Croakodile {
#pragma pack(push, 1)
struct BP_Croakodile_C : public _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C {
    private: char pad_2d18[0x70]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SphereComponent*& get_tongueDismemberCollision();
    _Script_Engine::SkeletalMeshComponent*& get_tongueDismem();
    _Script_Engine::CapsuleComponent*& get_TongueCollider_Tip();
    _Script_Engine::ChildActorComponent*& get_DynamicDeformer();
    _Script_Engine::SphereComponent*& get_PawnHeadCollision();
    _Script_Engine::CapsuleComponent*& get_TongueCollider_base();
    _Script_Engine::CapsuleComponent*& get_HeadHitCollider();
    _Script_Engine::CapsuleComponent*& get_JawHitCollider();
    float& get_Timeline_0_Burn_6E679E2946E3EB233C2752889B22BBD8();
    float& get_Timeline_0_Overbright_6E679E2946E3EB233C2752889B22BBD8();
    void* get_Timeline_0__Direction_6E679E2946E3EB233C2752889B22BBD8();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    bool get_CroakParried();
    void set_CroakParried(bool value);
    bool get_CroakOnGround();
    void set_CroakOnGround(bool value);
    bool get_InAirPushInterrupt();
    void set_InAirPushInterrupt(bool value);
    float& get_ForcePushImpulseMultiplier();
    bool get_HasTongue();
    void set_HasTongue(bool value);
    bool get_InAirPullInterrupt();
    void set_InAirPullInterrupt(bool value);
    void* get_PlayerAbilityLevel();
    static _Script_CoreUObject::Class* static_class();
    void CancelTongueWhiff();
    _Script_RsGameTechRT::RsCharacterDamageModifiers RsGetDamageModifiers(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageParams, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser);
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay0();
    void OnForcePullOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePushOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void IsInWaterStateChanged(_Script_RsGameTechRT::RsCharacter* Character, _Script_RsGameTechRT::RsNavVolume* Volume, bool bIsInWater, bool bWasInWater);
    void OnAttackCounteredByOtherActor0(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor);
    void OnTopologyChanged(void* previousMode, void* newMode, float Proximity);
    void ReceiveAnyDamage0(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser);
    void OnForcePullStart0(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void OnForcePullEnd0();
    void OnNotifyAISpawned0(_Script_RsGameTechRT::RsAISpawner* Spawner);
    void DismemberFX();
    void Died0(_Script_Engine::Actor* DeadActor);
    void OnAIAwarenessChanged0(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState);
    void ExecuteUbergraph_BP_Croakodile(int32_t EntryPoint);
}; // Size: 0x2d88
#pragma pack(pop)
}
