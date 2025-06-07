#include "..\FUObjectArray.hpp"
#include "AIController.hpp"
#include "AISense.hpp"
#include "AISense_Prediction.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
void* _Script_AIModule::AISense_Prediction::get_RegisteredEvents() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_AIModule::AISense_Prediction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.AISense_Prediction");
    return result;
}
void _Script_AIModule::AISense_Prediction::RequestPawnPredictionEvent(_Script_Engine::Pawn* Requestor, _Script_Engine::Actor* PredictedActor, float PredictionTime) {
    return;
}
void _Script_AIModule::AISense_Prediction::RequestControllerPredictionEvent(_Script_AIModule::AIController* Requestor, _Script_Engine::Actor* PredictedActor, float PredictionTime) {
    return;
}
