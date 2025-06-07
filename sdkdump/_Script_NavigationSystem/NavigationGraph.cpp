#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationData.hpp"
#include "NavigationGraph.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavigationGraph::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavigationGraph");
    return result;
}
