#include "..\FUObjectArray.hpp"
#include "EnvQueryContext.hpp"
#include "EnvQueryContext_BlueprintBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryContext_BlueprintBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryContext_BlueprintBase");
    return result;
}
void _Script_AIModule::EnvQueryContext_BlueprintBase::ProvideSingleLocation(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, _Script_CoreUObject::Vector& ResultingLocation) {
    return;
}
void _Script_AIModule::EnvQueryContext_BlueprintBase::ProvideSingleActor(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, _Script_Engine::Actor*& ResultingActor) {
    return;
}
void _Script_AIModule::EnvQueryContext_BlueprintBase::ProvideLocationsSet(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, void*& ResultingLocationSet) {
    return;
}
void _Script_AIModule::EnvQueryContext_BlueprintBase::ProvideActorsSet(_Script_CoreUObject::Object* QuerierObject, _Script_Engine::Actor* QuerierActor, void*& ResultingActorsSet) {
    return;
}
