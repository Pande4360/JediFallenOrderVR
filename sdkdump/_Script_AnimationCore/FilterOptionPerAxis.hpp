#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimationCore {
#pragma pack(push, 1)
struct FilterOptionPerAxis {
    private: char pad_0[0x3]; public:
    bool get_bX();
    void set_bX(bool value);
    bool get_bY();
    void set_bY(bool value);
    bool get_bZ();
    void set_bZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3
#pragma pack(pop)
}
