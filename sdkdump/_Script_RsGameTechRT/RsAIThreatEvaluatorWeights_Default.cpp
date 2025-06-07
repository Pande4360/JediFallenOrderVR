#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIThreatEvaluatorWeights_Default.hpp"
float& _Script_RsGameTechRT::RsAIThreatEvaluatorWeights_Default::get_Proximity() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsAIThreatEvaluatorWeights_Default::get_TheirAwareness() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIThreatEvaluatorWeights_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIThreatEvaluatorWeights_Default");
    return result;
}
float& _Script_RsGameTechRT::RsAIThreatEvaluatorWeights_Default::get_MyAlignment() {
    return *(float*)((uintptr_t)this + 0x4);
}
