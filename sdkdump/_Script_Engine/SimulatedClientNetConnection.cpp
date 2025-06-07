#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NetConnection.hpp"
#include "SimulatedClientNetConnection.hpp"
_Script_CoreUObject::Class* _Script_Engine::SimulatedClientNetConnection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SimulatedClientNetConnection");
    return result;
}
