#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Slate {
#pragma pack(push, 1)
struct InputChord {
    private: char pad_0[0x20]; public:
    void* get_Key();
    bool get_bShift();
    void set_bShift(bool value);
    bool get_bCtrl();
    void set_bCtrl(bool value);
    bool get_bAlt();
    void set_bAlt(bool value);
    bool get_bCmd();
    void set_bCmd(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
