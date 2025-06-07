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
struct AnimNode_CCDIK : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0xc0]; public:
    void* get_EffectorLocation();
    void* get_EffectorLocationSpace();
    void* get_EffectorTarget();
    void* get_TipBone();
    void* get_RootBone();
    float& get_Precision();
    int32_t& get_MaxIterations();
    bool get_bStartFromTail();
    void set_bStartFromTail(bool value);
    bool get_bEnableRotationLimit();
    void set_bEnableRotationLimit(bool value);
    void* get_RotationLimitPerJoints();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b0
#pragma pack(pop)
}
