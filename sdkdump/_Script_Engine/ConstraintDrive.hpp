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
struct ConstraintDrive {
    private: char pad_0[0x10]; public:
    float& get_Stiffness();
    float& get_Damping();
    float& get_MaxForce();
    bool get_bEnablePositionDrive();
    void set_bEnablePositionDrive(bool value);
    bool get_bEnableVelocityDrive();
    void set_bEnableVelocityDrive(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
