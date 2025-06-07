#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavigationFilterFlags {
    private: char pad_0[0x4]; public:
    bool get_bNavFlag0();
    void set_bNavFlag0(bool value);
    bool get_bNavFlag1();
    void set_bNavFlag1(bool value);
    bool get_bNavFlag2();
    void set_bNavFlag2(bool value);
    bool get_bNavFlag3();
    void set_bNavFlag3(bool value);
    bool get_bNavFlag4();
    void set_bNavFlag4(bool value);
    bool get_bNavFlag5();
    void set_bNavFlag5(bool value);
    bool get_bNavFlag6();
    void set_bNavFlag6(bool value);
    bool get_bNavFlag7();
    void set_bNavFlag7(bool value);
    bool get_bNavFlag8();
    void set_bNavFlag8(bool value);
    bool get_bNavFlag9();
    void set_bNavFlag9(bool value);
    bool get_bNavFlag10();
    void set_bNavFlag10(bool value);
    bool get_bNavFlag11();
    void set_bNavFlag11(bool value);
    bool get_bNavFlag12();
    void set_bNavFlag12(bool value);
    bool get_bNavFlag13();
    void set_bNavFlag13(bool value);
    bool get_bNavFlag14();
    void set_bNavFlag14(bool value);
    bool get_bNavFlag15();
    void set_bNavFlag15(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
