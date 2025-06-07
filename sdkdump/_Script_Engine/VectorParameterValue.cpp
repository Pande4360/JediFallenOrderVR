#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VectorParameterValue.hpp"
void* _Script_Engine::VectorParameterValue::get_ParameterValue() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::VectorParameterValue::get_ParameterInfo() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::VectorParameterValue::get_ExpressionGUID() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Engine::VectorParameterValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VectorParameterValue");
    return result;
}
