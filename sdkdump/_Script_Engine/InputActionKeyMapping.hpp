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
struct InputActionKeyMapping {
    private: char pad_0[0x28]; public:
    void* get_ActionName();
    bool get_bShift();
    void set_bShift(bool value);
    bool get_bCtrl();
    void set_bCtrl(bool value);
    bool get_bAlt();
    void set_bAlt(bool value);
    bool get_bCmd();
    void set_bCmd(bool value);
    void* get_Key();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
