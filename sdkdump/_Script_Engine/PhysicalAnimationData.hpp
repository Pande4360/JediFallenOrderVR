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
struct PhysicalAnimationData {
    private: char pad_0[0x28]; public:
    void* get_BodyName();
    bool get_bIsLocalSimulation();
    void set_bIsLocalSimulation(bool value);
    float& get_OrientationStrength();
    float& get_AngularVelocityStrength();
    float& get_PositionStrength();
    float& get_VelocityStrength();
    float& get_MaxLinearForce();
    float& get_MaxAngularForce();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
