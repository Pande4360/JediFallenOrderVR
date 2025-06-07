#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAIGoalManager.hpp"
void* _Script_RsGameTechRT::RsAIGoalManager::get_LatentGoals() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_RsGameTechRT::RsAIGoalManager::get_PostedGoals() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoalManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGoalManager");
    return result;
}
