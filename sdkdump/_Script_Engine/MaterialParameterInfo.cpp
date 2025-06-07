#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MaterialParameterInfo.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialParameterInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MaterialParameterInfo");
    return result;
}
void* _Script_Engine::MaterialParameterInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::MaterialParameterInfo::get_Index() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::MaterialParameterInfo::get_Association() {
    return (void*)((uintptr_t)this + 0x8);
}
