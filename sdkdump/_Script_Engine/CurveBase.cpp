#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CurveBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::CurveBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveBase");
    return result;
}
void _Script_Engine::CurveBase::GetValueRange(float& MinValue, float& MaxValue) {
    return;
}
void _Script_Engine::CurveBase::GetTimeRange(float& MinTime, float& MaxTime) {
    return;
}
