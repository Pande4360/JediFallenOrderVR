#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal_BaseAggro.hpp"
#include "RsAIGoal_FightIdle.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_FightIdle::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_FightIdle");
    return result;
}
