#include "..\FUObjectArray.hpp"
#include "EnvQueryResult.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvQueryResult::get_ItemType() {
    return (void*)((uintptr_t)this + 0x10);
}
int32_t& _Script_AIModule::EnvQueryResult::get_OptionIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_AIModule::EnvQueryResult::get_QueryID() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvQueryResult::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvQueryResult");
    return result;
}
