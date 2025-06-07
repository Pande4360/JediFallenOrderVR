#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsAIAwarenessStateDefinition_Ambient.hpp"
float& _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient::get_WanderRange() {
    return *(float*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIAwarenessStateDefinition_Ambient");
    return result;
}
float& _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient::get_FrequencyMax() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient::get_FrequencyMin() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_RsGameTechRT::RsAIAwarenessStateDefinition_Ambient::get_FidgetAnimation() {
    return (void*)((uintptr_t)this + 0x40);
}
