#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurvePointVector2D.hpp"
float& _Script_CoreUObject::InterpCurvePointVector2D::get_InVal() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::InterpCurvePointVector2D::get_OutVal() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_CoreUObject::InterpCurvePointVector2D::get_ArriveTangent() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_CoreUObject::InterpCurvePointVector2D::get_LeaveTangent() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_CoreUObject::InterpCurvePointVector2D::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurvePointVector2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurvePointVector2D");
    return result;
}
