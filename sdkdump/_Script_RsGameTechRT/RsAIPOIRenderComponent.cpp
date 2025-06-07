#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsAIPOIRenderComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPOIRenderComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIPOIRenderComponent");
    return result;
}
