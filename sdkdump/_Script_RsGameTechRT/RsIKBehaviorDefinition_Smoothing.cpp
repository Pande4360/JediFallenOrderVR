#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_Smoothing.hpp"
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_EnteringIdleBlendSpeedMultiplier() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_EnteringIdleTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_SustainedIdleBlendSpeedMultiplier() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_BlendHands() {
    return (void*)((uintptr_t)this + 0x5c);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_BlendUp() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_RotationBlendSpeed() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_BlendDown() {
    return (void*)((uintptr_t)this + 0x44);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_BlendNearGround() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_BlendLockedHorizontal() {
    return (void*)((uintptr_t)this + 0x54);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_Smoothing");
    return result;
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_BlendHandsNavigation() {
    return (void*)((uintptr_t)this + 0x64);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_NavStatesForNavigationHands() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_NearGroundThreshold() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Smoothing::get_LockedRotationBlendSpeed() {
    return *(float*)((uintptr_t)this + 0x88);
}
