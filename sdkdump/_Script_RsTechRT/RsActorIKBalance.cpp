#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsActorIKBalance.hpp"
void* _Script_RsTechRT::RsActorIKBalance::get_RightBaseBone() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Script_RsTechRT::RsActorIKBalance::set_MaintainEffectorRelativeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x981 + 0);
    *(uint8_t*)((uintptr_t)this + 0x981 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RootBone() {
    return (void*)((uintptr_t)this + 0x2e8);
}
void* _Script_RsTechRT::RsActorIKBalance::get_CenterOfGravityOffsetFromRoot() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftTipBone() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftBaseOffset() {
    return (void*)((uintptr_t)this + 0x328);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftBaseBone() {
    return (void*)((uintptr_t)this + 0x310);
}
float& _Script_RsTechRT::RsActorIKBalance::get_MaxVelocity() {
    return *(float*)((uintptr_t)this + 0xc3c);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightBaseOffset() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftTipOffset() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightTipBone() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightTipOffset() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_RsTechRT::RsActorIKBalance::get_Topology() {
    return (void*)((uintptr_t)this + 0x3b0);
}
bool _Script_RsTechRT::RsActorIKBalance::get_TakeRotationFromEffectorSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x980 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsActorIKBalance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsActorIKBalance");
    return result;
}
void _Script_RsTechRT::RsActorIKBalance::set_TakeRotationFromEffectorSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x980 + 0);
    *(uint8_t*)((uintptr_t)this + 0x980 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsActorIKBalance::get_MaintainEffectorRelativeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x981 + 0)) & 1 != 0;
}
bool _Script_RsTechRT::RsActorIKBalance::get_AllowStretching() {
    return (*(uint8_t*)((uintptr_t)this + 0x982 + 0)) & 1 != 0;
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightIKBone() {
    return (void*)((uintptr_t)this + 0xa00);
}
void _Script_RsTechRT::RsActorIKBalance::set_AllowStretching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x982 + 0);
    *(uint8_t*)((uintptr_t)this + 0x982 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsTechRT::RsActorIKBalance::get_StretchLimits() {
    return (void*)((uintptr_t)this + 0x984);
}
float& _Script_RsTechRT::RsActorIKBalance::get_RootInterpolateSpeed() {
    return *(float*)((uintptr_t)this + 0x98c);
}
float& _Script_RsTechRT::RsActorIKBalance::get_TweenTime() {
    return *(float*)((uintptr_t)this + 0x990);
}
float& _Script_RsTechRT::RsActorIKBalance::get_PlantedThreshold() {
    return *(float*)((uintptr_t)this + 0x994);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftInfoBone() {
    return (void*)((uintptr_t)this + 0x998);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightInfoBone() {
    return (void*)((uintptr_t)this + 0x9b0);
}
void* _Script_RsTechRT::RsActorIKBalance::get_IKCorrectionAxis() {
    return (void*)((uintptr_t)this + 0x9c8);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftIKBone() {
    return (void*)((uintptr_t)this + 0x9d8);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftIKOffsetToTopology() {
    return (void*)((uintptr_t)this + 0x9f0);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightIKOffsetToTopology() {
    return (void*)((uintptr_t)this + 0xa18);
}
void* _Script_RsTechRT::RsActorIKBalance::get_LeftSurvey() {
    return (void*)((uintptr_t)this + 0xa30);
}
void* _Script_RsTechRT::RsActorIKBalance::get_RightSurvey() {
    return (void*)((uintptr_t)this + 0xb30);
}
void* _Script_RsTechRT::RsActorIKBalance::get_Velocity() {
    return (void*)((uintptr_t)this + 0xc30);
}
void* _Script_RsTechRT::RsActorIKBalance::get_AppliedAcceleration() {
    return (void*)((uintptr_t)this + 0xc40);
}
void* _Script_RsTechRT::RsActorIKBalance::get_Gravity() {
    return (void*)((uintptr_t)this + 0xc4c);
}
void* _Script_RsTechRT::RsActorIKBalance::get_BalancePendulumLocation() {
    return (void*)((uintptr_t)this + 0xc58);
}
void* _Script_RsTechRT::RsActorIKBalance::get_SpineLean() {
    return (void*)((uintptr_t)this + 0xc68);
}
float& _Script_RsTechRT::RsActorIKBalance::get_TimeExtrapolate() {
    return *(float*)((uintptr_t)this + 0xc80);
}
float& _Script_RsTechRT::RsActorIKBalance::get_LateralBiasThreshold() {
    return *(float*)((uintptr_t)this + 0xc84);
}
float& _Script_RsTechRT::RsActorIKBalance::get_BalanceInterpolateSpeed() {
    return *(float*)((uintptr_t)this + 0xc88);
}
float& _Script_RsTechRT::RsActorIKBalance::get_BalanceDistribution() {
    return *(float*)((uintptr_t)this + 0xc8c);
}
float& _Script_RsTechRT::RsActorIKBalance::get_BalanceLateralDistribution() {
    return *(float*)((uintptr_t)this + 0xc90);
}
float& _Script_RsTechRT::RsActorIKBalance::get_BalanceVelocityDistribution() {
    return *(float*)((uintptr_t)this + 0xc94);
}
