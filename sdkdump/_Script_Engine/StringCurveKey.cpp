#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StringCurveKey.hpp"
float& _Script_Engine::StringCurveKey::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StringCurveKey::get_Value() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::StringCurveKey::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StringCurveKey");
    return result;
}
