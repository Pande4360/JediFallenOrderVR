#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsAnimBalanceIKChain : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_f0[0x730]; public:
    void* get_RootBone();
    void* get_CenterOfGravityOffsetFromRoot();
    void* get_LeftBaseBone();
    void* get_LeftBaseOffset();
    void* get_LeftTipBone();
    void* get_LeftTipOffset();
    void* get_RightBaseBone();
    void* get_RightBaseOffset();
    void* get_RightTipBone();
    void* get_RightTipOffset();
    void* get_Topology();
    void* get_Velocity();
    float& get_MaxVelocity();
    void* get_AppliedAcceleration();
    void* get_Gravity();
    void* get_BalancePendulumLocation();
    void* get_SpineLean();
    float& get_TimeExtrapolate();
    float& get_LateralBiasThreshold();
    float& get_BalanceInterpolateSpeed();
    float& get_BalanceDistribution();
    float& get_BalanceLateralDistribution();
    float& get_BalanceVelocityDistribution();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x820
#pragma pack(pop)
}
