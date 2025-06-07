#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "WheeledVehicleMovementComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct WheeledVehicleMovementComponent4W : public WheeledVehicleMovementComponent {
    private: char pad_360[0x158]; public:
    void* get_EngineSetup();
    void* get_DifferentialSetup();
    float& get_AckermannAccuracy();
    void* get_TransmissionSetup();
    void* get_SteeringCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4b8
#pragma pack(pop)
}
