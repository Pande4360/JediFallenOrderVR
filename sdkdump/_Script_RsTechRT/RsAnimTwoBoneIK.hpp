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
struct RsAnimTwoBoneIK : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_f0[0x290]; public:
    bool get_TakeRotationFromEffectorSpace();
    void set_TakeRotationFromEffectorSpace(bool value);
    bool get_MaintainEffectorRelativeRotation();
    void set_MaintainEffectorRelativeRotation(bool value);
    bool get_AllowStretching();
    void set_AllowStretching(bool value);
    void* get_StretchLimits();
    float& get_TweenTime();
    float& get_PlantedThreshold();
    void* get_InfoBone();
    void* get_RootBone();
    void* get_IKRootBone();
    void* get_IKJointBone();
    void* get_IKEffectorBone();
    void* get_IKOffsetToTopology();
    void* get_EffectorSurvey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
