#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedCurveValue.hpp"
void* _Script_Engine::NamedCurveValue::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::NamedCurveValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedCurveValue");
    return result;
}
float& _Script_Engine::NamedCurveValue::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
