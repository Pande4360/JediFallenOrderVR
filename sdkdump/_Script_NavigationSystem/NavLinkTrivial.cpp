#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NavLinkDefinition.hpp"
#include "NavLinkTrivial.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavLinkTrivial::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavLinkTrivial");
    return result;
}
