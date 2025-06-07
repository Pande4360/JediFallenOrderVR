#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAnimBalanceIKChain.hpp"
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_RootBone() {
    return (void*)((uintptr_t)this + 0x118);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_RightBaseBone() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_CenterOfGravityOffsetFromRoot() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_BalanceLateralDistribution() {
    return *(float*)((uintptr_t)this + 0x810);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_LeftBaseOffset() {
    return (void*)((uintptr_t)this + 0x158);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_LeftBaseBone() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_LeftTipBone() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_LeftTipOffset() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_RightBaseOffset() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_RightTipBone() {
    return (void*)((uintptr_t)this + 0x1b8);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_BalanceInterpolateSpeed() {
    return *(float*)((uintptr_t)this + 0x808);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_RightTipOffset() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_Topology() {
    return (void*)((uintptr_t)this + 0x1e0);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_MaxVelocity() {
    return *(float*)((uintptr_t)this + 0x7bc);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_Velocity() {
    return (void*)((uintptr_t)this + 0x7b0);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_AppliedAcceleration() {
    return (void*)((uintptr_t)this + 0x7c0);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_Gravity() {
    return (void*)((uintptr_t)this + 0x7cc);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_BalancePendulumLocation() {
    return (void*)((uintptr_t)this + 0x7d8);
}
void* _Script_RsTechRT::RsAnimBalanceIKChain::get_SpineLean() {
    return (void*)((uintptr_t)this + 0x7e8);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_TimeExtrapolate() {
    return *(float*)((uintptr_t)this + 0x800);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_LateralBiasThreshold() {
    return *(float*)((uintptr_t)this + 0x804);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_BalanceDistribution() {
    return *(float*)((uintptr_t)this + 0x80c);
}
float& _Script_RsTechRT::RsAnimBalanceIKChain::get_BalanceVelocityDistribution() {
    return *(float*)((uintptr_t)this + 0x814);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsAnimBalanceIKChain::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsAnimBalanceIKChain");
    return result;
}
