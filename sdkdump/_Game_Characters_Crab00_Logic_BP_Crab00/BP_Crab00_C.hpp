#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct CapsuleComponent;
}
namespace _Script_SwGame {
struct RsVolumePlacementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Script_Engine {
struct SphereComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_Characters_Crab00_Logic_BP_Crab00 {
#pragma pack(push, 1)
struct BP_Crab00_C : public _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C {
    private: char pad_2d18[0x78]; public:
    void* get_UberGraphFrame0();
    _Script_Engine::SkeletalMeshComponent*& get_dismemberment_rightSide();
    _Script_SwGame::RsVolumePlacementComponent*& get_RsVolumePlacement();
    _Script_Engine::SkeletalMeshComponent*& get_dismemberment_leftSide();
    _Script_Engine::ChildActorComponent*& get_FD_Crab();
    _Script_Engine::CapsuleComponent*& get_LightsaberCapsule();
    _Script_Engine::SphereComponent*& get_collision_Body();
    _Script_Engine::SphereComponent*& get_collision_Jaws();
    float& get_Timeline_0_Burn_4888534D4F62519D0CE22DA0ADEBD522();
    float& get_Timeline_0_Overbright_4888534D4F62519D0CE22DA0ADEBD522();
    void* get_Timeline_0__Direction_4888534D4F62519D0CE22DA0ADEBD522();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    void* get_OverlappedGrunts();
    float& get_ClosestDistance();
    _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& get_HeadcrabTarget();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void DismemberFX();
    void Died0(_Script_Engine::Actor* DeadActor);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_Crab00(int32_t EntryPoint);
}; // Size: 0x2d90
#pragma pack(pop)
}
