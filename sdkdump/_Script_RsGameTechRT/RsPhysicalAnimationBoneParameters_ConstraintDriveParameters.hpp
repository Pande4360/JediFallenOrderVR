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
struct RsPhysicalAnimationBoneParameters_ConstraintDriveParameters {
    private: char pad_0[0x14]; public:
    bool get_FreeLinearMovement();
    void set_FreeLinearMovement(bool value);
    bool get_FreeAngularMovement();
    void set_FreeAngularMovement(bool value);
    bool get_EnableVariableConstraintLimits();
    void set_EnableVariableConstraintLimits(bool value);
    bool get_UseSmoothedVelocities();
    void set_UseSmoothedVelocities(bool value);
    bool get_DebugDrawMotorLimits();
    void set_DebugDrawMotorLimits(bool value);
    bool get_DebugLogVelocity();
    void set_DebugLogVelocity(bool value);
    float& get_LinearVelocityMin();
    float& get_LinearVelocityMax();
    float& get_ConstraintLimitForVelocityMin();
    float& get_ConstraintLimitForVelocityMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
