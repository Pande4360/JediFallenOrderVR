#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintDrive.hpp"
float& _Script_Engine::ConstraintDrive::get_Stiffness() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ConstraintDrive::get_Damping() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Engine::ConstraintDrive::get_bEnableVelocityDrive() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 2 != 0;
}
bool _Script_Engine::ConstraintDrive::get_bEnablePositionDrive() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
float& _Script_Engine::ConstraintDrive::get_MaxForce() {
    return *(float*)((uintptr_t)this + 0x8);
}
void _Script_Engine::ConstraintDrive::set_bEnablePositionDrive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::ConstraintDrive::set_bEnableVelocityDrive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ConstraintDrive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConstraintDrive");
    return result;
}
