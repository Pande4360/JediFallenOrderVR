#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurvePointVector.hpp"
float& _Script_CoreUObject::InterpCurvePointVector::get_InVal() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::InterpCurvePointVector::get_OutVal() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_CoreUObject::InterpCurvePointVector::get_ArriveTangent() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_CoreUObject::InterpCurvePointVector::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_CoreUObject::InterpCurvePointVector::get_LeaveTangent() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurvePointVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurvePointVector");
    return result;
}
