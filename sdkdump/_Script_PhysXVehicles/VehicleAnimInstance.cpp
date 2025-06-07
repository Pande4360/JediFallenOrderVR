#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "VehicleAnimInstance.hpp"
#include "WheeledVehicle.hpp"
#include "WheeledVehicleMovementComponent.hpp"
_Script_PhysXVehicles::WheeledVehicleMovementComponent*& _Script_PhysXVehicles::VehicleAnimInstance::get_WheeledVehicleMovementComponent() {
    return *(_Script_PhysXVehicles::WheeledVehicleMovementComponent**)((uintptr_t)this + 0x9b0);
}
_Script_PhysXVehicles::WheeledVehicle* _Script_PhysXVehicles::VehicleAnimInstance::GetVehicle() {
    return;
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/PhysXVehicles.VehicleAnimInstance");
    return result;
}
