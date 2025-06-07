#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "IndexedCurve.hpp"
#include "StringCurve.hpp"
void* _Script_Engine::StringCurve::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::StringCurve::get_Keys() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_CoreUObject::Class* _Script_Engine::StringCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StringCurve");
    return result;
}
