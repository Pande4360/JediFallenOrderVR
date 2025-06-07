#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_NavigationSystem\NavModifierComponent.hpp"
#include "RsNavModifierComponent.hpp"
void* _Script_RsGameTechRT::RsNavModifierComponent::get_NavModifierPrimitives() {
    return (void*)((uintptr_t)this + 0x1c8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNavModifierComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNavModifierComponent");
    return result;
}
void _Script_RsGameTechRT::RsNavModifierComponent::AddNavModifierPrimitives(void* InNavModifierPrimitives) {
    return;
}
