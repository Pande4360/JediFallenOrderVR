#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIGoalBehaviorDescriptor.hpp"
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAIGoalBehaviorDescriptor::get_Behavior() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAIGoalBehaviorDescriptor::get_GoalClass() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGoalBehaviorDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIGoalBehaviorDescriptor");
    return result;
}
