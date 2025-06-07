#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "BasedPosition.hpp"
_Script_Engine::Actor*& _Script_Engine::BasedPosition::get_base() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::BasedPosition::get_CachedBaseLocation() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_Engine::BasedPosition::get_Position() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::BasedPosition::get_CachedBaseRotation() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::BasedPosition::get_CachedTransPosition() {
    return (void*)((uintptr_t)this + 0x2c);
}
_Script_CoreUObject::Class* _Script_Engine::BasedPosition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BasedPosition");
    return result;
}
