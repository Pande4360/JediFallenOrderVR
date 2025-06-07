#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "BTDecorator.hpp"
#include "BTDecorator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_AIModule::AIController*& _Script_AIModule::BTDecorator_BlueprintBase::get_AIOwner() {
    return *(_Script_AIModule::AIController**)((uintptr_t)this + 0x68);
}
void _Script_AIModule::BTDecorator_BlueprintBase::set_bCheckConditionOnlyBlackBoardChanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::Actor*& _Script_AIModule::BTDecorator_BlueprintBase::get_ActorOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x70);
}
void* _Script_AIModule::BTDecorator_BlueprintBase::get_ObservedKeyNames() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_AIModule::BTDecorator_BlueprintBase::set_bShowPropertyDetails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTDecorator_BlueprintBase::get_bShowPropertyDetails() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
bool _Script_AIModule::BTDecorator_BlueprintBase::get_bCheckConditionOnlyBlackBoardChanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 2 != 0;
}
bool _Script_AIModule::BTDecorator_BlueprintBase::IsDecoratorExecutionActive() {
    return;
}
bool _Script_AIModule::BTDecorator_BlueprintBase::get_bIsObservingBB() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 4 != 0;
}
void _Script_AIModule::BTDecorator_BlueprintBase::set_bIsObservingBB(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecorator_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTDecorator_BlueprintBase");
    return result;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveTickAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveTick(_Script_Engine::Actor* OwnerActor, float DeltaSeconds) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveObserverDeactivated(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveObserverActivatedAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveObserverActivated(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveExecutionStartAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveExecutionStart(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveExecutionFinishAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, void* NodeResult) {
    return;
}
void _Script_AIModule::BTDecorator_BlueprintBase::ReceiveExecutionFinish(_Script_Engine::Actor* OwnerActor, void* NodeResult) {
    return;
}
bool _Script_AIModule::BTDecorator_BlueprintBase::PerformConditionCheckAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
bool _Script_AIModule::BTDecorator_BlueprintBase::PerformConditionCheck(_Script_Engine::Actor* OwnerActor) {
    return;
}
bool _Script_AIModule::BTDecorator_BlueprintBase::IsDecoratorObserverActive() {
    return;
}
