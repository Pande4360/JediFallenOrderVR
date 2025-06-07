#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VehicleDifferential4WData.hpp"
void* _Script_PhysXVehicles::VehicleDifferential4WData::get_DifferentialType() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_PhysXVehicles::VehicleDifferential4WData::get_FrontRearSplit() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_PhysXVehicles::VehicleDifferential4WData::get_CentreBias() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_PhysXVehicles::VehicleDifferential4WData::get_FrontLeftRightSplit() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_PhysXVehicles::VehicleDifferential4WData::get_RearLeftRightSplit() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_PhysXVehicles::VehicleDifferential4WData::get_FrontBias() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_PhysXVehicles::VehicleDifferential4WData::get_RearBias() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleDifferential4WData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.VehicleDifferential4WData");
    return result;
}
