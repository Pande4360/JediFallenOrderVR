#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsPhysicalAnimationBaseComponent.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsPhysicalAnimationBaseComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsPhysicalAnimationBaseComponent");
    return result;
}
