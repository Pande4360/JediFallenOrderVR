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
struct AnimNode_ApplyLimits : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x20]; public:
    void* get_AngularRangeLimits();
    void* get_AngularOffsets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x110
#pragma pack(pop)
}
