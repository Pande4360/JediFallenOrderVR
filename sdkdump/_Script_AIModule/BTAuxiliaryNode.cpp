#include "..\FUObjectArray.hpp"
#include "BTAuxiliaryNode.hpp"
#include "BTNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AIModule::BTAuxiliaryNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTAuxiliaryNode");
    return result;
}
