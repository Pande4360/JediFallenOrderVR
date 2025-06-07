#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "RsAICharacterSpawnerRenderComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAICharacterSpawnerRenderComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAICharacterSpawnerRenderComponent");
    return result;
}
