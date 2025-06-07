#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedVector.hpp"
void* _Script_Engine::NamedVector::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NamedVector::get_Name() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::NamedVector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedVector");
    return result;
}
