#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveBase.hpp"
#include "CurveFloat.hpp"
void* _Script_Engine::CurveFloat::get_FloatCurve() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::CurveFloat::get_bIsEventCurve() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_Engine::CurveFloat::set_bIsEventCurve(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::CurveFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveFloat");
    return result;
}
float _Script_Engine::CurveFloat::GetFloatValue(float InTime) {
    return;
}
float _Script_Engine::CurveFloat::FindTimeValue(float Value) {
    return;
}
