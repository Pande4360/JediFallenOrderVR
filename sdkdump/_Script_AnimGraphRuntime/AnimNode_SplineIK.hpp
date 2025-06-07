#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_SplineIK : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x1a0]; public:
    void* get_StartBone();
    void* get_EndBone();
    void* get_BoneAxis();
    bool get_bAutoCalculateSpline();
    void set_bAutoCalculateSpline(bool value);
    int32_t& get_PointCount();
    void* get_ControlPoints();
    float& get_Roll();
    float& get_TwistStart();
    float& get_TwistEnd();
    void* get_TwistBlend();
    float& get_Stretch();
    float& get_Offset();
    void* get_BoneSpline();
    float& get_OriginalSplineLength();
    void* get_CachedBoneReferences();
    void* get_CachedBoneLengths();
    void* get_CachedOffsetRotations();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x290
#pragma pack(pop)
}
