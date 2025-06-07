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
struct ClothPhysicsProperties_Legacy {
    private: char pad_0[0x50]; public:
    float& get_VerticalResistance();
    float& get_HorizontalResistance();
    float& get_BendResistance();
    float& get_ShearResistance();
    float& get_Friction();
    float& get_Damping();
    float& get_TetherStiffness();
    float& get_TetherLimit();
    float& get_Drag();
    float& get_StiffnessFrequency();
    float& get_GravityScale();
    float& get_MassScale();
    float& get_InertiaBlend();
    float& get_SelfCollisionThickness();
    float& get_SelfCollisionSquashScale();
    float& get_SelfCollisionStiffness();
    float& get_SolverFrequency();
    float& get_FiberCompression();
    float& get_FiberExpansion();
    float& get_FiberResistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
