#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LinearDriveConstraint.hpp"
void* _Script_Engine::LinearDriveConstraint::get_PositionTarget() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::LinearDriveConstraint::get_YDrive() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::LinearDriveConstraint::get_VelocityTarget() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::LinearDriveConstraint::get_XDrive() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_Engine::LinearDriveConstraint::get_ZDrive() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Script_Engine::LinearDriveConstraint::get_bEnablePositionDrive() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void _Script_Engine::LinearDriveConstraint::set_bEnablePositionDrive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::LinearDriveConstraint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.LinearDriveConstraint");
    return result;
}
