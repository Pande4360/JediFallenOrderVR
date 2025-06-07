#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Redirector.hpp"
void* _Script_Engine::Redirector::get_OldName() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::Redirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Redirector");
    return result;
}
void* _Script_Engine::Redirector::get_NewName() {
    return (void*)((uintptr_t)this + 0x8);
}
