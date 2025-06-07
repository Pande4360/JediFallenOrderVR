#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MovementComponent.hpp"
#include "NavMovementComponent.hpp"
void* _Script_Engine::NavMovementComponent::get_NavAgentProps() {
    return (void*)((uintptr_t)this + 0x1b0);
}
bool _Script_Engine::NavMovementComponent::get_bMaintainCharacterMotionOnFinish() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e8 + 0)) & 1 != 0;
}
void _Script_Engine::NavMovementComponent::set_bMaintainCharacterMotionOnFinish(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::NavMovementComponent::get_FixedPathBrakingDistance() {
    return *(float*)((uintptr_t)this + 0x1ec);
}
void _Script_Engine::NavMovementComponent::set_bUpdateNavAgentWithOwnersCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::NavMovementComponent::get_bUpdateNavAgentWithOwnersCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f0 + 0)) & 1 != 0;
}
bool _Script_Engine::NavMovementComponent::get_bUseAccelerationForPaths() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f0 + 0)) & 2 != 0;
}
void _Script_Engine::NavMovementComponent::set_bUseAccelerationForPaths(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::NavMovementComponent::get_bUseFixedBrakingDistanceForPaths() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f0 + 0)) & 4 != 0;
}
void _Script_Engine::NavMovementComponent::set_bUseFixedBrakingDistanceForPaths(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::NavMovementComponent::get_MovementState() {
    return (void*)((uintptr_t)this + 0x1f1);
}
_Script_CoreUObject::Object*& _Script_Engine::NavMovementComponent::get_PathFollowingComp() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Script_Engine::NavMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavMovementComponent");
    return result;
}
void _Script_Engine::NavMovementComponent::StopMovementKeepPathing() {
    return;
}
void _Script_Engine::NavMovementComponent::StopActiveMovement() {
    return;
}
bool _Script_Engine::NavMovementComponent::IsSwimming() {
    return;
}
bool _Script_Engine::NavMovementComponent::IsMovingOnGround() {
    return;
}
bool _Script_Engine::NavMovementComponent::IsFlying() {
    return;
}
bool _Script_Engine::NavMovementComponent::IsFalling() {
    return;
}
bool _Script_Engine::NavMovementComponent::IsCrouching() {
    return;
}
