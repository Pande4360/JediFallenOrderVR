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
struct ColorMask {
    private: char pad_0[0x4]; public:
    bool get_bRed();
    void set_bRed(bool value);
    bool get_bGreen();
    void set_bGreen(bool value);
    bool get_bBlue();
    void set_bBlue(bool value);
    bool get_bAlpha();
    void set_bAlpha(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
