#include "..\FUObjectArray.hpp"
#include "AIPredictionEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_AIModule::AIPredictionEvent::get_Requestor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
_Script_Engine::Actor*& _Script_AIModule::AIPredictionEvent::get_PredictedActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AIModule::AIPredictionEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIPredictionEvent");
    return result;
}
