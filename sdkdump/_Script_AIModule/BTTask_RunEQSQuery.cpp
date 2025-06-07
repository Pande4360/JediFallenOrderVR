#include "..\FUObjectArray.hpp"
#include "BTTask_BlackboardBase.hpp"
#include "BTTask_RunEQSQuery.hpp"
#include "EnvQuery.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTTask_RunEQSQuery::get_EQSRequest() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_AIModule::EnvQuery*& _Script_AIModule::BTTask_RunEQSQuery::get_QueryTemplate() {
    return *(_Script_AIModule::EnvQuery**)((uintptr_t)this + 0x98);
}
void* _Script_AIModule::BTTask_RunEQSQuery::get_QueryParams() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_AIModule::BTTask_RunEQSQuery::get_QueryConfig() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_AIModule::BTTask_RunEQSQuery::get_RunMode() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_AIModule::BTTask_RunEQSQuery::get_EQSQueryBlackboardKey() {
    return (void*)((uintptr_t)this + 0xc8);
}
bool _Script_AIModule::BTTask_RunEQSQuery::get_bUseBBKey() {
    return (*(uint8_t*)((uintptr_t)this + 0xf0 + 0)) & 1 != 0;
}
void _Script_AIModule::BTTask_RunEQSQuery::set_bUseBBKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xf0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xf0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_RunEQSQuery::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_RunEQSQuery");
    return result;
}
