#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "ActorChannel.hpp"
#include "Channel.hpp"
_Script_Engine::Actor*& _Script_Engine::ActorChannel::get_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x68);
}
void* _Script_Engine::ActorChannel::get_CreateSubObjects() {
    return (void*)((uintptr_t)this + 0x150);
}
_Script_CoreUObject::Class* _Script_Engine::ActorChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ActorChannel");
    return result;
}
