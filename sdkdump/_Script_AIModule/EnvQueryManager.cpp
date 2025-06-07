#include "..\FUObjectArray.hpp"
#include "EnvQuery.hpp"
#include "EnvQueryInstanceBlueprintWrapper.hpp"
#include "EnvQueryManager.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
void* _Script_AIModule::EnvQueryManager::get_GCShieldedWrappers() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_AIModule::EnvQueryManager::get_InstanceCache() {
    return (void*)((uintptr_t)this + 0xa8);
}
void* _Script_AIModule::EnvQueryManager::get_LocalContexts() {
    return (void*)((uintptr_t)this + 0xb8);
}
float& _Script_AIModule::EnvQueryManager::get_MaxAllowedTestingTime() {
    return *(float*)((uintptr_t)this + 0x12c);
}
bool _Script_AIModule::EnvQueryManager::get_bTestQueriesUsingBreadth() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
void _Script_AIModule::EnvQueryManager::set_bTestQueriesUsingBreadth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
double& _Script_AIModule::EnvQueryManager::get_QueryCountWarningInterval() {
    return *(double*)((uintptr_t)this + 0x138);
}
int32_t& _Script_AIModule::EnvQueryManager::get_QueryCountWarningThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x134);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.EnvQueryManager");
    return result;
}
_Script_AIModule::EnvQueryInstanceBlueprintWrapper* _Script_AIModule::EnvQueryManager::RunEQSQuery(_Script_CoreUObject::Object* WorldContextObject, _Script_AIModule::EnvQuery* QueryTemplate, _Script_CoreUObject::Object* Querier, void* RunMode, void* WrapperClass) {
    return;
}
