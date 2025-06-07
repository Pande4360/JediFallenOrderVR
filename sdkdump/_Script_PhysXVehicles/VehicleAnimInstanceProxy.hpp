#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct VehicleAnimInstanceProxy : public _Script_Engine::AnimInstanceProxy {
    private: char pad_5e0[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5f0
#pragma pack(pop)
}
