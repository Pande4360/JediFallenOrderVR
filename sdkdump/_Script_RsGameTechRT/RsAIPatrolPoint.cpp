#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsAIPatrolPoint.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPatrolPoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIPatrolPoint");
    return result;
}
