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
struct AnimNode_RotationMultiplier : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x38]; public:
    void* get_TargetBone();
    void* get_SourceBone();
    float& get_Multiplier();
    void* get_RotationAxisToRefer();
    bool get_bIsAdditive();
    void set_bIsAdditive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
