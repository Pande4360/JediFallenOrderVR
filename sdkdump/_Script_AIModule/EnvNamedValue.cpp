#include "..\FUObjectArray.hpp"
#include "EnvNamedValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::EnvNamedValue::get_ParamName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_AIModule::EnvNamedValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.EnvNamedValue");
    return result;
}
float& _Script_AIModule::EnvNamedValue::get_Value() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_AIModule::EnvNamedValue::get_ParamType() {
    return (void*)((uintptr_t)this + 0x8);
}
