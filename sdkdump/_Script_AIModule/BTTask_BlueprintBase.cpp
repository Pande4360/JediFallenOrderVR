#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_AIModule::AIController*& _Script_AIModule::BTTask_BlueprintBase::get_AIOwner() {
    return *(_Script_AIModule::AIController**)((uintptr_t)this + 0x70);
}
_Script_Engine::Actor*& _Script_AIModule::BTTask_BlueprintBase::get_ActorOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x78);
}
bool _Script_AIModule::BTTask_BlueprintBase::get_bShowPropertyDetails() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void _Script_AIModule::BTTask_BlueprintBase::set_bShowPropertyDetails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_AIModule::BTTask_BlueprintBase::SetFinishOnMessageWithId(void* MessageName, int32_t RequestID) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_BlueprintBase");
    return result;
}
void _Script_AIModule::BTTask_BlueprintBase::SetFinishOnMessage(void* MessageName) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::ReceiveTickAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::ReceiveTick(_Script_Engine::Actor* OwnerActor, float DeltaSeconds) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::ReceiveExecuteAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::ReceiveExecute(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::ReceiveAbortAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::ReceiveAbort(_Script_Engine::Actor* OwnerActor) {
    return;
}
bool _Script_AIModule::BTTask_BlueprintBase::IsTaskExecuting() {
    return;
}
bool _Script_AIModule::BTTask_BlueprintBase::IsTaskAborting() {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::FinishExecute(bool bSuccess) {
    return;
}
void _Script_AIModule::BTTask_BlueprintBase::FinishAbort() {
    return;
}
