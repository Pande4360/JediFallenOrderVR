#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal.hpp"
#include "RsAIGoal_CombatReaction.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_CombatReaction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_CombatReaction");
    return result;
}
