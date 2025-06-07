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
struct ConstraintBaseParams {
    private: char pad_0[0x14]; public:
    float& get_Stiffness();
    float& get_Damping();
    float& get_Restitution();
    float& get_ContactDistance();
    bool get_bSoftConstraint();
    void set_bSoftConstraint(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
