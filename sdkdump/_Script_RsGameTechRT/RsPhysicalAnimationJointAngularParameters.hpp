#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationJointAngularParameters {
    private: char pad_0[0x28]; public:
    void* get_ConstraintBone1();
    void* get_ConstraintBone2();
    float& get_Swing1LimitDegrees();
    float& get_Swing2LimitDegrees();
    void* get_Swing1Motion();
    void* get_Swing2Motion();
    float& get_TwistLimitDegrees();
    void* get_TwistMotion();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
