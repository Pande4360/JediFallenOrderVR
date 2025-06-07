#include "..\FUObjectArray.hpp"
#include "EnvQuery.hpp"
#include "EnvQueryRequest.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\World.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvQueryRequest");
    return result;
}
_Script_AIModule::EnvQuery*& _Script_AIModule::EnvQueryRequest::get_QueryTemplate() {
    return *(_Script_AIModule::EnvQuery**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Object*& _Script_AIModule::EnvQueryRequest::get_Owner() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x8);
}
_Script_Engine::World*& _Script_AIModule::EnvQueryRequest::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x10);
}
