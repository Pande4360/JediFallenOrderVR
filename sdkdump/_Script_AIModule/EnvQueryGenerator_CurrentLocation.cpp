#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryGenerator_CurrentLocation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_CurrentLocation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_CurrentLocation");
    return result;
}
void* _Script_AIModule::EnvQueryGenerator_CurrentLocation::get_QueryContext() {
    return (void*)((uintptr_t)this + 0x50);
}
