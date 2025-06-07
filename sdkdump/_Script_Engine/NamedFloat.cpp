#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedFloat.hpp"
float& _Script_Engine::NamedFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NamedFloat::get_Name() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::NamedFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedFloat");
    return result;
}
