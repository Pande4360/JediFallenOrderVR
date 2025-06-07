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
struct SimpleWheeledVehicleMovementComponent : public WheeledVehicleMovementComponent {
    static _Script_CoreUObject::Class* static_class();
    void SetSteerAngle(float SteerAngle, int32_t WheelIndex);
    void SetDriveTorque(float DriveTorque, int32_t WheelIndex);
    void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);
}; // Size: 0x360
#pragma pack(pop)
}
