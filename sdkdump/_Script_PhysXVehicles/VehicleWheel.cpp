#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\TireType.hpp"
#include "TireConfig.hpp"
#include "VehicleWheel.hpp"
#include "WheeledVehicleMovementComponent.hpp"
float& _Script_PhysXVehicles::VehicleWheel::get_DebugWheelTorque() {
    return *(float*)((uintptr_t)this + 0xb4);
}
_Script_Engine::StaticMesh*& _Script_PhysXVehicles::VehicleWheel::get_CollisionMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x28);
}
float _Script_PhysXVehicles::VehicleWheel::GetSuspensionOffset() {
    return;
}
bool _Script_PhysXVehicles::VehicleWheel::get_bDontCreateShape() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void* _Script_PhysXVehicles::VehicleWheel::get_Velocity() {
    return (void*)((uintptr_t)this + 0xd8);
}
float& _Script_PhysXVehicles::VehicleWheel::get_ShapeWidth() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_PhysXVehicles::VehicleWheel::get_DebugLatSlip() {
    return *(float*)((uintptr_t)this + 0xa8);
}
float& _Script_PhysXVehicles::VehicleWheel::get_ShapeRadius() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_PhysXVehicles::VehicleWheel::get_SuspensionDampingRatio() {
    return *(float*)((uintptr_t)this + 0x84);
}
void _Script_PhysXVehicles::VehicleWheel::set_bDontCreateShape(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::VehicleWheel::get_LongStiffValue() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_PhysXVehicles::VehicleWheel::get_bAutoAdjustCollisionSize() {
    return (*(uint8_t*)((uintptr_t)this + 0x31 + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::VehicleWheel::set_bAutoAdjustCollisionSize(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x31 + 0);
    *(uint8_t*)((uintptr_t)this + 0x31 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::VehicleWheel::get_SuspensionMaxRaise() {
    return *(float*)((uintptr_t)this + 0x78);
}
void* _Script_PhysXVehicles::VehicleWheel::get_Offset() {
    return (void*)((uintptr_t)this + 0x34);
}
void* _Script_PhysXVehicles::VehicleWheel::get_OldLocation() {
    return (void*)((uintptr_t)this + 0xcc);
}
float& _Script_PhysXVehicles::VehicleWheel::get_Mass() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_PhysXVehicles::VehicleWheel::get_DampingRate() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleWheel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.VehicleWheel");
    return result;
}
float& _Script_PhysXVehicles::VehicleWheel::get_SteerAngle() {
    return *(float*)((uintptr_t)this + 0x50);
}
bool _Script_PhysXVehicles::VehicleWheel::get_bAffectedByHandbrake() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
float& _Script_PhysXVehicles::VehicleWheel::get_LatStiffValue() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void _Script_PhysXVehicles::VehicleWheel::set_bAffectedByHandbrake(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::TireType*& _Script_PhysXVehicles::VehicleWheel::get_TireType() {
    return *(_Script_Engine::TireType**)((uintptr_t)this + 0x58);
}
_Script_PhysXVehicles::TireConfig*& _Script_PhysXVehicles::VehicleWheel::get_TireConfig() {
    return *(_Script_PhysXVehicles::TireConfig**)((uintptr_t)this + 0x60);
}
float& _Script_PhysXVehicles::VehicleWheel::get_LatStiffMaxLoad() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_PhysXVehicles::VehicleWheel::get_SuspensionForceOffset() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_PhysXVehicles::VehicleWheel::get_SuspensionMaxDrop() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_PhysXVehicles::VehicleWheel::get_DebugLatForce() {
    return *(float*)((uintptr_t)this + 0xbc);
}
float& _Script_PhysXVehicles::VehicleWheel::get_SuspensionNaturalFrequency() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_PhysXVehicles::VehicleWheel::get_SweepType() {
    return (void*)((uintptr_t)this + 0x88);
}
float& _Script_PhysXVehicles::VehicleWheel::get_MaxBrakeTorque() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_PhysXVehicles::VehicleWheel::get_MaxHandBrakeTorque() {
    return *(float*)((uintptr_t)this + 0x90);
}
_Script_PhysXVehicles::WheeledVehicleMovementComponent*& _Script_PhysXVehicles::VehicleWheel::get_VehicleSim() {
    return *(_Script_PhysXVehicles::WheeledVehicleMovementComponent**)((uintptr_t)this + 0x98);
}
int32_t& _Script_PhysXVehicles::VehicleWheel::get_WheelIndex() {
    return *(int32_t*)((uintptr_t)this + 0xa0);
}
float& _Script_PhysXVehicles::VehicleWheel::get_DebugLongSlip() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_PhysXVehicles::VehicleWheel::get_DebugNormalizedTireLoad() {
    return *(float*)((uintptr_t)this + 0xac);
}
float& _Script_PhysXVehicles::VehicleWheel::get_DebugLongForce() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_PhysXVehicles::VehicleWheel::get_Location() {
    return (void*)((uintptr_t)this + 0xc0);
}
bool _Script_PhysXVehicles::VehicleWheel::IsInAir() {
    return;
}
float _Script_PhysXVehicles::VehicleWheel::GetSteerAngle() {
    return;
}
float _Script_PhysXVehicles::VehicleWheel::GetRotationAngle() {
    return;
}
