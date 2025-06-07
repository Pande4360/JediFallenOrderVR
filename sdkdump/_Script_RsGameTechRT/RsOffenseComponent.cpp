#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "RsFireProjectileParameter.hpp"
#include "RsOffenseComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsOffenseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsOffenseComponent");
    return result;
}
void _Script_RsGameTechRT::RsOffenseComponent::OnNotifiedToFireProjectile(_Script_Engine::AnimSequenceBase* Animation, _Script_RsGameTechRT::RsFireProjectileParameter FireParam) {
    return;
}
