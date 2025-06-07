#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal.hpp"
#include "RsAIGoal_BaseAlert.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_BaseAlert::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_BaseAlert");
    return result;
}
