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
struct NavigationLinkBase {
    private: char pad_0[0x38]; public:
    float& get_LeftProjectHeight();
    float& get_MaxFallDownLength();
    void* get_Direction();
    float& get_SnapRadius();
    float& get_SnapHeight();
    void* get_SupportedAgents();
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
    bool get_bUseSnapHeight();
    void set_bUseSnapHeight(bool value);
    bool get_bSnapToCheapestArea();
    void set_bSnapToCheapestArea(bool value);
    bool get_bCustomFlag0();
    void set_bCustomFlag0(bool value);
    bool get_bCustomFlag1();
    void set_bCustomFlag1(bool value);
    bool get_bCustomFlag2();
    void set_bCustomFlag2(bool value);
    bool get_bCustomFlag3();
    void set_bCustomFlag3(bool value);
    bool get_bCustomFlag4();
    void set_bCustomFlag4(bool value);
    bool get_bCustomFlag5();
    void set_bCustomFlag5(bool value);
    bool get_bCustomFlag6();
    void set_bCustomFlag6(bool value);
    bool get_bCustomFlag7();
    void set_bCustomFlag7(bool value);
    void* get_AreaClass();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
