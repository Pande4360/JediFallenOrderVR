#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_PhasePhysicsParameters.hpp"
float& _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_PhysicsLinearImpulseStrength() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_PhysicsLinearImpulseRandomVariation() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_StartPhysicsAtTheEndOfAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_PhysicsAngularImpulseStrength() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_PhysicsAngularImpulseRandomVariation() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_PhasePhysicsParameters");
    return result;
}
void _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::set_StartPhysicsAtTheEndOfAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_StartPhysicsOnAttachedComponents() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 2 != 0;
}
void _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::set_StartPhysicsOnAttachedComponents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_InheritInitialVelocityFromParentComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 4 != 0;
}
void _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::set_InheritInitialVelocityFromParentComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_StartPhysicsOnBonesWithPrefix() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwSimpleDestructible_PhasePhysicsParameters::get_DirectionalHitImpulseStrength() {
    return *(float*)((uintptr_t)this + 0x20);
}
