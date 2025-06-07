#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIScoreDecayCurve.hpp"
float& _Script_RsGameTechRT::RsAIScoreDecayCurve::get_UpperBound() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAIScoreDecayCurve::get_LowerBound() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsAIScoreDecayCurve::get_DecayTime() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIScoreDecayCurve::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIScoreDecayCurve");
    return result;
}
void* _Script_RsGameTechRT::RsAIScoreDecayCurve::get_CurveType() {
    return (void*)((uintptr_t)this + 0xc);
}
