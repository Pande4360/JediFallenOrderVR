#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AITask.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AITask_MoveTo : public AITask {
    private: char pad_70[0xa8]; public:
    void* get_OnRequestFailed();
    void* get_OnMoveFinished();
    void* get_MoveRequest();
    static _Script_CoreUObject::Class* static_class();
    _Script_AIModule::AITask_MoveTo* AIMoveTo(_Script_AIModule::AIController* Controller, _Script_CoreUObject::Vector GoalLocation, _Script_Engine::Actor* GoalActor, float AcceptanceRadius, void* StopOnOverlap, void* AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);
}; // Size: 0x118
#pragma pack(pop)
}
