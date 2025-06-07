#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "NavigationGraphNode.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationGraphNode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationGraphNode");
    return result;
}
