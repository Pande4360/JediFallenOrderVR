#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
#include "HitResult.hpp"
#include "PhysicsVolume.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::SceneComponent::get_RelativeLocation() {
    return (void*)((uintptr_t)this + 0x1e4);
}
void _Script_Engine::SceneComponent::K2_SetWorldRotation(_Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void* _Script_Engine::SceneComponent::get_PhysicsVolume() {
    return (void*)((uintptr_t)this + 0x17c);
}
_Script_Engine::SceneComponent*& _Script_Engine::SceneComponent::get_AttachParent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x188);
}
void* _Script_Engine::SceneComponent::get_AttachSocketName() {
    return (void*)((uintptr_t)this + 0x190);
}
void _Script_Engine::SceneComponent::K2_SetRelativeRotation(_Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddLocalOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void* _Script_Engine::SceneComponent::get_AttachChildren() {
    return (void*)((uintptr_t)this + 0x198);
}
void _Script_Engine::SceneComponent::K2_SetRelativeLocation(_Script_CoreUObject::Vector NewLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void* _Script_Engine::SceneComponent::get_ClientAttachedChildren() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Script_Engine::SceneComponent::SetRelativeScale3D(_Script_CoreUObject::Vector NewScale3D) {
    return;
}
void* _Script_Engine::SceneComponent::get_RelativeScale3D() {
    return (void*)((uintptr_t)this + 0x1fc);
}
void* _Script_Engine::SceneComponent::get_RelativeRotation() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_Engine::SceneComponent::get_ComponentVelocity() {
    return (void*)((uintptr_t)this + 0x240);
}
bool _Script_Engine::SceneComponent::K2_AttachToComponent(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule, bool bWeldSimulatedBodies) {
    return;
}
bool _Script_Engine::SceneComponent::SnapTo(_Script_Engine::SceneComponent* InParent, void* InSocketName) {
    return;
}
bool _Script_Engine::SceneComponent::get_bComponentToWorldUpdated() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
void _Script_Engine::SceneComponent::set_bComponentToWorldUpdated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SceneComponent::OnRep_AttachParent() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SceneComponent::K2_GetComponentRotation() {
    return;
}
void _Script_Engine::SceneComponent::SetWorldScale3D(_Script_CoreUObject::Vector NewScale) {
    return;
}
bool _Script_Engine::SceneComponent::get_bAbsoluteLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 4 != 0;
}
void _Script_Engine::SceneComponent::set_bAbsoluteLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SceneComponent::set_bAbsoluteRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SceneComponent::IsAnySimulatingPhysics() {
    return;
}
bool _Script_Engine::SceneComponent::get_bAbsoluteRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 8 != 0;
}
bool _Script_Engine::SceneComponent::get_bAbsoluteScale() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 16 != 0;
}
void _Script_Engine::SceneComponent::set_bAbsoluteScale(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SceneComponent::get_bVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 32 != 0;
}
void _Script_Engine::SceneComponent::set_bVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::SceneComponent::OnRep_AttachSocketName() {
    return;
}
_Script_CoreUObject::Quat _Script_Engine::SceneComponent::GetSocketQuaternion(void* InSocketName) {
    return;
}
bool _Script_Engine::SceneComponent::get_bHiddenInGame() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 64 != 0;
}
void _Script_Engine::SceneComponent::set_bHiddenInGame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SceneComponent::get_bShouldUpdatePhysicsVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 128 != 0;
}
void _Script_Engine::SceneComponent::K2_DetachFromComponent(void* LocationRule, void* RotationRule, void* ScaleRule, bool bCallModify) {
    return;
}
void _Script_Engine::SceneComponent::set_bShouldUpdatePhysicsVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::SceneComponent::get_bBoundsChangeTriggersStreamingDataRebuild() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 1 != 0;
}
void _Script_Engine::SceneComponent::K2_AddRelativeRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::set_bBoundsChangeTriggersStreamingDataRebuild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SceneComponent::set_bAbsoluteTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::SceneComponent::K2_SetWorldLocation(_Script_CoreUObject::Vector NewLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void* _Script_Engine::SceneComponent::get_PhysicsVolumeChangedDelegate() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Script_Engine::SceneComponent::get_bUseAttachParentBound() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 2 != 0;
}
void _Script_Engine::SceneComponent::set_bUseAttachParentBound(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SceneComponent::get_bAbsoluteTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 64 != 0;
}
void* _Script_Engine::SceneComponent::get_Mobility() {
    return (void*)((uintptr_t)this + 0x24e);
}
void _Script_Engine::SceneComponent::K2_SetRelativeTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void* _Script_Engine::SceneComponent::get_DetailMode() {
    return (void*)((uintptr_t)this + 0x24f);
}
_Script_CoreUObject::Class* _Script_Engine::SceneComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SceneComponent");
    return result;
}
void _Script_Engine::SceneComponent::K2_SetRelativeLocationDeferred(_Script_CoreUObject::Vector NewLocation) {
    return;
}
void _Script_Engine::SceneComponent::ToggleVisibility(bool bPropagateToChildren) {
    return;
}
void _Script_Engine::SceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
    return;
}
void _Script_Engine::SceneComponent::SetMobility(void* NewMobility) {
    return;
}
void _Script_Engine::SceneComponent::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren) {
    return;
}
void _Script_Engine::SceneComponent::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
    return;
}
void _Script_Engine::SceneComponent::ResetRelativeTransform() {
    return;
}
void _Script_Engine::SceneComponent::OnRep_AttachChildren() {
    return;
}
void _Script_Engine::SceneComponent::OnRep_Visibility(bool OldValue) {
    return;
}
void _Script_Engine::SceneComponent::OnRep_Transform() {
    return;
}
void _Script_Engine::SceneComponent::K2_SetWorldTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::K2_SetWorldLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SceneComponent::K2_GetComponentToWorld() {
    return;
}
void _Script_Engine::SceneComponent::K2_SetRelativeRotationDeferred(_Script_CoreUObject::Rotator NewRotation) {
    return;
}
void _Script_Engine::SceneComponent::K2_SetRelativeLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::K2_GetComponentScale() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::K2_GetComponentLocation() {
    return;
}
bool _Script_Engine::SceneComponent::K2_AttachTo(_Script_Engine::SceneComponent* InParent, void* InSocketName, void* AttachType, bool bWeldSimulatedBodies) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddWorldTransform(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddWorldRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddWorldOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddRelativeLocation(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddLocalTransform(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
void _Script_Engine::SceneComponent::K2_AddLocalRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport) {
    return;
}
bool _Script_Engine::SceneComponent::IsVisibleIgnoreLevelHidden() {
    return;
}
bool _Script_Engine::SceneComponent::IsVisible() {
    return;
}
bool _Script_Engine::SceneComponent::IsSimulatingPhysics(void* BoneName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::GetUpVector() {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SceneComponent::GetSocketTransform(void* InSocketName, void* TransformSpace) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::SceneComponent::GetSocketRotation(void* InSocketName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::GetSocketLocation(void* InSocketName) {
    return;
}
bool _Script_Engine::SceneComponent::GetShouldUpdatePhysicsVolume() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::GetRightVector() {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SceneComponent::GetRelativeTransform() {
    return;
}
_Script_Engine::PhysicsVolume* _Script_Engine::SceneComponent::GetPhysicsVolume() {
    return;
}
void _Script_Engine::SceneComponent::GetParentComponents(void*& Parents) {
    return;
}
int32_t _Script_Engine::SceneComponent::GetNumChildrenComponents() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::GetForwardVector() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SceneComponent::GetComponentVelocity() {
    return;
}
void _Script_Engine::SceneComponent::GetChildrenComponents(bool bIncludeAllDescendants, void*& Children) {
    return;
}
_Script_Engine::SceneComponent* _Script_Engine::SceneComponent::GetChildComponent(int32_t ChildIndex) {
    return;
}
void* _Script_Engine::SceneComponent::GetAttachSocketName() {
    return;
}
_Script_Engine::SceneComponent* _Script_Engine::SceneComponent::GetAttachParent() {
    return;
}
void* _Script_Engine::SceneComponent::GetAllSocketNames() {
    return;
}
bool _Script_Engine::SceneComponent::DoesSocketExist(void* InSocketName) {
    return;
}
void _Script_Engine::SceneComponent::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) {
    return;
}
