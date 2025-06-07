#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ConstraintProfileProperties.hpp"
float& _Script_Engine::ConstraintProfileProperties::get_ProjectionLinearTolerance() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::ConstraintProfileProperties::get_AngularBreakThreshold() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::ConstraintProfileProperties::get_ProjectionAngularTolerance() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::ConstraintProfileProperties::get_LinearBreakThreshold() {
    return *(float*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::ConstraintProfileProperties::get_LinearLimit() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::ConstraintProfileProperties::get_LinearDrive() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::ConstraintProfileProperties::get_ConeLimit() {
    return (void*)((uintptr_t)this + 0x2c);
}
void _Script_Engine::ConstraintProfileProperties::set_bEnableProjection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ConstraintProfileProperties::get_TwistLimit() {
    return (void*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::ConstraintProfileProperties::get_AngularDrive() {
    return (void*)((uintptr_t)this + 0xb4);
}
bool _Script_Engine::ConstraintProfileProperties::get_bDisableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 1 != 0;
}
void _Script_Engine::ConstraintProfileProperties::set_bDisableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ConstraintProfileProperties::get_bParentDominates() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 2 != 0;
}
void _Script_Engine::ConstraintProfileProperties::set_bParentDominates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ConstraintProfileProperties::get_bEnableProjection() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 4 != 0;
}
bool _Script_Engine::ConstraintProfileProperties::get_bAngularBreakable() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 8 != 0;
}
void _Script_Engine::ConstraintProfileProperties::set_bAngularBreakable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::ConstraintProfileProperties::get_bLinearBreakable() {
    return (*(uint8_t*)((uintptr_t)this + 0x100 + 0)) & 16 != 0;
}
void _Script_Engine::ConstraintProfileProperties::set_bLinearBreakable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x100 + 0);
    *(uint8_t*)((uintptr_t)this + 0x100 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ConstraintProfileProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ConstraintProfileProperties");
    return result;
}
