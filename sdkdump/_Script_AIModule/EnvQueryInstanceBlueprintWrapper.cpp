#include "..\FUObjectArray.hpp"
#include "EnvQueryInstanceBlueprintWrapper.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
int32_t& _Script_AIModule::EnvQueryInstanceBlueprintWrapper::get_QueryID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_AIModule::EnvQueryInstanceBlueprintWrapper::get_ItemType() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_AIModule::EnvQueryInstanceBlueprintWrapper::GetResultsAsLocations() {
    return;
}
int32_t& _Script_AIModule::EnvQueryInstanceBlueprintWrapper::get_OptionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
void* _Script_AIModule::EnvQueryInstanceBlueprintWrapper::get_OnQueryFinishedEvent() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_AIModule::EnvQueryInstanceBlueprintWrapper::SetNamedParam(void* ParamName, float Value) {
    return;
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryInstanceBlueprintWrapper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper");
    return result;
}
void* _Script_AIModule::EnvQueryInstanceBlueprintWrapper::GetResultsAsActors() {
    return;
}
float _Script_AIModule::EnvQueryInstanceBlueprintWrapper::GetItemScore(int32_t ItemIndex) {
    return;
}
