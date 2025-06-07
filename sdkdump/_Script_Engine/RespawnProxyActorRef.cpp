#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "RespawnProxyActorRef.hpp"
_Script_CoreUObject::Class* _Script_Engine::RespawnProxyActorRef::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RespawnProxyActorRef");
    return result;
}
