#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurvePointFloat.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurvePointFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurvePointFloat");
    return result;
}
float& _Script_CoreUObject::InterpCurvePointFloat::get_InVal() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::InterpCurvePointFloat::get_OutVal() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_CoreUObject::InterpCurvePointFloat::get_ArriveTangent() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_CoreUObject::InterpCurvePointFloat::get_LeaveTangent() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_CoreUObject::InterpCurvePointFloat::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x10);
}
