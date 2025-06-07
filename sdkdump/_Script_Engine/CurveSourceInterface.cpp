#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "CurveSourceInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::CurveSourceInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CurveSourceInterface");
    return result;
}
float _Script_Engine::CurveSourceInterface::GetCurveValue(void* CurveName) {
    return;
}
void _Script_Engine::CurveSourceInterface::GetCurves(void*& OutValues) {
    return;
}
void* _Script_Engine::CurveSourceInterface::GetBindingName() {
    return;
}
