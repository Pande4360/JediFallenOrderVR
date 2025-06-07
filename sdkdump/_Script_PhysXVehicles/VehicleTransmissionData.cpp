#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VehicleTransmissionData.hpp"
float& _Script_PhysXVehicles::VehicleTransmissionData::get_NeutralGearUpRatio() {
    return *(float*)((uintptr_t)this + 0x24);
}
void* _Script_PhysXVehicles::VehicleTransmissionData::get_ForwardGears() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_PhysXVehicles::VehicleTransmissionData::get_bUseGearAutoBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::VehicleTransmissionData::set_bUseGearAutoBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_PhysXVehicles::VehicleTransmissionData::get_GearSwitchTime() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_PhysXVehicles::VehicleTransmissionData::get_GearAutoBoxLatency() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_PhysXVehicles::VehicleTransmissionData::get_FinalRatio() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_PhysXVehicles::VehicleTransmissionData::get_ReverseGearRatio() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_PhysXVehicles::VehicleTransmissionData::get_ClutchStrength() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleTransmissionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.VehicleTransmissionData");
    return result;
}
