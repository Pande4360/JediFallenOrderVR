#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryGenerator_ActorsOfClass.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryGenerator_ActorsOfClass::get_SearchedActorClass() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AIModule::EnvQueryGenerator_ActorsOfClass::get_GenerateOnlyActorsInRadius() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AIModule::EnvQueryGenerator_ActorsOfClass::get_SearchRadius() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_AIModule::EnvQueryGenerator_ActorsOfClass::get_SearchCenter() {
    return (void*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_ActorsOfClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass");
    return result;
}
