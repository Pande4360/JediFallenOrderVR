#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NamedNetDriver.hpp"
#include "NetDriver.hpp"
_Script_Engine::NetDriver*& _Script_Engine::NamedNetDriver::get_NetDriver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::NamedNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NamedNetDriver");
    return result;
}
