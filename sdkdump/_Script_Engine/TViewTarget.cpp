#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "PlayerState.hpp"
#include "TViewTarget.hpp"
_Script_Engine::Actor*& _Script_Engine::TViewTarget::get_Target() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::TViewTarget::get_POV() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_Engine::PlayerState*& _Script_Engine::TViewTarget::get_PlayerState() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x570);
}
_Script_CoreUObject::Class* _Script_Engine::TViewTarget::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TViewTarget");
    return result;
}
