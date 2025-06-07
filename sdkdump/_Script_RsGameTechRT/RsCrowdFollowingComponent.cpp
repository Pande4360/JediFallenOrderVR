#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\CrowdFollowingComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCrowdFollowingComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsCrowdFollowingComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsCrowdFollowingComponent");
    return result;
}
