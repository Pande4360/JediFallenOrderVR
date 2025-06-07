#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct VehicleEngineData {
    private: char pad_0[0x90]; public:
    void* get_TorqueCurve();
    float& get_MaxRPM();
    float& get_MOI();
    float& get_DampingRateFullThrottle();
    float& get_DampingRateZeroThrottleClutchEngaged();
    float& get_DampingRateZeroThrottleClutchDisengaged();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
