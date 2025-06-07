#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsAIEncounterGroupRenderComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIEncounterGroupRenderComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIEncounterGroupRenderComponent");
    return result;
}
