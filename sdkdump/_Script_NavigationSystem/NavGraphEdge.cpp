#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavGraphEdge.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavGraphEdge::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.NavGraphEdge");
    return result;
}
