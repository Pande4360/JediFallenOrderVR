#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_GameplayTasks\GameplayResourceSet.hpp"
namespace _Script_AIModule {
struct PathFollowingComponent;
}
namespace _Script_AIModule {
struct BrainComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIPerceptionComponent;
}
namespace _Script_AIModule {
struct PawnActionsComponent;
}
namespace _Script_AIModule {
struct BlackboardData;
}
namespace _Script_GameplayTasks {
struct GameplayTasksComponent;
}
namespace _Script_AIModule {
struct BlackboardComponent;
}
namespace _Script_AIModule {
struct BehaviorTree;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AIController : public _Script_Engine::Controller {
    private: char pad_3e0[0xa0]; public:
    bool get_bStopAILogicOnUnposses();
    void set_bStopAILogicOnUnposses(bool value);
    bool get_bLOSflag();
    void set_bLOSflag(bool value);
    bool get_bSkipExtraLOSChecks();
    void set_bSkipExtraLOSChecks(bool value);
    bool get_bAllowStrafe();
    void set_bAllowStrafe(bool value);
    bool get_bWantsPlayerState();
    void set_bWantsPlayerState(bool value);
    bool get_bSetControlRotationFromPawnOrientation();
    void set_bSetControlRotationFromPawnOrientation(bool value);
    _Script_AIModule::PathFollowingComponent*& get_PathFollowingComponent();
    _Script_AIModule::BrainComponent*& get_BrainComponent();
    _Script_AIModule::AIPerceptionComponent*& get_PerceptionComponent();
    _Script_AIModule::PawnActionsComponent*& get_ActionsComp();
    _Script_AIModule::BlackboardComponent*& get_Blackboard();
    _Script_GameplayTasks::GameplayTasksComponent*& get_CachedGameplayTasksComponent();
    void* get_DefaultNavigationFilterClass();
    void* get_DefaultPathFollowingClass();
    bool get_bUseOverrideNavlinkAcceptanceRadius();
    void set_bUseOverrideNavlinkAcceptanceRadius(bool value);
    float& get_OverrideNavlinkAcceptanceRadius();
    void* get_ReceiveMoveCompleted();
    static _Script_CoreUObject::Class* static_class();
    bool UseBlackboard(_Script_AIModule::BlackboardData* BlackboardAsset, _Script_AIModule::BlackboardComponent*& BlackboardComponent);
    void UnclaimTaskResource(void* ResourceClass);
    void SetPathFollowingComponent(_Script_AIModule::PathFollowingComponent* NewPFComponent);
    void SetMoveBlockDetection(bool bEnable);
    bool RunBehaviorTree(_Script_AIModule::BehaviorTree* BTAsset);
    void OnUsingBlackBoard(_Script_AIModule::BlackboardComponent* BlackboardComp, _Script_AIModule::BlackboardData* BlackboardAsset);
    void OnUnpossess(_Script_Engine::Pawn* UnpossessedPawn);
    void OnPossess(_Script_Engine::Pawn* PossessedPawn);
    void OnGameplayTaskResourcesClaimed(_Script_GameplayTasks::GameplayResourceSet NewlyClaimed, _Script_GameplayTasks::GameplayResourceSet FreshlyReleased);
    void* MoveToLocation(_Script_CoreUObject::Vector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, void* FilterClass, bool bAllowPartialPath);
    void* MoveToActor(_Script_Engine::Actor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, void* FilterClass, bool bAllowPartialPath);
    void K2_SetFocus(_Script_Engine::Actor* NewFocus);
    void K2_SetFocalPoint(_Script_CoreUObject::Vector FP);
    void K2_ClearFocus();
    bool HasPartialPath();
    _Script_AIModule::PathFollowingComponent* GetPathFollowingComponent();
    void* GetMoveStatus();
    _Script_CoreUObject::Vector GetImmediateMoveDestination();
    _Script_Engine::Actor* GetFocusActor();
    _Script_CoreUObject::Vector GetFocalPointOnActor(_Script_Engine::Actor* Actor);
    _Script_CoreUObject::Vector GetFocalPoint();
    _Script_AIModule::AIPerceptionComponent* GetAIPerceptionComponent();
    void ClaimTaskResource(void* ResourceClass);
}; // Size: 0x480
#pragma pack(pop)
}
