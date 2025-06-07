#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Overlay {
#pragma pack(push, 1)
struct OverlayItem {
    private: char pad_0[0x28]; public:
    void* get_StartTime();
    void* get_EndTime();
    void* get_Text();
    void* get_Position();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
