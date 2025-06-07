#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StructRedirect.hpp"
void* _Script_Engine::StructRedirect::get_OldStructName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::StructRedirect::get_NewStructName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::StructRedirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StructRedirect");
    return result;
}
