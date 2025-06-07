#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal_BaseAlert.hpp"
#include "RsAIGoal_Investigate.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_Investigate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_Investigate");
    return result;
}
