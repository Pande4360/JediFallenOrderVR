#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_ClothingSystemRuntimeInterface\ClothingSimulationInteractor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_ClothingSystemRuntime {
#pragma pack(push, 1)
struct ClothingSimulationInteractorNv : public _Script_ClothingSystemRuntimeInterface::ClothingSimulationInteractor {
    private: char pad_30[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetAnimDriveSpringStiffness(float InStiffness);
    void SetAnimDriveDamperStiffness(float InStiffness);
    void EnableGravityOverride(_Script_CoreUObject::Vector& InVector);
    void DisableGravityOverride();
}; // Size: 0x40
#pragma pack(pop)
}
