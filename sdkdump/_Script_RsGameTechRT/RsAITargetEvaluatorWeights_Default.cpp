#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAITargetEvaluatorWeights_Default.hpp"
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_CurrentTarget() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_MyAwareness() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_Proximity() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_TheirThreat() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_Player() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_LastAttacker() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::get_Validity() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAITargetEvaluatorWeights_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAITargetEvaluatorWeights_Default");
    return result;
}
