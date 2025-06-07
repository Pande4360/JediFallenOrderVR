#include "..\FUObjectArray.hpp"
#include "PawnAction.hpp"
#include "PawnAction_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Pawn.hpp"
_Script_CoreUObject::Class* _Script_AIModule::PawnAction_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.PawnAction_BlueprintBase");
    return result;
}
void _Script_AIModule::PawnAction_BlueprintBase::ActionTick(_Script_Engine::Pawn* ControlledPawn, float DeltaSeconds) {
    return;
}
void _Script_AIModule::PawnAction_BlueprintBase::ActionResume(_Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::PawnAction_BlueprintBase::ActionStart(_Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::PawnAction_BlueprintBase::ActionPause(_Script_Engine::Pawn* ControlledPawn) {
    return;
}
void _Script_AIModule::PawnAction_BlueprintBase::ActionFinished(_Script_Engine::Pawn* ControlledPawn, void* WithResult) {
    return;
}
