#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAllyEvaluatorWeights_Default.hpp"
float& _Script_RsGameTechRT::RsAIAllyEvaluatorWeights_Default::get_MyAwareness() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAIAllyEvaluatorWeights_Default::get_MyAlignment() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAllyEvaluatorWeights_Default::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIAllyEvaluatorWeights_Default");
    return result;
}
float& _Script_RsGameTechRT::RsAIAllyEvaluatorWeights_Default::get_TheirStrength() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_RsGameTechRT::RsAIAllyEvaluatorWeights_Default::get_Proximity() {
    return *(float*)((uintptr_t)this + 0x8);
}
