#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\AIController.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIControllerBase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIControllerBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIControllerBase");
    return result;
}
