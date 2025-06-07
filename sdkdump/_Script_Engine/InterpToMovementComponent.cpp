#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HitResult.hpp"
#include "InterpToMovementComponent.hpp"
#include "MovementComponent.hpp"
float& _Script_Engine::InterpToMovementComponent::get_Duration() {
    return *(float*)((uintptr_t)this + 0x1b0);
}
bool _Script_Engine::InterpToMovementComponent::get_bPauseOnImpact() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b4 + 0)) & 1 != 0;
}
void _Script_Engine::InterpToMovementComponent::set_bPauseOnImpact(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::InterpToMovementComponent::get_bSweepOnMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b4 + 0)) & 2 != 0;
}
void _Script_Engine::InterpToMovementComponent::set_bSweepOnMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::InterpToMovementComponent::get_BehaviourType() {
    return (void*)((uintptr_t)this + 0x1b8);
}
bool _Script_Engine::InterpToMovementComponent::get_bForceSubStepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x1bc + 0)) & 1 != 0;
}
void _Script_Engine::InterpToMovementComponent::set_bForceSubStepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InterpToMovementComponent::get_OnInterpToStop() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Script_Engine::InterpToMovementComponent::get_OnInterpToReverse() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void* _Script_Engine::InterpToMovementComponent::get_OnWaitBeginDelegate() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Script_Engine::InterpToMovementComponent::get_OnResetDelegate() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_Engine::InterpToMovementComponent::get_OnWaitEndDelegate() {
    return (void*)((uintptr_t)this + 0x1f0);
}
float& _Script_Engine::InterpToMovementComponent::get_MaxSimulationTimeStep() {
    return *(float*)((uintptr_t)this + 0x210);
}
void* _Script_Engine::InterpToMovementComponent::get_ControlPoints() {
    return (void*)((uintptr_t)this + 0x218);
}
int32_t& _Script_Engine::InterpToMovementComponent::get_MaxSimulationIterations() {
    return *(int32_t*)((uintptr_t)this + 0x214);
}
_Script_CoreUObject::Class* _Script_Engine::InterpToMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpToMovementComponent");
    return result;
}
void _Script_Engine::InterpToMovementComponent::StopSimulating(_Script_Engine::HitResult& HitResult) {
    return;
}
void _Script_Engine::InterpToMovementComponent::RestartMovement(float InitialDirection) {
    return;
}
void _Script_Engine::InterpToMovementComponent::FinaliseControlPoints() {
    return;
}
