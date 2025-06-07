#include "..\FUObjectArray.hpp"
#include "AIMoveRequest.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_Engine::Actor*& _Script_AIModule::AIMoveRequest::get_GoalActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::AIMoveRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIMoveRequest");
    return result;
}
