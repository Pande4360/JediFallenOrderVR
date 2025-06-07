#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HandlerComponentFactory.hpp"
_Script_CoreUObject::Class* _Script_PacketHandler::HandlerComponentFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PacketHandler.HandlerComponentFactory");
    return result;
}
