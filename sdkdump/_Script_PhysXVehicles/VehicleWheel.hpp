#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct StaticMesh;
}
namespace _Script_Engine {
struct TireType;
}
namespace _Script_PhysXVehicles {
struct WheeledVehicleMovementComponent;
}
namespace _Script_PhysXVehicles {
struct TireConfig;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_PhysXVehicles {
#pragma pack(push, 1)
struct VehicleWheel : public _Script_CoreUObject::Object {
    private: char pad_28[0xc8]; public:
    _Script_Engine::StaticMesh*& get_CollisionMesh();
    bool get_bDontCreateShape();
    void set_bDontCreateShape(bool value);
    bool get_bAutoAdjustCollisionSize();
    void set_bAutoAdjustCollisionSize(bool value);
    void* get_Offset();
    float& get_ShapeRadius();
    float& get_ShapeWidth();
    float& get_Mass();
    float& get_DampingRate();
    float& get_SteerAngle();
    bool get_bAffectedByHandbrake();
    void set_bAffectedByHandbrake(bool value);
    _Script_Engine::TireType*& get_TireType();
    _Script_PhysXVehicles::TireConfig*& get_TireConfig();
    float& get_LatStiffMaxLoad();
    float& get_LatStiffValue();
    float& get_LongStiffValue();
    float& get_SuspensionForceOffset();
    float& get_SuspensionMaxRaise();
    float& get_SuspensionMaxDrop();
    float& get_SuspensionNaturalFrequency();
    float& get_SuspensionDampingRatio();
    void* get_SweepType();
    float& get_MaxBrakeTorque();
    float& get_MaxHandBrakeTorque();
    _Script_PhysXVehicles::WheeledVehicleMovementComponent*& get_VehicleSim();
    int32_t& get_WheelIndex();
    float& get_DebugLongSlip();
    float& get_DebugLatSlip();
    float& get_DebugNormalizedTireLoad();
    float& get_DebugWheelTorque();
    float& get_DebugLongForce();
    float& get_DebugLatForce();
    void* get_Location();
    void* get_OldLocation();
    void* get_Velocity();
    static _Script_CoreUObject::Class* static_class();
    bool IsInAir();
    float GetSuspensionOffset();
    float GetSteerAngle();
    float GetRotationAngle();
}; // Size: 0xf0
#pragma pack(pop)
}
