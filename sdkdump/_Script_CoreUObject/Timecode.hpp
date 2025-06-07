#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Timecode {
    private: char pad_0[0x14]; public:
    int32_t& get_Hours();
    int32_t& get_Minutes();
    int32_t& get_Seconds();
    int32_t& get_Frames();
    bool get_bDropFrameFormat();
    void set_bDropFrameFormat(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
