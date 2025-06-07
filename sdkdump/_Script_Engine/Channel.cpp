#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Channel.hpp"
#include "NetConnection.hpp"
_Script_Engine::NetConnection*& _Script_Engine::Channel::get_Connection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::Channel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Channel");
    return result;
}
