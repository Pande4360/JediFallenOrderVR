#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PawnAction.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct PawnAction_Move : public PawnAction {
    private: char pad_98[0x50]; public:
    _Script_Engine::Actor*& get_GoalActor();
    void* get_GoalLocation();
    float& get_AcceptableRadius();
    void* get_FilterClass();
    bool get_bAllowStrafe();
    void set_bAllowStrafe(bool value);
    bool get_bFinishOnOverlap();
    void set_bFinishOnOverlap(bool value);
    bool get_bUsePathfinding();
    void set_bUsePathfinding(bool value);
    bool get_bAllowPartialPath();
    void set_bAllowPartialPath(bool value);
    bool get_bProjectGoalToNavigation();
    void set_bProjectGoalToNavigation(bool value);
    bool get_bUpdatePathToGoal();
    void set_bUpdatePathToGoal(bool value);
    bool get_bAbortChildActionOnPathChange();
    void set_bAbortChildActionOnPathChange(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe8
#pragma pack(pop)
}
