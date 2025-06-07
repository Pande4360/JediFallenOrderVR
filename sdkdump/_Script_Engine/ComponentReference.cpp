#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "ComponentReference.hpp"
_Script_Engine::Actor*& _Script_Engine::ComponentReference::get_OtherActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ComponentReference::get_ComponentProperty() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ComponentReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ComponentReference");
    return result;
}
