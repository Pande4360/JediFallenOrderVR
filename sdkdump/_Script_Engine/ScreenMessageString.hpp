#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ScreenMessageString {
    private: char pad_0[0x30]; public:
    void* get_Key();
    void* get_ScreenMessage();
    void* get_DisplayColor();
    float& get_TimeToDisplay();
    float& get_CurrentTimeDisplayed();
    void* get_TextScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
