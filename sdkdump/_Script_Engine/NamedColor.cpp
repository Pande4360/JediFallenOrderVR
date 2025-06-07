#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedColor.hpp"
void* _Script_Engine::NamedColor::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NamedColor::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::NamedColor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedColor");
    return result;
}
