#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator_IsAtLocation.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckPOIUserInPosition.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckPOIUserInPosition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckPOIUserInPosition");
    return result;
}
