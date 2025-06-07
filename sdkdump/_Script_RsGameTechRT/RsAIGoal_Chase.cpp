#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal_BaseAggro.hpp"
#include "RsAIGoal_Chase.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_Chase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_Chase");
    return result;
}
