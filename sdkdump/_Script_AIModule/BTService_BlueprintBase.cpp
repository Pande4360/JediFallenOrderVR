#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "BTService.hpp"
#include "BTService_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_Engine::Actor*& _Script_AIModule::BTService_BlueprintBase::get_ActorOwner() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x78);
}
_Script_AIModule::AIController*& _Script_AIModule::BTService_BlueprintBase::get_AIOwner() {
    return *(_Script_AIModule::AIController**)((uintptr_t)this + 0x70);
}
bool _Script_AIModule::BTService_BlueprintBase::get_bShowPropertyDetails() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_AIModule::BTService_BlueprintBase::set_bShowEventDetails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_AIModule::BTService_BlueprintBase::set_bShowPropertyDetails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AIModule::BTService_BlueprintBase::get_bShowEventDetails() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_AIModule::BTService_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTService_BlueprintBase");
    return result;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveTickAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveTick(_Script_Engine::Actor* OwnerActor, float DeltaSeconds) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveSearchStartAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveSearchStart(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveDeactivationAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveDeactivation(_Script_Engine::Actor* OwnerActor) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveActivationAI(_Script_AIModule::AIController* OwnerController, _Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::BTService_BlueprintBase::ReceiveActivation(_Script_Engine::Actor* OwnerActor) {
    return;
}
bool _Script_AIModule::BTService_BlueprintBase::IsServiceActive() {
    return;
}
