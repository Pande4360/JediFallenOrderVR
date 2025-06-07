#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_ForcePullPhysicsFreezeParameters.hpp"
bool _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_FreezePhysicsOnForceHold() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_FreezePhysicsAngularMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::set_FreezePhysicsOnForceHold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_TimeToFreezePhysicsOnForceHold() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_FreezePhysicsLinearMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::set_FreezePhysicsLinearMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::set_FreezePhysicsAngularMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_HeroControlBoneName() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_ControlBoneStartTime() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::get_ControlBoneFinishTime() {
    return *(float*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_ForcePullPhysicsFreezeParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_ForcePullPhysicsFreezeParameters");
    return result;
}
