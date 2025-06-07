#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_RsGameTechRT {
struct RsHero;
}
namespace _Script_Engine {
struct BillboardComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct TimelineComponent;
}
namespace _Script_Engine {
struct TriggerBase;
}
namespace _Script_SwGame {
struct SwAIBuddyDroidController;
}
namespace _Script_SwGame {
struct SwAIBuddyDroid;
}
namespace _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid {
struct AB_BuddyDroid_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_MoveAhead {
#pragma pack(push, 1)
struct BP_BuddyDroid_MoveAhead_C : public _Script_Engine::Actor {
    private: char pad_360[0xb0]; public:
    void* get_UberGraphFrame();
    _Script_Engine::BillboardComponent*& get_Billboard2();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_Timeline_0__Direction_CC7AA9C34193315E171D7B8A2723A8C8();
    _Script_Engine::TimelineComponent*& get_Timeline_0();
    _Script_Engine::TriggerBase*& get_Start_Trigger();
    _Script_RsGameTechRT::RsHero*& get_REF_RsHero();
    _Script_SwGame::SwAIBuddyDroid*& get_REF_SwBuddyDroid();
    _Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& get_REF_AB_BuddyDroid();
    _Script_Engine::TriggerBase*& get_Cancel_Trigger__Optional_();
    bool get_Once_Only();
    void set_Once_Only(bool value);
    float& get_Wait_Time_at_Objective();
    bool get_ReturnToHeroAfterReachingObjective();
    void set_ReturnToHeroAfterReachingObjective(bool value);
    _Script_SwGame::SwAIBuddyDroidController*& get_REF_BuddyDroid_Con();
    void* get_CurrentState();
    void* get_DesiredState();
    float& get_BDDistanceFromHero();
    float& get_BDDistanceToObjective();
    void* get_LVL_ObjectiveReached();
    float& get_HeroDistanceToObjective();
    void* get_LVL_MoveAheadStarted();
    void* get_LVL_MoveAheadAborted();
    static _Script_CoreUObject::Class* static_class();
    void Check_FollowHero_Transitions();
    void Check_WaitOnPath_Transitions();
    void UpdateVars();
    void Check_MoveToObjective_Transitions();
    void UserConstructionScript0();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay0();
    void HeroHitTrigger(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void StartTicking();
    void LVL_StartMoveAhead();
    void HeroHitCancelTrigger(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void StopTicking();
    void UnbindTriggers();
    void Return_To_Hero();
    void DismountHero();
    void ReadyToMove();
    void MoveToObjective();
    void WaitOnPath();
    void FollowHero();
    void WaitAtObjective();
    void EndMoveAhead();
    void LVL_AbortMoveAhead();
    void MoveToWaypoint();
    void DroidDestroyed(_Script_Engine::Actor* DestroyedActor);
    void ExecuteUbergraph_BP_BuddyDroid_MoveAhead(int32_t EntryPoint);
    void LVL_MoveAheadAborted__DelegateSignature();
    void LVL_MoveAheadStarted__DelegateSignature();
    void LVL_ObjectiveReached__DelegateSignature();
}; // Size: 0x410
#pragma pack(pop)
}
