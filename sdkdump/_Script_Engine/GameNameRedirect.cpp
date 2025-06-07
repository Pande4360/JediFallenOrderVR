#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameNameRedirect.hpp"
void* _Script_Engine::GameNameRedirect::get_OldGameName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::GameNameRedirect::get_NewGameName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::GameNameRedirect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GameNameRedirect");
    return result;
}
