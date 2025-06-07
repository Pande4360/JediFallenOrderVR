#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "CurveEdEntry.hpp"
void* _Script_Engine::CurveEdEntry::get_CurveName() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Object*& _Script_Engine::CurveEdEntry::get_CurveObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CurveEdEntry::get_CurveColor() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::CurveEdEntry::get_ClampLow() {
    return *(float*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::CurveEdEntry::get_bHideCurve() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
int32_t& _Script_Engine::CurveEdEntry::get_bColorCurve() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
int32_t& _Script_Engine::CurveEdEntry::get_bFloatingPointColorCurve() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::CurveEdEntry::get_bClamp() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
float& _Script_Engine::CurveEdEntry::get_ClampHigh() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_CoreUObject::Class* _Script_Engine::CurveEdEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CurveEdEntry");
    return result;
}
