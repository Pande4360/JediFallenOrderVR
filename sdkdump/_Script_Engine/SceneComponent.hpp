#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Quat.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct PhysicsVolume;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SceneComponent : public ActorComponent {
    private: char pad_170[0x160]; public:
    void* get_PhysicsVolume();
    _Script_Engine::SceneComponent*& get_AttachParent();
    void* get_AttachSocketName();
    void* get_AttachChildren();
    void* get_ClientAttachedChildren();
    void* get_RelativeLocation();
    void* get_RelativeRotation();
    void* get_RelativeScale3D();
    void* get_ComponentVelocity();
    bool get_bComponentToWorldUpdated();
    void set_bComponentToWorldUpdated(bool value);
    bool get_bAbsoluteLocation();
    void set_bAbsoluteLocation(bool value);
    bool get_bAbsoluteRotation();
    void set_bAbsoluteRotation(bool value);
    bool get_bAbsoluteScale();
    void set_bAbsoluteScale(bool value);
    bool get_bVisible();
    void set_bVisible(bool value);
    bool get_bHiddenInGame();
    void set_bHiddenInGame(bool value);
    bool get_bShouldUpdatePhysicsVolume();
    void set_bShouldUpdatePhysicsVolume(bool value);
    bool get_bBoundsChangeTriggersStreamingDataRebuild();
    void set_bBoundsChangeTriggersStreamingDataRebuild(bool value);
    bool get_bUseAttachParentBound();
    void set_bUseAttachParentBound(bool value);
    bool get_bAbsoluteTranslation();
    void set_bAbsoluteTranslation(bool value);
    void* get_Mobility();
    void* get_DetailMode();
    void* get_PhysicsVolumeChangedDelegate();
    static _Script_CoreUObject::Class* static_class();
    void ToggleVisibility(bool bPropagateToChildren);
    bool SnapTo(_Script_Engine::SceneComponent* InParent, void* InSocketName);
    void SetWorldScale3D(_Script_CoreUObject::Vector NewScale);
    void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
    void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
    void SetRelativeScale3D(_Script_CoreUObject::Vector NewScale3D);
    void SetMobility(void* NewMobility);
    void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
    void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    void ResetRelativeTransform();
    void OnRep_Visibility(bool OldValue);
    void OnRep_Transform();
    void OnRep_AttachSocketName();
    void OnRep_AttachParent();
    void OnRep_AttachChildren();
    void K2_SetWorldTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldRotation(_Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetWorldLocation(_Script_CoreUObject::Vector NewLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeTransform(_Script_CoreUObject::Transform& NewTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeRotationDeferred(_Script_CoreUObject::Rotator NewRotation);
    void K2_SetRelativeRotation(_Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocationDeferred(_Script_CoreUObject::Vector NewLocation);
    void K2_SetRelativeLocationAndRotation(_Script_CoreUObject::Vector NewLocation, _Script_CoreUObject::Rotator NewRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_SetRelativeLocation(_Script_CoreUObject::Vector NewLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    _Script_CoreUObject::Transform K2_GetComponentToWorld();
    _Script_CoreUObject::Vector K2_GetComponentScale();
    _Script_CoreUObject::Rotator K2_GetComponentRotation();
    _Script_CoreUObject::Vector K2_GetComponentLocation();
    void K2_DetachFromComponent(void* LocationRule, void* RotationRule, void* ScaleRule, bool bCallModify);
    bool K2_AttachToComponent(_Script_Engine::SceneComponent* Parent, void* SocketName, void* LocationRule, void* RotationRule, void* ScaleRule, bool bWeldSimulatedBodies);
    bool K2_AttachTo(_Script_Engine::SceneComponent* InParent, void* InSocketName, void* AttachType, bool bWeldSimulatedBodies);
    void K2_AddWorldTransform(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddWorldOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddRelativeLocation(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalTransform(_Script_CoreUObject::Transform& DeltaTransform, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalRotation(_Script_CoreUObject::Rotator DeltaRotation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    void K2_AddLocalOffset(_Script_CoreUObject::Vector DeltaLocation, bool bSweep, _Script_Engine::HitResult& SweepHitResult, bool bTeleport);
    bool IsVisibleIgnoreLevelHidden();
    bool IsVisible();
    bool IsSimulatingPhysics(void* BoneName);
    bool IsAnySimulatingPhysics();
    _Script_CoreUObject::Vector GetUpVector();
    _Script_CoreUObject::Transform GetSocketTransform(void* InSocketName, void* TransformSpace);
    _Script_CoreUObject::Rotator GetSocketRotation(void* InSocketName);
    _Script_CoreUObject::Quat GetSocketQuaternion(void* InSocketName);
    _Script_CoreUObject::Vector GetSocketLocation(void* InSocketName);
    bool GetShouldUpdatePhysicsVolume();
    _Script_CoreUObject::Vector GetRightVector();
    _Script_CoreUObject::Transform GetRelativeTransform();
    _Script_Engine::PhysicsVolume* GetPhysicsVolume();
    void GetParentComponents(void*& Parents);
    int32_t GetNumChildrenComponents();
    _Script_CoreUObject::Vector GetForwardVector();
    _Script_CoreUObject::Vector GetComponentVelocity();
    void GetChildrenComponents(bool bIncludeAllDescendants, void*& Children);
    _Script_Engine::SceneComponent* GetChildComponent(int32_t ChildIndex);
    void* GetAttachSocketName();
    _Script_Engine::SceneComponent* GetAttachParent();
    void* GetAllSocketNames();
    bool DoesSocketExist(void* InSocketName);
    void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);
}; // Size: 0x2d0
#pragma pack(pop)
}
