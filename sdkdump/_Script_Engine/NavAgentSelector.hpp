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
struct NavAgentSelector {
    private: char pad_0[0x4]; public:
    bool get_bSupportsAgent0();
    void set_bSupportsAgent0(bool value);
    bool get_bSupportsAgent1();
    void set_bSupportsAgent1(bool value);
    bool get_bSupportsAgent2();
    void set_bSupportsAgent2(bool value);
    bool get_bSupportsAgent3();
    void set_bSupportsAgent3(bool value);
    bool get_bSupportsAgent4();
    void set_bSupportsAgent4(bool value);
    bool get_bSupportsAgent5();
    void set_bSupportsAgent5(bool value);
    bool get_bSupportsAgent6();
    void set_bSupportsAgent6(bool value);
    bool get_bSupportsAgent7();
    void set_bSupportsAgent7(bool value);
    bool get_bSupportsAgent8();
    void set_bSupportsAgent8(bool value);
    bool get_bSupportsAgent9();
    void set_bSupportsAgent9(bool value);
    bool get_bSupportsAgent10();
    void set_bSupportsAgent10(bool value);
    bool get_bSupportsAgent11();
    void set_bSupportsAgent11(bool value);
    bool get_bSupportsAgent12();
    void set_bSupportsAgent12(bool value);
    bool get_bSupportsAgent13();
    void set_bSupportsAgent13(bool value);
    bool get_bSupportsAgent14();
    void set_bSupportsAgent14(bool value);
    bool get_bSupportsAgent15();
    void set_bSupportsAgent15(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
