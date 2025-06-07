#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_NotifyPOIUserInPoisition.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_NotifyPOIUserInPoisition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_NotifyPOIUserInPoisition");
    return result;
}
