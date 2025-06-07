#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal_BaseRoot.hpp"
#include "RsAIGoal_Falling.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_Falling::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_Falling");
    return result;
}
