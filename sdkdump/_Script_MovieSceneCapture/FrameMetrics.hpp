#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneCapture {
#pragma pack(push, 1)
struct FrameMetrics {
    private: char pad_0[0x10]; public:
    float& get_TotalElapsedTime();
    float& get_FrameDelta();
    int32_t& get_FrameNumber();
    int32_t& get_NumDroppedFrames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
