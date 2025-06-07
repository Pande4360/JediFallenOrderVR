#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CapsuleComponent.hpp"
#include "RsActorRootComponent.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsActorRootComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsActorRootComponent");
    return result;
}
