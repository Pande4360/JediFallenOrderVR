#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "NavLinkComponent.hpp"
void* _Script_NavigationSystem::NavLinkComponent::get_Links() {
    return (void*)((uintptr_t)this + 0xb30);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::NavLinkComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.NavLinkComponent");
    return result;
}
