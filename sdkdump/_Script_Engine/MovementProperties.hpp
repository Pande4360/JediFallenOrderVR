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
struct MovementProperties {
    private: char pad_0[0x1]; public:
    bool get_bCanCrouch();
    void set_bCanCrouch(bool value);
    bool get_bCanJump();
    void set_bCanJump(bool value);
    bool get_bCanWalk();
    void set_bCanWalk(bool value);
    bool get_bCanSwim();
    void set_bCanSwim(bool value);
    bool get_bCanFly();
    void set_bCanFly(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1
#pragma pack(pop)
}
