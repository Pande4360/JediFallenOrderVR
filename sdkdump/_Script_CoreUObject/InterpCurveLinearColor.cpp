#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "InterpCurveLinearColor.hpp"
void _Script_CoreUObject::InterpCurveLinearColor::set_bIsLooped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_CoreUObject::InterpCurveLinearColor::get_Points() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_CoreUObject::InterpCurveLinearColor::get_bIsLooped() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_CoreUObject::InterpCurveLinearColor::get_LoopKeyOffset() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_CoreUObject::InterpCurveLinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.InterpCurveLinearColor");
    return result;
}
