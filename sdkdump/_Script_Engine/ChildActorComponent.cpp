#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "ChildActorComponent.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::ChildActorComponent::get_ChildActorClass() {
    return (void*)((uintptr_t)this + 0x2c8);
}
_Script_Engine::Actor*& _Script_Engine::ChildActorComponent::get_ChildActor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Script_Engine::ChildActorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ChildActorComponent");
    return result;
}
_Script_Engine::Actor*& _Script_Engine::ChildActorComponent::get_ChildActorTemplate() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2d8);
}
void _Script_Engine::ChildActorComponent::SetChildActorClass(void* InClass) {
    return;
}
