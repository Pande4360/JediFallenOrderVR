#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ChildConnection.hpp"
#include "NetConnection.hpp"
_Script_Engine::NetConnection*& _Script_Engine::ChildConnection::get_Parent() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x1918);
}
_Script_CoreUObject::Class* _Script_Engine::ChildConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ChildConnection");
    return result;
}
