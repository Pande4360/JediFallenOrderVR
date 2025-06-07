#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SimpleWheeledVehicleMovementComponent.hpp"
#include "WheeledVehicleMovementComponent.hpp"
void _Script_PhysXVehicles::SimpleWheeledVehicleMovementComponent::SetSteerAngle(float SteerAngle, int32_t WheelIndex) {
    return;
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::SimpleWheeledVehicleMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.SimpleWheeledVehicleMovementComponent");
    return result;
}
void _Script_PhysXVehicles::SimpleWheeledVehicleMovementComponent::SetDriveTorque(float DriveTorque, int32_t WheelIndex) {
    return;
}
void _Script_PhysXVehicles::SimpleWheeledVehicleMovementComponent::SetBrakeTorque(float BrakeTorque, int32_t WheelIndex) {
    return;
}
