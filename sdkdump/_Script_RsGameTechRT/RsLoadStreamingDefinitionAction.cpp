#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintAsyncActionBase.hpp"
#include "..\_Script_Engine\World.hpp"
#include "RsLoadStreamingDefinitionAction.hpp"
_Script_Engine::World*& _Script_RsGameTechRT::RsLoadStreamingDefinitionAction::get_World() {
    return *(_Script_Engine::World**)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsLoadStreamingDefinitionAction::get_LoadedStreamingDefinitions() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsLoadStreamingDefinitionAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsLoadStreamingDefinitionAction");
    return result;
}
_Script_RsGameTechRT::RsLoadStreamingDefinitionAction* _Script_RsGameTechRT::RsLoadStreamingDefinitionAction::LoadStreamingDefinitions(_Script_CoreUObject::Object* WorldContextObject, void* InStreamingDefinitionPaths) {
    return;
}
