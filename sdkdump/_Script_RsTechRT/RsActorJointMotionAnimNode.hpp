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
struct RsActorJointMotionAnimNode : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_f0[0x80]; public:
    void* get_m_originJoint();
    void* get_m_targetJoint();
    bool get_m_stripMotion();
    void set_m_stripMotion(bool value);
    bool get_m_stripRotation();
    void set_m_stripRotation(bool value);
    float& get_m_blendTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
