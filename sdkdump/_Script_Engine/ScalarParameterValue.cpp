#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScalarParameterValue.hpp"
void* _Script_Engine::ScalarParameterValue::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ScalarParameterValue::get_ParameterValue() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ScalarParameterValue::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::ScalarParameterValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ScalarParameterValue");
    return result;
}
