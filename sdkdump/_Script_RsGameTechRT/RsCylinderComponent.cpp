#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ShapeComponent.hpp"
#include "RsCylinderComponent.hpp"
float& _Script_RsGameTechRT::RsCylinderComponent::get_CylinderRadius() {
    return *(float*)((uintptr_t)this + 0xb84);
}
float& _Script_RsGameTechRT::RsCylinderComponent::get_CylinderHalfHeight() {
    return *(float*)((uintptr_t)this + 0xb80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCylinderComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCylinderComponent");
    return result;
}
