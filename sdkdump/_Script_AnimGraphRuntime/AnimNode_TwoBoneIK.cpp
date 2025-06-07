#include "..\FUObjectArray.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "AnimNode_TwoBoneIK.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_IkBone() {
    return (void*)((uintptr_t)this + 0xf0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bAllowStretching() {
    return (*(uint8_t*)((uintptr_t)this + 0x108 + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_StartStretchRatio() {
    return *(float*)((uintptr_t)this + 0x10c);
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bAllowStretching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x108 + 0);
    *(uint8_t*)((uintptr_t)this + 0x108 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_StretchLimits() {
    return (void*)((uintptr_t)this + 0x114);
}
float& _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_MaxStretchScale() {
    return *(float*)((uintptr_t)this + 0x110);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bTakeRotationFromEffectorSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bTakeRotationFromEffectorSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bMaintainEffectorRelRot() {
    return (*(uint8_t*)((uintptr_t)this + 0x11c + 0)) & 2 != 0;
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorLocation() {
    return (void*)((uintptr_t)this + 0x130);
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bMaintainEffectorRelRot(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x11c + 0);
    *(uint8_t*)((uintptr_t)this + 0x11c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorLocationSpace() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorSpaceBoneName() {
    return (void*)((uintptr_t)this + 0x128);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_EffectorTarget() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTargetLocationSpace() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTargetLocation() {
    return (void*)((uintptr_t)this + 0x1a4);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTargetSpaceBoneName() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_JointTarget() {
    return (void*)((uintptr_t)this + 0x1c0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bAllowTwist() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bAllowTwist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_TwistAxis() {
    return (void*)((uintptr_t)this + 0x224);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bAllowTwistUpperJointOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x234 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bAllowTwistUpperJointOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x234 + 0);
    *(uint8_t*)((uintptr_t)this + 0x234 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_MinAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x238);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bCalculateLimbRotationFromEffecter() {
    return (*(uint8_t*)((uintptr_t)this + 0x23c + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bCalculateLimbRotationFromEffecter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23c + 0);
    *(uint8_t*)((uintptr_t)this + 0x23c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::get_bNoTwist() {
    return (*(uint8_t*)((uintptr_t)this + 0x23d + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::set_bNoTwist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23d + 0);
    *(uint8_t*)((uintptr_t)this + 0x23d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_TwoBoneIK::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK");
    return result;
}
