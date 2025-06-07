#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "A2Pose.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct A2CSPose : public A2Pose {
    private: char pad_10[0x18]; public:
    void* get_ComponentSpaceFlags();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
