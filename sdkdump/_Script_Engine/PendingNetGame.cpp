#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "NetDriver.hpp"
#include "PendingNetGame.hpp"
_Script_Engine::NetDriver*& _Script_Engine::PendingNetGame::get_NetDriver() {
    return *(_Script_Engine::NetDriver**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_Engine::PendingNetGame::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PendingNetGame");
    return result;
}
