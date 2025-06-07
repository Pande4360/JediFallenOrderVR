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
struct R4CameraBehavior_OffsetRotationByLookInput : public R4CameraBehavior_LookInput {
    private: char pad_48[0x30]; public:
    float& get_MaxYawOffset();
    float& get_MaxPitchOffset();
    float& get_OffsetSmoothTime();
    float& get_SpringRatio();
    bool get_bUseSpring();
    void set_bUseSpring(bool value);
    bool get_bGetMaxOffsetsFromSplineCamera();
    void set_bGetMaxOffsetsFromSplineCamera(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
