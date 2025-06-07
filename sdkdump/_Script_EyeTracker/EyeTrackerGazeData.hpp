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
struct EyeTrackerGazeData {
    private: char pad_0[0x28]; public:
    void* get_GazeOrigin();
    void* get_GazeDirection();
    void* get_FixationPoint();
    float& get_ConfidenceValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
