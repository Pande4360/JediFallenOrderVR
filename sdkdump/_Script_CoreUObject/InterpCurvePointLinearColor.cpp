#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurvePointLinearColor.hpp"
float& _Script_CoreUObject::InterpCurvePointLinearColor::get_InVal() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::InterpCurvePointLinearColor::get_OutVal() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurvePointLinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurvePointLinearColor");
    return result;
}
void* _Script_CoreUObject::InterpCurvePointLinearColor::get_ArriveTangent() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_CoreUObject::InterpCurvePointLinearColor::get_LeaveTangent() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_CoreUObject::InterpCurvePointLinearColor::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x34);
}
