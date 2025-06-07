#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VehicleGearData.hpp"
float& _Script_PhysXVehicles::VehicleGearData::get_Ratio() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleGearData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.VehicleGearData");
    return result;
}
float& _Script_PhysXVehicles::VehicleGearData::get_DownRatio() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_PhysXVehicles::VehicleGearData::get_UpRatio() {
    return *(float*)((uintptr_t)this + 0x8);
}
