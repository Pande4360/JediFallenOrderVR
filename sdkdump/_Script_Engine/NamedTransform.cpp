#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedTransform.hpp"
_Script_CoreUObject::Class* _Script_Engine::NamedTransform::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedTransform");
    return result;
}
void* _Script_Engine::NamedTransform::get_Value() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::NamedTransform::get_Name() {
    return (void*)((uintptr_t)this + 0x30);
}
