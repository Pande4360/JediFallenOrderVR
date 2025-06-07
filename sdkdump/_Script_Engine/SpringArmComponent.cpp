#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SceneComponent.hpp"
#include "SpringArmComponent.hpp"
float& _Script_Engine::SpringArmComponent::get_TargetArmLength() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
bool _Script_Engine::SpringArmComponent::get_bInheritYaw() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 8 != 0;
}
float& _Script_Engine::SpringArmComponent::get_ProbeOcclusionDelay() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
void* _Script_Engine::SpringArmComponent::get_SocketOffset() {
    return (void*)((uintptr_t)this + 0x2cc);
}
void* _Script_Engine::SpringArmComponent::get_TargetOffset() {
    return (void*)((uintptr_t)this + 0x2d8);
}
float& _Script_Engine::SpringArmComponent::get_CameraLagMaxTimeStep() {
    return *(float*)((uintptr_t)this + 0x300);
}
float& _Script_Engine::SpringArmComponent::get_ProbeSize() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
void* _Script_Engine::SpringArmComponent::get_ProbeChannel() {
    return (void*)((uintptr_t)this + 0x2f0);
}
bool _Script_Engine::SpringArmComponent::get_bDoCollisionTest() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 1 != 0;
}
void _Script_Engine::SpringArmComponent::set_bDoCollisionTest(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bUsePawnControlRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 2 != 0;
}
_Script_CoreUObject::Rotator _Script_Engine::SpringArmComponent::GetTargetRotation() {
    return;
}
void _Script_Engine::SpringArmComponent::set_bUsePawnControlRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bInheritPitch() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 4 != 0;
}
void _Script_Engine::SpringArmComponent::set_bInheritPitch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SpringArmComponent::set_bInheritYaw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bInheritRoll() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 16 != 0;
}
void _Script_Engine::SpringArmComponent::set_bInheritRoll(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bEnableCameraLag() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 32 != 0;
}
void _Script_Engine::SpringArmComponent::set_bEnableCameraLag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bEnableCameraRotationLag() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 64 != 0;
}
void _Script_Engine::SpringArmComponent::set_bEnableCameraRotationLag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bUseCameraLagSubstepping() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f4 + 0)) & 128 != 0;
}
void _Script_Engine::SpringArmComponent::set_bUseCameraLagSubstepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f4 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SpringArmComponent::get_bDrawDebugLagMarkers() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f5 + 0)) & 1 != 0;
}
void _Script_Engine::SpringArmComponent::set_bDrawDebugLagMarkers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SpringArmComponent::get_CameraLagSpeed() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
float& _Script_Engine::SpringArmComponent::get_CameraRotationLagSpeed() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
float& _Script_Engine::SpringArmComponent::get_CameraLagMaxDistance() {
    return *(float*)((uintptr_t)this + 0x304);
}
_Script_CoreUObject::Class* _Script_Engine::SpringArmComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SpringArmComponent");
    return result;
}
bool _Script_Engine::SpringArmComponent::IsCollisionFixApplied() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SpringArmComponent::GetUnfixedCameraPosition() {
    return;
}
