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
struct AnimNode_LegIK : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0x30]; public:
    float& get_ReachPrecision();
    int32_t& get_MaxIterations();
    void* get_LegsDefinition();
    void* get_LegsData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x120
#pragma pack(pop)
}
