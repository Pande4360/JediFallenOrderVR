#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurvePointTwoVectors.hpp"
float& _Script_CoreUObject::InterpCurvePointTwoVectors::get_InVal() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::InterpCurvePointTwoVectors::get_ArriveTangent() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_CoreUObject::InterpCurvePointTwoVectors::get_OutVal() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_CoreUObject::InterpCurvePointTwoVectors::get_LeaveTangent() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_CoreUObject::InterpCurvePointTwoVectors::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurvePointTwoVectors::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurvePointTwoVectors");
    return result;
}
