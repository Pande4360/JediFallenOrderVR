#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal_BaseRoot.hpp"
#include "RsAIGoal_ScriptedBehavior.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_ScriptedBehavior::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_ScriptedBehavior");
    return result;
}
