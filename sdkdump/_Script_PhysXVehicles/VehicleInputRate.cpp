#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VehicleInputRate.hpp"
float& _Script_PhysXVehicles::VehicleInputRate::get_RiseRate() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_PhysXVehicles::VehicleInputRate::get_FallRate() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::VehicleInputRate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.VehicleInputRate");
    return result;
}
