#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "R4CameraBehavior_LookInput.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_LookInputAdjustedByDistanceToFocus : public R4CameraBehavior_LookInput {
    private: char pad_48[0xf8]; public:
    void* get_DistanceRotationSpeedCurveYaw();
    void* get_DistanceRotationSpeedCurvePitch();
    float& get_DistanceScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
