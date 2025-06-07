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
struct AnimNode_LookAt : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x130]; public:
    void* get_BoneToModify();
    void* get_LookAtBone();
    void* get_LookAtSocket();
    void* get_LookatTarget();
    void* get_LookAtLocation();
    void* get_LookAtAxis();
    void* get_CustomLookAtAxis();
    void* get_LookAt_Axis();
    bool get_bUseLookUpAxis();
    void set_bUseLookUpAxis(bool value);
    void* get_LookUpAxis();
    void* get_CustomLookUpAxis();
    void* get_LookUp_Axis();
    float& get_LookAtClamp();
    void* get_InterpolationType();
    float& get_InterpolationTime();
    float& get_InterpolationTriggerThreashold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
