#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_LinearTimecode {
#pragma pack(push, 1)
struct DropTimecode {
    private: char pad_0[0x1c]; public:
    void* get_Timecode();
    int32_t& get_FrameRate();
    bool get_bColorFraming();
    void set_bColorFraming(bool value);
    bool get_bRunningForward();
    void set_bRunningForward(bool value);
    bool get_bNewFrame();
    void set_bNewFrame(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
