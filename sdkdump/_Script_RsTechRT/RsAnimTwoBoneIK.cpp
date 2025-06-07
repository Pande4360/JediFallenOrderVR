#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimTwoBoneIK.hpp"
float& _Script_RsTechRT::RsAnimTwoBoneIK::get_TweenTime() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
bool _Script_RsTechRT::RsAnimTwoBoneIK::get_TakeRotationFromEffectorSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x1db + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimTwoBoneIK::set_TakeRotationFromEffectorSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1db + 0);
    *(uint8_t*)((uintptr_t)this + 0x1db + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsTechRT::RsAnimTwoBoneIK::set_MaintainEffectorRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsAnimTwoBoneIK::get_MaintainEffectorRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dc + 0)) & 1 != 0;
}
bool _Script_RsTechRT::RsAnimTwoBoneIK::get_AllowStretching() {
    return (*(uint8_t*)((uintptr_t)this + 0x1dd + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsAnimTwoBoneIK::set_AllowStretching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1dd + 0);
    *(uint8_t*)((uintptr_t)this + 0x1dd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_StretchLimits() {
    return (void*)((uintptr_t)this + 0x1e0);
}
float& _Script_RsTechRT::RsAnimTwoBoneIK::get_PlantedThreshold() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_InfoBone() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_RootBone() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_IKRootBone() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_IKJointBone() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_IKEffectorBone() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_IKOffsetToTopology() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Script_RsTechRT::RsAnimTwoBoneIK::get_EffectorSurvey() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimTwoBoneIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimTwoBoneIK");
    return result;
}
