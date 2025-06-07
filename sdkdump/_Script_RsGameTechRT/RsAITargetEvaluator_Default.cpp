#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAITargetEvaluator.hpp"
#include "RsAITargetEvaluator_Default.hpp"
float& _Script_RsGameTechRT::RsAITargetEvaluator_Default::get_OuterTargetingDistance() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsAITargetEvaluator_Default::get_TargetScoringWeights() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_RsGameTechRT::RsAITargetEvaluator_Default::get_InnerTargetingDistance() {
    return *(float*)((uintptr_t)this + 0x44);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAITargetEvaluator_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAITargetEvaluator_Default");
    return result;
}
