#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "NavLinkRenderingComponent.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::NavLinkRenderingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavLinkRenderingComponent");
    return result;
}
