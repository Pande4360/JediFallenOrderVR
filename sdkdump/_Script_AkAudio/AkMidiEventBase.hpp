#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkMidiEventBase {
    private: char pad_0[0x2]; public:
    void* get_Type();
    void* get_Chan();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
