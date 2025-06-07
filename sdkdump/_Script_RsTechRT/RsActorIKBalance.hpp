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
struct RsActorIKBalance : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_f0[0xbb0]; public:
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
    bool get_TakeRotationFromEffectorSpace();
    void set_TakeRotationFromEffectorSpace(bool value);
    bool get_MaintainEffectorRelativeRotation();
    void set_MaintainEffectorRelativeRotation(bool value);
    bool get_AllowStretching();
    void set_AllowStretching(bool value);
    void* get_StretchLimits();
    float& get_RootInterpolateSpeed();
    float& get_TweenTime();
    float& get_PlantedThreshold();
    void* get_LeftInfoBone();
    void* get_RightInfoBone();
    void* get_IKCorrectionAxis();
    void* get_LeftIKBone();
    void* get_LeftIKOffsetToTopology();
    void* get_RightIKBone();
    void* get_RightIKOffsetToTopology();
    void* get_LeftSurvey();
    void* get_RightSurvey();
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
}; // Size: 0xca0
#pragma pack(pop)
}
