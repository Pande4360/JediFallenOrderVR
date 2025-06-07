#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Pawn.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_PhysXVehicles {
struct WheeledVehicleMovementComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct WheeledVehicle : public _Script_Engine::Pawn {
    private: char pad_3c0[0x10]; public:
    _Script_Engine::SkeletalMeshComponent*& get_Mesh();
    _Script_PhysXVehicles::WheeledVehicleMovementComponent*& get_VehicleMovement();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d0
#pragma pack(pop)
}
