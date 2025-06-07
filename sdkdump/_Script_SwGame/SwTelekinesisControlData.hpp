#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwTelekinesisControlData {
    private: char pad_0[0x68]; public:
    float& get_MaxDepthDistance();
    float& get_MaxHeightDistance();
    float& get_MaxStartLateralDistance();
    float& get_MaxEndLateralDistance();
    float& get_MaxHeight();
    float& get_MinHeight();
    float& get_HeightSpeed();
    float& get_MaxDepth();
    float& get_MinDepth();
    float& get_DepthSpeed();
    float& get_LateralMovementSpeed();
    float& get_QuicksandSpeedMultiplier();
    float& get_MaxRotationSpeed();
    float& get_MinRotationSpeed();
    float& get_Springiness();
    float& get_SpringDampening();
    float& get_LinearDampening();
    float& get_LinearStiffness();
    float& get_AngularSlerpStiffness();
    float& get_AngularSlerpDamping();
    float& get_InterpolationSpeed();
    void* get_OverrideInertiaTensorScale();
    _Script_Engine::PhysicalMaterial*& get_PhysMaterialOverride();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
