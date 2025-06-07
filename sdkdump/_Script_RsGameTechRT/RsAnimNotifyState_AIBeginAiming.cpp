#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "RsAnimNotifyState_AIBeginAiming.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_AIBeginAiming::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_AIBeginAiming");
    return result;
}
