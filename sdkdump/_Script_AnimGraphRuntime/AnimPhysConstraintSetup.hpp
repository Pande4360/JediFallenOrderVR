#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimPhysConstraintSetup {
    private: char pad_0[0x5c]; public:
    void* get_LinearXLimitType();
    void* get_LinearYLimitType();
    void* get_LinearZLimitType();
    void* get_LinearAxesMin();
    void* get_LinearAxesMax();
    void* get_AngularConstraintType();
    void* get_TwistAxis();
    float& get_ConeAngle();
    float& get_AngularXAngle();
    float& get_AngularYAngle();
    float& get_AngularZAngle();
    void* get_AngularLimitsMin();
    void* get_AngularLimitsMax();
    void* get_AngularTargetAxis();
    void* get_AngularTarget();
    bool get_bLinearFullyLocked();
    void set_bLinearFullyLocked(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5c
#pragma pack(pop)
}
