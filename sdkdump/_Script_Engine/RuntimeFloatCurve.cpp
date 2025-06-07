#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveFloat.hpp"
#include "RuntimeFloatCurve.hpp"
void* _Script_Engine::RuntimeFloatCurve::get_EditorCurveData() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::CurveFloat*& _Script_Engine::RuntimeFloatCurve::get_ExternalCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_Engine::RuntimeFloatCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RuntimeFloatCurve");
    return result;
}
