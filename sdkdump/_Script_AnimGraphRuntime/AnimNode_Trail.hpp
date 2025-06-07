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
struct AnimNode_Trail : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x190]; public:
    void* get_TrailBone();
    int32_t& get_ChainLength();
    void* get_ChainBoneAxis();
    bool get_bInvertChainBoneAxis();
    void set_bInvertChainBoneAxis(bool value);
    bool get_bLimitStretch();
    void set_bLimitStretch(bool value);
    bool get_bLimitRotation();
    void set_bLimitRotation(bool value);
    bool get_bUsePlanarLimit();
    void set_bUsePlanarLimit(bool value);
    bool get_bActorSpaceFakeVel();
    void set_bActorSpaceFakeVel(bool value);
    bool get_bReorientParentToChild();
    void set_bReorientParentToChild(bool value);
    void* get_UnwindingSize();
    float& get_RelaxationSpeedScale();
    void* get_TrailRelaxationSpeed();
    void* get_RelaxationSpeedScaleInputProcessor();
    void* get_RotationLimits();
    void* get_RotationOffsets();
    void* get_PlanarLimits();
    float& get_StretchLimit();
    void* get_FakeVelocity();
    void* get_BaseJoint();
    float& get_LastBoneRotationAnimAlphaBlend();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
