#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EyeTracker {
#pragma pack(push, 1)
struct EyeTrackerStereoGazeData {
    private: char pad_0[0x40]; public:
    void* get_LeftEyeOrigin();
    void* get_LeftEyeDirection();
    void* get_RightEyeOrigin();
    void* get_RightEyeDirection();
    void* get_FixationPoint();
    float& get_ConfidenceValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
