#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_Buttons_Gamepad_Icon_Mappings {
#pragma pack(push, 1)
struct Gamepad_Icon_Mappings {
    private: char pad_0[0xf0]; public:
    void* get_XboxButtons_10_CCAF377041CFD524F4FB8786372A4836();
    void* get_DualshockButtons_12_236FC24E4C947D779D9EB781A9EE9094();
    void* get_KeyboardButtons_17_8051FAFA4A929237BA1B04810B77EB1C();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
