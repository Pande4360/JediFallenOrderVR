#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterDamageModifiers.hpp"
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_Engine {
struct SphereComponent;
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
namespace _Game_Characters_BoganoFodder_Logic_BP_BoganoFodder {
#pragma pack(push, 1)
struct BP_BoganoFodder_C : public _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C {
    private: char pad_2d18[0x60]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::ChildActorComponent*& get_ChildActor();
    _Script_Engine::CapsuleComponent*& get_tailCollision1();
    _Script_Engine::SkeletalMeshComponent*& get_dismemBody();
    _Script_Engine::SkeletalMeshComponent*& get_dismemHead();
    _Script_Engine::SphereComponent*& get_rightArm();
    _Script_Engine::SphereComponent*& get_LeftArm();
    _Script_Engine::SphereComponent*& get_bodyCollision();
    float& get_CauterizeTimeline_Burn_3CD627E74060BA00F39A4BA59EB48D57();
    float& get_CauterizeTimeline_Overbright_3CD627E74060BA00F39A4BA59EB48D57();
    void* get_CauterizeTimeline__Direction_3CD627E74060BA00F39A4BA59EB48D57();
    _Script_Engine::TimelineComponent*& get_CauterizeTimeline();
    bool get_bParriedHeadButt();
    void set_bParriedHeadButt(bool value);
    bool get_bAllowPullout();
    void set_bAllowPullout(bool value);
    static _Script_CoreUObject::Class* static_class();
    void TryDismember();
    _Script_RsGameTechRT::RsCharacterDamageModifiers RsGetDamageModifiers(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageParams, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* EventInstigator, _Script_Engine::Actor* DamageCauser);
    void UserConstructionScript0();
    void CauterizeTimeline__FinishedFunc();
    void CauterizeTimeline__UpdateFunc();
    void Died0(_Script_Engine::Actor* DeadActor);
    void OnForcePullOverriden0(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel);
    void DismemberFX();
    void UseTraceCollision();
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_BoganoFodder(int32_t EntryPoint);
}; // Size: 0x2d78
#pragma pack(pop)
}
