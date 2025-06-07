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
struct RsAnimLinkedIKChain : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_f0[0xa90]; public:
    void* get_RootBone();
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
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb80
#pragma pack(pop)
}
