#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AnimGraphRuntime\AnimNode_SkeletalControlBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct AnimNode_WheelHandler : public _Script_AnimGraphRuntime::AnimNode_SkeletalControlBase {
    private: char pad_f0[0x18]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
