#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "SceneComponent.hpp"
#include "WalkableSlopeOverride.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct RsFrameOfReference;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct PhysicalMaterial;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrimitiveComponent : public SceneComponent {
    private: char pad_2d0[0x860]; public:
    float& get_MinDrawDistance();
    float& get_LDMaxDrawDistance();
    float& get_CachedMaxDrawDistance();
    void* get_DepthPriorityGroup();
    void* get_ViewOwnerDepthPriorityGroup();
    void* get_IndirectLightingCacheQuality();
    void* get_LightmapType();
    void* get_VelocityBufferClipSpaceOverride();
    bool get_bNeverDistanceCull();
    void set_bNeverDistanceCull(bool value);
    bool get_bAlwaysCreatePhysicsState();
    void set_bAlwaysCreatePhysicsState(bool value);
    bool get_bGenerateOverlapEvents();
    void set_bGenerateOverlapEvents(bool value);
    bool get_bMultiBodyOverlap();
    void set_bMultiBodyOverlap(bool value);
    bool get_bCheckAsyncSceneOnMove();
    void set_bCheckAsyncSceneOnMove(bool value);
    bool get_bTraceComplexOnMove();
    void set_bTraceComplexOnMove(bool value);
    bool get_bReturnMaterialOnMove();
    void set_bReturnMaterialOnMove(bool value);
    bool get_bUseViewOwnerDepthPriorityGroup();
    void set_bUseViewOwnerDepthPriorityGroup(bool value);
    bool get_bAllowCullDistanceVolume();
    void set_bAllowCullDistanceVolume(bool value);
    bool get_bHasMotionBlurVelocityMeshes();
    void set_bHasMotionBlurVelocityMeshes(bool value);
    bool get_bVisibleInReflectionCaptures();
    void set_bVisibleInReflectionCaptures(bool value);
    bool get_bRenderInMainPass();
    void set_bRenderInMainPass(bool value);
    bool get_bRenderInMono();
    void set_bRenderInMono(bool value);
    bool get_bReceivesDecals();
    void set_bReceivesDecals(bool value);
    bool get_bOwnerNoSee();
    void set_bOwnerNoSee(bool value);
    bool get_bOnlyOwnerSee();
    void set_bOnlyOwnerSee(bool value);
    bool get_bTreatAsBackgroundForOcclusion();
    void set_bTreatAsBackgroundForOcclusion(bool value);
    bool get_bUseAsOccluder();
    void set_bUseAsOccluder(bool value);
    bool get_bDynamicDeformer();
    void set_bDynamicDeformer(bool value);
    bool get_bSelectable();
    void set_bSelectable(bool value);
    bool get_bForceMipStreaming();
    void set_bForceMipStreaming(bool value);
    bool get_bHasPerInstanceHitProxies();
    void set_bHasPerInstanceHitProxies(bool value);
    bool get_CastShadow();
    void set_CastShadow(bool value);
    bool get_bAffectDynamicIndirectLighting();
    void set_bAffectDynamicIndirectLighting(bool value);
    bool get_bAffectDistanceFieldLighting();
    void set_bAffectDistanceFieldLighting(bool value);
    bool get_bCastDynamicShadow();
    void set_bCastDynamicShadow(bool value);
    bool get_bCastStaticShadow();
    void set_bCastStaticShadow(bool value);
    bool get_bCastVolumetricTranslucentShadow();
    void set_bCastVolumetricTranslucentShadow(bool value);
    bool get_bSelfShadowOnly();
    void set_bSelfShadowOnly(bool value);
    bool get_bCastFarShadow();
    void set_bCastFarShadow(bool value);
    bool get_bCastInsetShadow();
    void set_bCastInsetShadow(bool value);
    bool get_bCastCinematicShadow();
    void set_bCastCinematicShadow(bool value);
    bool get_bCastHiddenShadow();
    void set_bCastHiddenShadow(bool value);
    bool get_bCastShadowAsTwoSided();
    void set_bCastShadowAsTwoSided(bool value);
    bool get_bLightAsIfStatic();
    void set_bLightAsIfStatic(bool value);
    bool get_bLightAttachmentsAsGroup();
    void set_bLightAttachmentsAsGroup(bool value);
    bool get_bReceiveMobileCSMShadows();
    void set_bReceiveMobileCSMShadows(bool value);
    bool get_bSingleSampleShadowFromStationaryLights();
    void set_bSingleSampleShadowFromStationaryLights(bool value);
    bool get_bIgnoreRadialImpulse();
    void set_bIgnoreRadialImpulse(bool value);
    bool get_bIgnoreRadialForce();
    void set_bIgnoreRadialForce(bool value);
    bool get_bApplyImpulseOnDamage();
    void set_bApplyImpulseOnDamage(bool value);
    bool get_bReplicatePhysicsToAutonomousProxy();
    void set_bReplicatePhysicsToAutonomousProxy(bool value);
    bool get_AlwaysLoadOnClient();
    void set_AlwaysLoadOnClient(bool value);
    bool get_AlwaysLoadOnServer();
    void set_AlwaysLoadOnServer(bool value);
    bool get_bUseEditorCompositing();
    void set_bUseEditorCompositing(bool value);
    bool get_bRenderCustomDepth();
    void set_bRenderCustomDepth(bool value);
    bool get_bForceCachedShadowmap();
    void set_bForceCachedShadowmap(bool value);
    bool get_bCanBeOccludedWithCustomDepth();
    void set_bCanBeOccludedWithCustomDepth(bool value);
    void* get_bHasCustomNavigableGeometry();
    void* get_CanCharacterStepUpOn();
    void* get_LightingChannels();
    void* get_CustomDepthStencilWriteMask();
    int32_t& get_CustomDepthStencilValue();
    int32_t& get_TranslucencySortPriority();
    int32_t& get_VisibilityId();
    float& get_LpvBiasMultiplier();
    float& get_DitherAlpha();
    float& get_IndirectLightingScale();
    float& get_SkylightScale();
    _Script_Engine::RsFrameOfReference*& get_FrameOfReference();
    float& get_BoundsScale();
    float& get_LastSubmitTime();
    float& get_LastRenderTime();
    float& get_LastRenderTimeOnScreen();
    void* get_MoveIgnoreActors();
    void* get_MoveIgnoreComponents();
    void* get_BodyInstance();
    void* get_OnComponentHit();
    void* get_OnComponentBeginOverlap();
    void* get_OnComponentEndOverlap();
    void* get_OnComponentWake();
    void* get_OnComponentSleep();
    void* get_OnBeginCursorOver();
    void* get_OnEndCursorOver();
    void* get_OnClicked();
    void* get_OnReleased();
    void* get_OnInputTouchBegin();
    void* get_OnInputTouchEnd();
    void* get_OnInputTouchEnter();
    void* get_OnInputTouchLeave();
    _Script_Engine::PrimitiveComponent*& get_LODParentPrimitive();
    void* get_PostPhysicsComponentTick();
    void* get_OnInflictingDamageFromCollision();
    static _Script_CoreUObject::Class* static_class();
    void WakeRigidBody(void* BoneName);
    void WakeAllRigidBodies();
    void SetWalkableSlopeOverride(_Script_Engine::WalkableSlopeOverride& NewOverride);
    void SetVelocityBufferClipSpaceOverride(_Script_CoreUObject::Vector2D InOverride);
    void SetUseCCD(bool InUseCCD, void* BoneName);
    void SetTranslucentSortPriority(int32_t NewTranslucentSortPriority);
    void SetSkylightScale(float NewSkylightScale);
    void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
    void SetSimulatePhysics(bool bSimulate);
    void SetRenderInMono(bool bValue);
    void SetRenderInMainPass(bool bValue);
    void SetRenderCustomDepthAndCanBeOccluded(bool bCustomDepth, bool bCanBeOccluded);
    void SetRenderCustomDepth(bool bValue);
    void SetReceivesDecals(bool bNewReceivesDecals);
    void SetPhysMaterialOverride(_Script_Engine::PhysicalMaterial* NewPhysMaterial);
    void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, void* BoneName);
    void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, void* BoneName);
    void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, void* BoneName);
    void SetPhysicsLinearVelocity(_Script_CoreUObject::Vector NewVel, bool bAddToCurrent, void* BoneName);
    void SetPhysicsAngularVelocityInRadians(_Script_CoreUObject::Vector NewAngVel, bool bAddToCurrent, void* BoneName);
    void SetPhysicsAngularVelocityInDegrees(_Script_CoreUObject::Vector NewAngVel, bool bAddToCurrent, void* BoneName);
    void SetPhysicsAngularVelocity(_Script_CoreUObject::Vector NewAngVel, bool bAddToCurrent, void* BoneName);
    void SetOwnerNoSee(bool bNewOwnerNoSee);
    void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
    void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
    void SetMaterialByName(void* MaterialSlotName, _Script_Engine::MaterialInterface* Material);
    void SetMaterial(int32_t ElementIndex, _Script_Engine::MaterialInterface* Material);
    void SetMassScale(void* BoneName, float InMassScale);
    void SetMassOverrideInKg(void* BoneName, float MassInKg, bool bOverrideMass);
    void SetLockedAxis(void* LockedAxis);
    void SetLinearDamping(float InDamping);
    void SetIndirectLightingScale(float NewIndirectLightingScale);
    void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
    void SetForceCachedShadowmap(bool bNewForceCachedShadowmap);
    void SetEnableGravity(bool bGravityEnabled);
    void SetDynamicDeformer(bool bValue);
    void SetDitherAlpha(float NewDitherAlpha);
    void SetCustomDepthStencilWriteMask(void* WriteMaskBit);
    void SetCustomDepthStencilValue(int32_t Value);
    void SetCullDistance(float NewCullDistance);
    void SetConstraintMode(void* ConstraintMode);
    void SetConstraintLockedAxes(bool bLockXTranslation, bool bLockYTranslation, bool bLockZTranslation, bool bLockXRotation, bool bLockYRotation, bool bLockZRotation);
    void SetCollisionResponseToChannel(void* Channel, void* NewResponse);
    void SetCollisionResponseToAllChannels(void* NewResponse);
    void SetCollisionProfileName(void* InCollisionProfileName);
    void SetCollisionObjectType(void* Channel);
    void SetCollisionEnabled(void* NewType);
    void SetCenterOfMass(_Script_CoreUObject::Vector CenterOfMassOffset, void* BoneName);
    void SetCastShadow(bool NewCastShadow);
    void SetBoundsScale(float NewBoundsScale);
    void SetApplyDamageFromPhysicsCollision(bool bNewValue);
    void SetAngularDamping(float InDamping);
    void SetAllUseCCD(bool InUseCCD);
    void SetAllPhysicsLinearVelocity(_Script_CoreUObject::Vector NewVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInRadians(_Script_CoreUObject::Vector& NewAngVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocityInDegrees(_Script_CoreUObject::Vector& NewAngVel, bool bAddToCurrent);
    void SetAllPhysicsAngularVelocity(_Script_CoreUObject::Vector& NewAngVel, bool bAddToCurrent);
    void SetAllMassScale(float InMassScale);
    _Script_CoreUObject::Vector ScaleByMomentOfInertia(_Script_CoreUObject::Vector InputVector, void* BoneName);
    void PutRigidBodyToSleep(void* BoneName);
    bool K2_SphereTraceComponent(_Script_CoreUObject::Vector TraceStart, _Script_CoreUObject::Vector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit);
    bool K2_SphereOverlapComponent(_Script_CoreUObject::Vector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit);
    bool K2_LineTraceComponent(_Script_CoreUObject::Vector TraceStart, _Script_CoreUObject::Vector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit);
    bool K2_IsQueryCollisionEnabled();
    bool K2_IsPhysicsCollisionEnabled();
    bool K2_IsCollisionEnabled();
    bool K2_BoxOverlapComponent(_Script_CoreUObject::Vector InBoxCentre, _Script_CoreUObject::Box InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit);
    bool IsOverlappingComponent(_Script_Engine::PrimitiveComponent* OtherComp);
    bool IsOverlappingActor(_Script_Engine::Actor* Other);
    bool IsGravityEnabled();
    bool IsAnyRigidBodyAwake();
    void IgnoreComponentWhenMoving(_Script_Engine::PrimitiveComponent* Component, bool bShouldIgnore);
    void IgnoreActorWhenMoving(_Script_Engine::Actor* Actor, bool bShouldIgnore);
    _Script_Engine::WalkableSlopeOverride GetWalkableSlopeOverride();
    _Script_CoreUObject::Vector GetPhysicsLinearVelocityAtPoint(_Script_CoreUObject::Vector Point, void* BoneName);
    _Script_CoreUObject::Vector GetPhysicsLinearVelocity(void* BoneName);
    _Script_CoreUObject::Vector GetPhysicsAngularVelocityInRadians(void* BoneName);
    _Script_CoreUObject::Vector GetPhysicsAngularVelocityInDegrees(void* BoneName);
    _Script_CoreUObject::Vector GetPhysicsAngularVelocity(void* BoneName);
    void GetOverlappingComponents(void*& OutOverlappingComponents);
    void GetOverlappingActors(void*& OverlappingActors, void* ClassFilter);
    int32_t GetNumMaterials();
    _Script_Engine::MaterialInterface* GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex);
    _Script_Engine::MaterialInterface* GetMaterial(int32_t ElementIndex);
    float GetMassScale(void* BoneName);
    float GetMass();
    float GetLinearDamping();
    _Script_CoreUObject::Vector GetInertiaTensor(void* BoneName);
    bool GetGenerateOverlapEvents();
    void GetConstraintLockedAxes(bool& bLockXTranslation, bool& bLockYTranslation, bool& bLockZTranslation, bool& bLockXRotation, bool& bLockYRotation, bool& bLockZRotation);
    void* GetCollisionResponseToChannel(void* Channel);
    void* GetCollisionProfileName();
    void* GetCollisionObjectType();
    void* GetCollisionEnabled();
    float GetClosestPointOnCollision(_Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& OutPointOnBody, void* BoneName);
    _Script_CoreUObject::Vector GetCenterOfMass(void* BoneName);
    float GetAngularDamping();
    _Script_Engine::MaterialInstanceDynamic* CreateDynamicMaterialInstance(int32_t ElementIndex, _Script_Engine::MaterialInterface* SourceMaterial, void* OptionalName);
    _Script_Engine::MaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, _Script_Engine::MaterialInterface* Parent);
    _Script_Engine::MaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex);
    void* CopyArrayOfMoveIgnoreComponents();
    void* CopyArrayOfMoveIgnoreActors();
    void ClearMoveIgnoreComponents();
    void ClearMoveIgnoreActors();
    bool CanCharacterStepUp(_Script_Engine::Pawn* Pawn);
    void AddTorqueInRadians(_Script_CoreUObject::Vector Torque, void* BoneName, bool bAccelChange);
    void AddTorqueInDegrees(_Script_CoreUObject::Vector Torque, void* BoneName, bool bAccelChange);
    void AddTorque(_Script_CoreUObject::Vector Torque, void* BoneName, bool bAccelChange);
    void AddRadialImpulse(_Script_CoreUObject::Vector origin, float Radius, float Strength, void* Falloff, bool bVelChange);
    void AddRadialForce(_Script_CoreUObject::Vector origin, float Radius, float Strength, void* Falloff, bool bAccelChange);
    void AddImpulseAtLocation(_Script_CoreUObject::Vector Impulse, _Script_CoreUObject::Vector Location, void* BoneName);
    void AddImpulse(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange);
    void AddForceAtLocationLocal(_Script_CoreUObject::Vector Force, _Script_CoreUObject::Vector Location, void* BoneName);
    void AddForceAtLocation(_Script_CoreUObject::Vector Force, _Script_CoreUObject::Vector Location, void* BoneName);
    void AddForce(_Script_CoreUObject::Vector Force, void* BoneName, bool bAccelChange);
    void AddAngularImpulseInRadians(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange);
    void AddAngularImpulseInDegrees(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange);
    void AddAngularImpulse(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange);
}; // Size: 0xb30
#pragma pack(pop)
}
