#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RichCurveKey.hpp"
void* _Script_Engine::RichCurveKey::get_InterpMode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::RichCurveKey::get_TangentMode() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_Engine::RichCurveKey::get_TangentWeightMode() {
    return (void*)((uintptr_t)this + 0x2);
}
float& _Script_Engine::RichCurveKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RichCurveKey::get_LeaveTangent() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::RichCurveKey::get_ArriveTangentWeight() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::RichCurveKey::get_Value() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RichCurveKey::get_ArriveTangent() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RichCurveKey::get_LeaveTangentWeight() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::RichCurveKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RichCurveKey");
    return result;
}
