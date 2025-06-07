#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\SkinnedMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsSetRopeAttachmentParams;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsGameTechRT {
struct RsRopeAttachmentComponent;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsRopeComponent : public _Script_Engine::SkinnedMeshComponent {
    private: char pad_d40[0x1140]; public:
    void* get_OnRopeAttached();
    void* get_OnRopeDetached();
    void* get_OnRopeForcePullStart();
    void* get_OnRopeForcePullEnd();
    void* get_OnRopeAttachedAirBegin();
    void* get_OnRopeAttachedAirEnd();
    void* get_OnRopeAttachedGroundBegin();
    void* get_OnRopeAttachedGroundEnd();
    void* get_OnPostUpdateRope();
    float& get_Length();
    float& get_RopeAdditiveStretchLength();
    float& get_RopeParticleRadius();
    float& get_RopeMotionDriverCollisionInterpolationDuration();
    float& get_SwingRangeDegrees();
    float& get_ClimbAttachmentRangeDegrees();
    float& get_PreferredAttachmentLength();
    float& get_DisableRopeCollisionUpToLength();
    float& get_OverrideSwingSlowdownRangePercentage();
    float& get_OverrideSwingSlowdownStrength();
    float& get_RopeAirDetachLengthInterpolateTime();
    float& get_RopeGroundDetachLengthInterpolateTime();
    float& get_OverrideGroundMaxAttachmentLength();
    float& get_RopeMeshRadius();
    float& get_RopeTileMaterial();
    float& get_RopeRenderStrainedAirInterpolationSpeed();
    float& get_RopeRenderStrainedAirMinAlpha();
    float& get_RopeRenderStrainedAirMaxAlpha();
    float& get_RopeRenderStrainedGroundInterpolationSpeed();
    float& get_RopeRenderStrainedGroundMinAlpha();
    float& get_RopeRenderStrainedGroundMaxAlpha();
    float& get_RopeDeactivationDistance();
    int32_t& get_RopeCollisionChannels();
    bool get_bRopeCollisionEnabled();
    void set_bRopeCollisionEnabled(bool value);
    bool get_bCanAttachToRopeInAir();
    void set_bCanAttachToRopeInAir(bool value);
    bool get_bCanSwingOnRope();
    void set_bCanSwingOnRope(bool value);
    bool get_bCanClimbOnRope();
    void set_bCanClimbOnRope(bool value);
    bool get_bCanClimbAscendDescendOnRope();
    void set_bCanClimbAscendDescendOnRope(bool value);
    bool get_bCanClimbTurnOnRope();
    void set_bCanClimbTurnOnRope(bool value);
    bool get_bAllowRopeReattach();
    void set_bAllowRopeReattach(bool value);
    bool get_bSlideToPreferredAttachmentLength();
    void set_bSlideToPreferredAttachmentLength(bool value);
    bool get_bCanAttachToRopeOnGround();
    void set_bCanAttachToRopeOnGround(bool value);
    bool get_bFaceRopeWhenAttachedOnGround();
    void set_bFaceRopeWhenAttachedOnGround(bool value);
    bool get_bCanForcePullRope();
    void set_bCanForcePullRope(bool value);
    bool get_bCanForcePullRopeOnGround();
    void set_bCanForcePullRopeOnGround(bool value);
    bool get_bCanForcePullRopeInAir();
    void set_bCanForcePullRopeInAir(bool value);
    bool get_bCanForcePullRopeWithMotionDriver();
    void set_bCanForcePullRopeWithMotionDriver(bool value);
    bool get_bForcePullRopeFromPreferredAttachment();
    void set_bForcePullRopeFromPreferredAttachment(bool value);
    bool get_bCanForcePullRopeOverLength();
    void set_bCanForcePullRopeOverLength(bool value);
    bool get_bSpawnSettled();
    void set_bSpawnSettled(bool value);
    bool get_bAllowAutoDetachOverLength();
    void set_bAllowAutoDetachOverLength(bool value);
    bool get_bAllowResetRopePhysics();
    void set_bAllowResetRopePhysics(bool value);
    bool get_bOnlyRenderToAttachment();
    void set_bOnlyRenderToAttachment(bool value);
    bool get_bRenderStrainedWhenAttachedInAir();
    void set_bRenderStrainedWhenAttachedInAir(bool value);
    bool get_bRenderStrainedWhenAttachedOnGround();
    void set_bRenderStrainedWhenAttachedOnGround(bool value);
    bool get_bAllowDeactivateRopeOwner();
    void set_bAllowDeactivateRopeOwner(bool value);
    float& get_RopeStrafeLength();
    float& get_RopeForcePullLength();
    bool get_bSeparateLengthForRopeStrafe();
    void set_bSeparateLengthForRopeStrafe(bool value);
    bool get_bSeparateLengthForRopeForcePull();
    void set_bSeparateLengthForRopeForcePull(bool value);
    bool get_IsPole();
    void set_IsPole(bool value);
    bool get_IsRopeInteractable();
    void set_IsRopeInteractable(bool value);
    static _Script_CoreUObject::Class* static_class();
    bool ShouldSlideToPreferredAttachmentLength();
    void SetTargetRopeLength(float targetLength, float timeToReachTarget);
    void SetRopeUnstretchedLength(float newLength);
    void SetRopeSwingAxis(_Script_CoreUObject::Vector SwingAxis);
    void SetRopeStretched(bool stretched, bool interpolateRopeLength, float timeToInterpolate);
    void SetRopeStretchDirection(_Script_CoreUObject::Vector Direction);
    void SetRopeParticleVelocity(int32_t ParticleIndex, _Script_CoreUObject::Vector Velocity);
    void SetRopeParticleRadius(float newRadius);
    void SetRopeParticlePosition(int32_t ParticleIndex, _Script_CoreUObject::Vector Position);
    void SetRopeMotionDriverCollisionEnabled(bool Enabled);
    void SetRopeMotionDriver(_Script_Engine::SceneComponent* motionDriver, bool EnableCollision);
    void SetRopeCollisionEnabled(bool Enabled);
    void SetRopeCollisionChannels(int32_t collisionChannels);
    void SetRopeAwake(bool awake);
    void SetRopeAttachmentPoint(_Script_CoreUObject::Vector ropeAttachmentPtWorld);
    void SetRopeAttachmentLength(float attachmentLength);
    bool SetRopeAttachment(_Script_RsGameTechRT::RsSetRopeAttachmentParams& Params);
    void SetRopeAdditiveStretchLength(float newLength);
    void SetCurrentRopeLength(float newLength);
    void ResetRopeRenderStrainedAlpha();
    void ResetRopePhysics(bool keepAwake);
    void RemoveRopeParticleAttachment(int32_t ParticleIndex);
    void RemoveRopeCollisionExclusionComponent(_Script_Engine::PrimitiveComponent* Component);
    void RemoveRopeCollisionExclusionActor(_Script_Engine::Actor* Actor);
    void RemoveAllRopeParticleAttachments();
    bool IsRopeStretched();
    bool IsRopePhysicsActive();
    bool IsRopeParticleAttached(int32_t ParticleIndex);
    bool IsRopeActiveAndMoving();
    bool IsParticleIndexValid(int32_t ParticleIndex);
    bool HasRopeMotionDriver();
    bool HasRopeAttachment();
    float GetRopeUnstretchedLength();
    _Script_CoreUObject::Vector GetRopeSwingAxis();
    float GetRopeStretchedProgression();
    float GetRopeStretchedLength();
    _Script_CoreUObject::Vector GetRopeStretchDirection();
    float GetRopePreferredAttachmentLengthFromAnchor();
    _Script_CoreUObject::Vector GetRopeParticleVelocity(int32_t ParticleIndex);
    _Script_CoreUObject::Vector GetRopeParticlePosition(int32_t ParticleIndex);
    _Script_CoreUObject::Vector GetRopeParticleDefaultPosition(int32_t ParticleIndex);
    int32_t GetRopeParticleAtLength(float ropeLength);
    bool GetRopeMotionDriverCollisionEnabled();
    _Script_Engine::SceneComponent* GetRopeMotionDriver();
    float GetRopeCurrentMaxLength();
    bool GetRopeCollisionEnabled();
    _Script_CoreUObject::Vector GetRopeAttachmentPointWorld();
    _Script_CoreUObject::Vector GetRopeAttachmentPointLocal();
    float GetRopeAttachmentLength();
    _Script_RsGameTechRT::RsRopeAttachmentComponent* GetRopeAttachment();
    float GetRopeAdditiveStretchLength();
    int32_t GetPreferredRopeAttachmentParticle();
    int32_t GetNumRopeParticles();
    float GetLengthForRopeParticle(int32_t ParticleIndex);
    int32_t GetLastRopeParticle();
    float GetCurrentRopeLength();
    void GetClosestParticleOnRope(int32_t& outClosestParticleIdx, float& outDistSq, _Script_CoreUObject::Vector queryPtWorld);
    void ClearRopeVelocity();
    void ClearRopeAttachment();
    bool CanRopeSwing();
    bool CanRopeForcePull();
    bool CanRopeClimbTurn();
    bool CanRopeClimbAscendDescend();
    bool CanRopeClimb();
    float CalculateRopeLengthToPoint(_Script_CoreUObject::Vector& queryPtWorld);
    void AttractRopeParticlesTowardsDefaultPosition(float AttractionForce, float DistanceThreshold);
    void ApplyImpulseToRopeParticle(int32_t ParticleIndex, _Script_CoreUObject::Vector Impulse);
    void AddRopeParticleAttachment(int32_t ParticleIndex, bool setParticlePosition, _Script_CoreUObject::Vector particlePosition, bool autoWake);
    void AddRopeCollisionExclusionComponent(_Script_Engine::PrimitiveComponent* Component);
    void AddRopeCollisionExclusionActor(_Script_Engine::Actor* Actor);
}; // Size: 0x1e80
#pragma pack(pop)
}
