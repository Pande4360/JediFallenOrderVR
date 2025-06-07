#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineHandlerComponentFactory.hpp"
#include "..\_Script_PacketHandler\HandlerComponentFactory.hpp"
_Script_CoreUObject::Class* _Script_Engine::EngineHandlerComponentFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.EngineHandlerComponentFactory");
    return result;
}
