#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurvePointQuat.hpp"
void* _Script_CoreUObject::InterpCurvePointQuat::get_LeaveTangent() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_CoreUObject::InterpCurvePointQuat::get_InVal() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::InterpCurvePointQuat::get_OutVal() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_CoreUObject::InterpCurvePointQuat::get_ArriveTangent() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_CoreUObject::InterpCurvePointQuat::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurvePointQuat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurvePointQuat");
    return result;
}
