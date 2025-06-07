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
struct BeamModifierOptions {
    private: char pad_0[0x4]; public:
    bool get_bModify();
    void set_bModify(bool value);
    bool get_bScale();
    void set_bScale(bool value);
    bool get_bLock();
    void set_bLock(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
