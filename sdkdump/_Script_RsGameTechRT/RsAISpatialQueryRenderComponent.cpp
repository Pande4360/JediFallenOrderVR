#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsAISpatialQueryRenderComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpatialQueryRenderComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISpatialQueryRenderComponent");
    return result;
}
