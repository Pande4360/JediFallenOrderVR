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
struct ReplicatedVehicleState {
    private: char pad_0[0x14]; public:
    float& get_SteeringInput();
    float& get_ThrottleInput();
    float& get_BrakeInput();
    float& get_HandbrakeInput();
    int32_t& get_CurrentGear();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
