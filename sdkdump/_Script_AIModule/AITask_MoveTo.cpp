#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "AITask.hpp"
#include "AITask_MoveTo.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
void* _Script_AIModule::AITask_MoveTo::get_OnRequestFailed() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_AIModule::AITask_MoveTo::get_OnMoveFinished() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_AIModule::AITask_MoveTo::get_MoveRequest() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_AIModule::AITask_MoveTo* _Script_AIModule::AITask_MoveTo::AIMoveTo(_Script_AIModule::AIController* Controller, _Script_CoreUObject::Vector GoalLocation, _Script_Engine::Actor* GoalActor, float AcceptanceRadius, void* StopOnOverlap, void* AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::AITask_MoveTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AITask_MoveTo");
    return result;
}
