#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PawnMovementComponent.hpp"
namespace _Script_Engine {
struct Character;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct NavAvoidanceMask;
}
namespace _Script_Engine {
struct FindFloorResult;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CharacterMovementComponent : public PawnMovementComponent {
    private: char pad_208[0x5d8]; public:
    _Script_Engine::Character*& get_CharacterOwner();
    float& get_GravityScale();
    float& get_MaxStepHeight();
    float& get_JumpZVelocity();
    float& get_JumpOffJumpZFactor();
    float& get_WalkableFloorAngle();
    float& get_WalkableFloorZ();
    void* get_MovementMode();
    void* get_CustomMovementMode();
    void* get_NetworkSmoothingMode();
    float& get_GroundFriction();
    float& get_MaxWalkSpeed();
    float& get_MaxWalkSpeedCrouched();
    float& get_MaxSwimSpeed();
    float& get_MaxFlySpeed();
    float& get_MaxCustomMovementSpeed();
    float& get_MaxAcceleration();
    float& get_MinAnalogWalkSpeed();
    float& get_BrakingFrictionFactor();
    float& get_BrakingFriction();
    float& get_BrakingDecelerationWalking();
    float& get_BrakingDecelerationFalling();
    float& get_BrakingDecelerationSwimming();
    float& get_BrakingDecelerationFlying();
    float& get_AirControl();
    float& get_AirControlBoostMultiplier();
    float& get_AirControlBoostVelocityThreshold();
    float& get_FallingLateralFriction();
    float& get_CrouchedHalfHeight();
    float& get_Buoyancy();
    float& get_PerchRadiusThreshold();
    float& get_PerchAdditionalHeight();
    void* get_RotationRate();
    bool get_bUseSeparateBrakingFriction();
    void set_bUseSeparateBrakingFriction(bool value);
    bool get_bApplyGravityWhileJumping();
    void set_bApplyGravityWhileJumping(bool value);
    bool get_bUseControllerDesiredRotation();
    void set_bUseControllerDesiredRotation(bool value);
    bool get_bOrientRotationToMovement();
    void set_bOrientRotationToMovement(bool value);
    bool get_bSweepWhileNavWalking();
    void set_bSweepWhileNavWalking(bool value);
    bool get_bDeferAnimationControlledChildrenUpdates();
    void set_bDeferAnimationControlledChildrenUpdates(bool value);
    bool get_bMovementInProgress();
    void set_bMovementInProgress(bool value);
    bool get_bEnableScopedMovementUpdates();
    void set_bEnableScopedMovementUpdates(bool value);
    bool get_bForceMaxAccel();
    void set_bForceMaxAccel(bool value);
    bool get_bRunPhysicsWithNoController();
    void set_bRunPhysicsWithNoController(bool value);
    bool get_bForceNextFloorCheck();
    void set_bForceNextFloorCheck(bool value);
    bool get_bShrinkProxyCapsule();
    void set_bShrinkProxyCapsule(bool value);
    bool get_bCanWalkOffLedges();
    void set_bCanWalkOffLedges(bool value);
    bool get_bCanWalkOffLedgesWhenCrouching();
    void set_bCanWalkOffLedgesWhenCrouching(bool value);
    bool get_bNetworkSkipProxyPredictionOnNetUpdate();
    void set_bNetworkSkipProxyPredictionOnNetUpdate(bool value);
    bool get_bNetworkAlwaysReplicateTransformUpdateTimestamp();
    void set_bNetworkAlwaysReplicateTransformUpdateTimestamp(bool value);
    bool get_bDeferUpdateMoveComponent();
    void set_bDeferUpdateMoveComponent(bool value);
    bool get_bEnablePhysicsInteraction();
    void set_bEnablePhysicsInteraction(bool value);
    bool get_bTouchForceScaledToMass();
    void set_bTouchForceScaledToMass(bool value);
    bool get_bPushForceScaledToMass();
    void set_bPushForceScaledToMass(bool value);
    bool get_bPushForceUsingZOffset();
    void set_bPushForceUsingZOffset(bool value);
    bool get_bScalePushForceToVelocity();
    void set_bScalePushForceToVelocity(bool value);
    _Script_Engine::SceneComponent*& get_DeferredUpdatedMoveComponent();
    float& get_MaxOutOfWaterStepHeight();
    float& get_OutofWaterZ();
    float& get_Mass();
    float& get_StandingDownwardForceScale();
    float& get_InitialPushForceFactor();
    float& get_PushForceFactor();
    float& get_PushForcePointZOffsetFactor();
    float& get_TouchForceFactor();
    float& get_MinTouchForce();
    float& get_MaxTouchForce();
    float& get_RepulsionForce();
    void* get_Acceleration();
    void* get_LastUpdateRotation();
    void* get_LastUpdateLocation();
    void* get_LastUpdateVelocity();
    float& get_ServerLastTransformUpdateTimeStamp();
    float& get_ServerLastClientGoodMoveAckTime();
    float& get_ServerLastClientAdjustmentTime();
    void* get_PendingImpulseToApply();
    void* get_PendingForceToApply();
    float& get_AnalogInputModifier();
    float& get_MaxSimulationTimeStep();
    int32_t& get_MaxSimulationIterations();
    float& get_MaxDepenetrationWithGeometry();
    float& get_MaxDepenetrationWithGeometryAsProxy();
    float& get_MaxDepenetrationWithPawn();
    float& get_MaxDepenetrationWithPawnAsProxy();
    float& get_NetworkSimulatedSmoothLocationTime();
    float& get_NetworkSimulatedSmoothRotationTime();
    float& get_ListenServerNetworkSimulatedSmoothLocationTime();
    float& get_ListenServerNetworkSimulatedSmoothRotationTime();
    float& get_NetProxyShrinkRadius();
    float& get_NetProxyShrinkHalfHeight();
    float& get_NetworkMaxSmoothUpdateDistance();
    float& get_NetworkNoSmoothUpdateDistance();
    float& get_NetworkMinTimeBetweenClientAckGoodMoves();
    float& get_NetworkMinTimeBetweenClientAdjustments();
    float& get_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection();
    float& get_NetworkLargeClientCorrectionDistance();
    float& get_LedgeCheckThreshold();
    float& get_JumpOutOfWaterPitch();
    void* get_CurrentFloor();
    void* get_DefaultLandMovementMode();
    void* get_DefaultWaterMovementMode();
    void* get_GroundMovementMode();
    bool get_bMaintainHorizontalGroundVelocity();
    void set_bMaintainHorizontalGroundVelocity(bool value);
    bool get_bImpartBaseVelocityX();
    void set_bImpartBaseVelocityX(bool value);
    bool get_bImpartBaseVelocityY();
    void set_bImpartBaseVelocityY(bool value);
    bool get_bImpartBaseVelocityZ();
    void set_bImpartBaseVelocityZ(bool value);
    bool get_bImpartBaseAngularVelocity();
    void set_bImpartBaseAngularVelocity(bool value);
    bool get_bJustTeleported();
    void set_bJustTeleported(bool value);
    bool get_bNetworkUpdateReceived();
    void set_bNetworkUpdateReceived(bool value);
    bool get_bNetworkMovementModeChanged();
    void set_bNetworkMovementModeChanged(bool value);
    bool get_bIgnoreClientMovementErrorChecksAndCorrection();
    void set_bIgnoreClientMovementErrorChecksAndCorrection(bool value);
    bool get_bNotifyApex();
    void set_bNotifyApex(bool value);
    bool get_bCheatFlying();
    void set_bCheatFlying(bool value);
    bool get_bWantsToCrouch();
    void set_bWantsToCrouch(bool value);
    bool get_bCrouchMaintainsBaseLocation();
    void set_bCrouchMaintainsBaseLocation(bool value);
    bool get_bIgnoreBaseRotation();
    void set_bIgnoreBaseRotation(bool value);
    bool get_bFastAttachedMove();
    void set_bFastAttachedMove(bool value);
    bool get_bAlwaysCheckFloor();
    void set_bAlwaysCheckFloor(bool value);
    bool get_bUseFlatBaseForFloorChecks();
    void set_bUseFlatBaseForFloorChecks(bool value);
    bool get_bPerformingJumpOff();
    void set_bPerformingJumpOff(bool value);
    bool get_bWantsToLeaveNavWalking();
    void set_bWantsToLeaveNavWalking(bool value);
    bool get_bUseRVOAvoidance();
    void set_bUseRVOAvoidance(bool value);
    bool get_bRequestedMoveUseAcceleration();
    void set_bRequestedMoveUseAcceleration(bool value);
    bool get_bWasSimulatingRootMotion();
    void set_bWasSimulatingRootMotion(bool value);
    bool get_bAllowPhysicsRotationDuringAnimRootMotion();
    void set_bAllowPhysicsRotationDuringAnimRootMotion(bool value);
    bool get_bHasRequestedVelocity();
    void set_bHasRequestedVelocity(bool value);
    bool get_bRequestedMoveWithMaxSpeed();
    void set_bRequestedMoveWithMaxSpeed(bool value);
    bool get_bWasAvoidanceUpdated();
    void set_bWasAvoidanceUpdated(bool value);
    bool get_bProjectNavMeshWalking();
    void set_bProjectNavMeshWalking(bool value);
    bool get_bProjectNavMeshOnBothWorldChannels();
    void set_bProjectNavMeshOnBothWorldChannels(bool value);
    float& get_AvoidanceConsiderationRadius();
    void* get_RequestedVelocity();
    int32_t& get_AvoidanceUID();
    void* get_AvoidanceGroup();
    void* get_GroupsToAvoid();
    void* get_GroupsToIgnore();
    float& get_AvoidanceWeight();
    void* get_PendingLaunchVelocity();
    float& get_NavMeshProjectionInterval();
    float& get_NavMeshProjectionTimer();
    float& get_NavMeshProjectionInterpSpeed();
    float& get_NavMeshProjectionHeightScaleUp();
    float& get_NavMeshProjectionHeightScaleDown();
    float& get_NavWalkingFloorDistTolerance();
    void* get_PostPhysicsTickFunction();
    float& get_MinTimeBetweenTimeStampResets();
    void* get_CurrentRootMotion();
    void* get_RootMotionParams();
    void* get_AnimRootMotionVelocity();
    static _Script_CoreUObject::Class* static_class();
    void SetWalkableFloorZ(float InWalkableFloorZ);
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    void SetMovementMode(void* NewMovementMode, void* NewCustomMode);
    void SetGroupsToIgnoreMask(_Script_Engine::NavAvoidanceMask& GroupMask);
    void SetGroupsToIgnore(int32_t GroupFlags);
    void SetGroupsToAvoidMask(_Script_Engine::NavAvoidanceMask& GroupMask);
    void SetGroupsToAvoid(int32_t GroupFlags);
    void SetAvoidanceGroupMask(_Script_Engine::NavAvoidanceMask& GroupMask);
    void SetAvoidanceGroup(int32_t GroupFlags);
    void SetAvoidanceEnabled(bool bEnable);
    float K2_GetWalkableFloorZ();
    float K2_GetWalkableFloorAngle();
    float K2_GetModifiedMaxAcceleration();
    void K2_FindFloor(_Script_CoreUObject::Vector CapsuleLocation, _Script_Engine::FindFloorResult& FloorResult);
    void K2_ComputeFloorDist(_Script_CoreUObject::Vector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, _Script_Engine::FindFloorResult& FloorResult);
    bool IsWalking();
    bool IsWalkable(_Script_Engine::HitResult& Hit);
    float GetValidPerchRadius();
    float GetPerchRadiusThreshold();
    _Script_Engine::PrimitiveComponent* GetMovementBase();
    float GetMinAnalogSpeed();
    float GetMaxJumpHeightWithJumpTime();
    float GetMaxJumpHeight();
    float GetMaxBrakingDeceleration();
    float GetMaxAcceleration();
    _Script_CoreUObject::Vector GetLastUpdateVelocity();
    _Script_CoreUObject::Rotator GetLastUpdateRotation();
    _Script_CoreUObject::Vector GetLastUpdateLocation();
    _Script_CoreUObject::Vector GetImpartedMovementBaseVelocity();
    _Script_CoreUObject::Vector GetCurrentAcceleration();
    _Script_Engine::Character* GetCharacterOwner();
    float GetAnalogInputModifier();
    void DisableMovement();
    void ClearAccumulatedForces();
    void CapsuleTouched(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    void AddImpulse(_Script_CoreUObject::Vector Impulse, bool bVelocityChange);
    void AddForce(_Script_CoreUObject::Vector Force);
}; // Size: 0x7e0
#pragma pack(pop)
}
