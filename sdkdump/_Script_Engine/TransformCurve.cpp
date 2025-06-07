#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCurveBase.hpp"
#include "TransformCurve.hpp"
void* _Script_Engine::TransformCurve::get_TranslationCurve() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::TransformCurve::get_RotationCurve() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_Engine::TransformCurve::get_ScaleCurve() {
    return (void*)((uintptr_t)this + 0x300);
}
_Script_CoreUObject::Class* _Script_Engine::TransformCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TransformCurve");
    return result;
}
