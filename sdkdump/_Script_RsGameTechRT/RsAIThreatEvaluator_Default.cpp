#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIThreatEvaluator.hpp"
#include "RsAIThreatEvaluator_Default.hpp"
void* _Script_RsGameTechRT::RsAIThreatEvaluator_Default::get_ThreatScoringWeights() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_RsGameTechRT::RsAIThreatEvaluator_Default::get_InnerThreatDistance() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsAIThreatEvaluator_Default::get_OuterThreatDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIThreatEvaluator_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIThreatEvaluator_Default");
    return result;
}
