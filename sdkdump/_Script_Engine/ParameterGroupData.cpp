#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParameterGroupData.hpp"
void* _Script_Engine::ParameterGroupData::get_GroupName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::ParameterGroupData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ParameterGroupData");
    return result;
}
int32_t& _Script_Engine::ParameterGroupData::get_GroupSortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
