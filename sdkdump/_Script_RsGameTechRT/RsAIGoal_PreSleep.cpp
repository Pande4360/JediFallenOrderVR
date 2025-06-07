#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoal_BaseAmbient.hpp"
#include "RsAIGoal_PreSleep.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoal_PreSleep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoal_PreSleep");
    return result;
}
