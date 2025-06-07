#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TimeStretchCurve.hpp"
float& _Script_Engine::TimeStretchCurve::get_SamplingRate() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::TimeStretchCurve::get_CurveValueMinPrecision() {
    return *(float*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::TimeStretchCurve::get_Markers() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::TimeStretchCurve::get_Sum_dT_i_by_C_i() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::TimeStretchCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimeStretchCurve");
    return result;
}
