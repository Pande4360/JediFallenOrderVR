#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReplicatedVehicleState.hpp"
float& _Script_PhysXVehicles::ReplicatedVehicleState::get_SteeringInput() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_PhysXVehicles::ReplicatedVehicleState::get_ThrottleInput() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_PhysXVehicles::ReplicatedVehicleState::get_HandbrakeInput() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_PhysXVehicles::ReplicatedVehicleState::get_BrakeInput() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_PhysXVehicles::ReplicatedVehicleState::get_CurrentGear() {
    return *(int32_t*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_PhysXVehicles::ReplicatedVehicleState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.ReplicatedVehicleState");
    return result;
}
