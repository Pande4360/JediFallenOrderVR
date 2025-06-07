#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AlphaBlend.hpp"
#include "CurveFloat.hpp"
void* _Script_Engine::AlphaBlend::get_BlendOption() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_Engine::CurveFloat*& _Script_Engine::AlphaBlend::get_CustomCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x8);
}
float& _Script_Engine::AlphaBlend::get_BlendTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::AlphaBlend::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AlphaBlend");
    return result;
}
