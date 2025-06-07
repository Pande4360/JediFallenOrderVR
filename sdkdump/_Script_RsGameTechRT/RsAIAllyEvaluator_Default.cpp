#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAllyEvaluator.hpp"
#include "RsAIAllyEvaluator_Default.hpp"
void* _Script_RsGameTechRT::RsAIAllyEvaluator_Default::get_AllyScoringWeights() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_RsGameTechRT::RsAIAllyEvaluator_Default::get_InnerAllyDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsAIAllyEvaluator_Default::get_OuterAllyDistance() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAllyEvaluator_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIAllyEvaluator_Default");
    return result;
}
