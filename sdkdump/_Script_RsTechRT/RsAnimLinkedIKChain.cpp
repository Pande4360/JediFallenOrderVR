#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimLinkedIKChain.hpp"
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_RootBone() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_Topology() {
    return (void*)((uintptr_t)this + 0x2f0);
}
bool _Script_RsTechRT::RsAnimLinkedIKChain::get_TakeRotationFromEffectorSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c0 + 0)) & 1 != 0;
}
bool _Script_RsTechRT::RsAnimLinkedIKChain::get_MaintainEffectorRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c1 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimLinkedIKChain::set_TakeRotationFromEffectorSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsTechRT::RsAnimLinkedIKChain::set_MaintainEffectorRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsAnimLinkedIKChain::get_AllowStretching() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c2 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimLinkedIKChain::set_AllowStretching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_LeftInfoBone() {
    return (void*)((uintptr_t)this + 0x8d8);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_StretchLimits() {
    return (void*)((uintptr_t)this + 0x8c4);
}
float& _Script_RsTechRT::RsAnimLinkedIKChain::get_RootInterpolateSpeed() {
    return *(float*)((uintptr_t)this + 0x8cc);
}
float& _Script_RsTechRT::RsAnimLinkedIKChain::get_TweenTime() {
    return *(float*)((uintptr_t)this + 0x8d0);
}
float& _Script_RsTechRT::RsAnimLinkedIKChain::get_PlantedThreshold() {
    return *(float*)((uintptr_t)this + 0x8d4);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_RightInfoBone() {
    return (void*)((uintptr_t)this + 0x8f0);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_RightSurvey() {
    return (void*)((uintptr_t)this + 0xa70);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_IKCorrectionAxis() {
    return (void*)((uintptr_t)this + 0x908);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_LeftIKBone() {
    return (void*)((uintptr_t)this + 0x918);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_LeftIKOffsetToTopology() {
    return (void*)((uintptr_t)this + 0x930);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_RightIKBone() {
    return (void*)((uintptr_t)this + 0x940);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_RightIKOffsetToTopology() {
    return (void*)((uintptr_t)this + 0x958);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_LeftSurvey() {
    return (void*)((uintptr_t)this + 0x970);
}
void* _Script_RsTechRT::RsAnimLinkedIKChain::get_Velocity() {
    return (void*)((uintptr_t)this + 0xb70);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimLinkedIKChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimLinkedIKChain");
    return result;
}
