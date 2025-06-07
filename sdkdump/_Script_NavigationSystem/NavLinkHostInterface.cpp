#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NavLinkHostInterface.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavLinkHostInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavLinkHostInterface");
    return result;
}
