#include "..\FUObjectArray.hpp"
#include "EnvQueryGenerator.hpp"
#include "EnvQueryGenerator_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryGenerator_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryGenerator_BlueprintBase");
    return result;
}
void* _Script_AIModule::EnvQueryGenerator_BlueprintBase::get_GeneratorsActionDescription() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_AIModule::EnvQueryGenerator_BlueprintBase::get_Context() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_AIModule::EnvQueryGenerator_BlueprintBase::DoItemGeneration(void*& ContextLocations) {
    return;
}
void* _Script_AIModule::EnvQueryGenerator_BlueprintBase::get_GeneratedItemType() {
    return (void*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Object* _Script_AIModule::EnvQueryGenerator_BlueprintBase::GetQuerier() {
    return;
}
void _Script_AIModule::EnvQueryGenerator_BlueprintBase::AddGeneratedVector(_Script_CoreUObject::Vector GeneratedVector) {
    return;
}
void _Script_AIModule::EnvQueryGenerator_BlueprintBase::AddGeneratedActor(_Script_Engine::Actor* GeneratedActor) {
    return;
}
