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
struct KeyBind {
    private: char pad_0[0x30]; public:
    void* get_Key();
    void* get_Command();
    bool get_Control();
    void set_Control(bool value);
    bool get_Shift();
    void set_Shift(bool value);
    bool get_Alt();
    void set_Alt(bool value);
    bool get_Cmd();
    void set_Cmd(bool value);
    bool get_bIgnoreCtrl();
    void set_bIgnoreCtrl(bool value);
    bool get_bIgnoreShift();
    void set_bIgnoreShift(bool value);
    bool get_bIgnoreAlt();
    void set_bIgnoreAlt(bool value);
    bool get_bIgnoreCmd();
    void set_bIgnoreCmd(bool value);
    bool get_bDisabled();
    void set_bDisabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
