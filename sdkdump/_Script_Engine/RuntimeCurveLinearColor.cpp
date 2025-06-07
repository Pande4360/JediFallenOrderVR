#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CurveLinearColor.hpp"
#include "RuntimeCurveLinearColor.hpp"
void* _Script_Engine::RuntimeCurveLinearColor::get_ColorCurves() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::CurveLinearColor*& _Script_Engine::RuntimeCurveLinearColor::get_ExternalCurve() {
    return *(_Script_Engine::CurveLinearColor**)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_Engine::RuntimeCurveLinearColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RuntimeCurveLinearColor");
    return result;
}
