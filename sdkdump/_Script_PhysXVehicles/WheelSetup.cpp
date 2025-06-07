#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WheelSetup.hpp"
_Script_CoreUObject::Class* _Script_PhysXVehicles::WheelSetup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PhysXVehicles.WheelSetup");
    return result;
}
void* _Script_PhysXVehicles::WheelSetup::get_WheelClass() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_PhysXVehicles::WheelSetup::get_AdditionalOffset() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_PhysXVehicles::WheelSetup::get_BoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_PhysXVehicles::WheelSetup::get_bDisableSteering() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_PhysXVehicles::WheelSetup::set_bDisableSteering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
