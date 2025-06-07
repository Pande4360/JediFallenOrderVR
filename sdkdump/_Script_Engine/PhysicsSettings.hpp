#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsSettings : public DeveloperSettings {
    private: char pad_38[0x150]; public:
    float& get_DefaultGravityZ();
    float& get_DefaultTerminalVelocity();
    float& get_DefaultFluidFriction();
    int32_t& get_SimulateScratchMemorySize();
    int32_t& get_RagdollAggregateThreshold();
    float& get_TriangleMeshTriangleMinAreaThreshold();
    bool get_bEnableAsyncScene();
    void set_bEnableAsyncScene(bool value);
    bool get_bEnableShapeSharing();
    void set_bEnableShapeSharing(bool value);
    bool get_bEnablePCM();
    void set_bEnablePCM(bool value);
    bool get_bEnableStabilization();
    void set_bEnableStabilization(bool value);
    bool get_bWarnMissingLocks();
    void set_bWarnMissingLocks(bool value);
    bool get_bEnable2DPhysics();
    void set_bEnable2DPhysics(bool value);
    void* get_PhysicErrorCorrection();
    void* get_LockedAxis();
    void* get_DefaultDegreesOfFreedom();
    float& get_BounceThresholdVelocity();
    void* get_FrictionCombineMode();
    void* get_RestitutionCombineMode();
    float& get_MaxAngularVelocity();
    float& get_MaxDepenetrationVelocity();
    float& get_ContactOffsetMultiplier();
    float& get_MinContactOffset();
    float& get_MaxContactOffset();
    bool get_bSimulateSkeletalMeshOnDedicatedServer();
    void set_bSimulateSkeletalMeshOnDedicatedServer(bool value);
    void* get_DefaultShapeComplexity();
    bool get_bDefaultHasComplexCollision();
    void set_bDefaultHasComplexCollision(bool value);
    bool get_bSuppressFaceRemapTable();
    void set_bSuppressFaceRemapTable(bool value);
    bool get_bSupportUVFromHitResults();
    void set_bSupportUVFromHitResults(bool value);
    bool get_bDisableActiveActors();
    void set_bDisableActiveActors(bool value);
    bool get_bDisableKinematicStaticPairs();
    void set_bDisableKinematicStaticPairs(bool value);
    bool get_bDisableKinematicKinematicPairs();
    void set_bDisableKinematicKinematicPairs(bool value);
    bool get_bDisableCCD();
    void set_bDisableCCD(bool value);
    bool get_bEnableEnhancedDeterminism();
    void set_bEnableEnhancedDeterminism(bool value);
    float& get_MaxPhysicsDeltaTime();
    bool get_bSubstepping();
    void set_bSubstepping(bool value);
    bool get_bSubsteppingAsync();
    void set_bSubsteppingAsync(bool value);
    float& get_MaxSubstepDeltaTime();
    int32_t& get_MaxSubsteps();
    float& get_SyncSceneSmoothingFactor();
    float& get_AsyncSceneSmoothingFactor();
    float& get_InitialAverageFrameRate();
    int32_t& get_PhysXTreeRebuildRate();
    void* get_PhysicalSurfaces();
    void* get_DefaultBroadphaseSettings();
    void* get_DamageFromPhysicsCollision();
    bool get_DebugLogDamageFromPhysicsCollision();
    void set_DebugLogDamageFromPhysicsCollision(bool value);
    bool get_DebugDisablePhysicalAnimation();
    void set_DebugDisablePhysicalAnimation(bool value);
    bool get_AllowDebugDrawForPhysicalAnimation();
    void set_AllowDebugDrawForPhysicalAnimation(bool value);
    bool get_DebugShowPoseFromAnimationWithoutPhysics();
    void set_DebugShowPoseFromAnimationWithoutPhysics(bool value);
    bool get_DebugShowPoseFromAnimationWithoutPhysicsSolid();
    void set_DebugShowPoseFromAnimationWithoutPhysicsSolid(bool value);
    bool get_DebugShowPoseFromPhysicalAnimationAfterPhysics();
    void set_DebugShowPoseFromPhysicalAnimationAfterPhysics(bool value);
    bool get_DebugShowPhysicalAnimationActiveProfileName();
    void set_DebugShowPhysicalAnimationActiveProfileName(bool value);
    bool get_DebugShowPoseFromAnimationFromMotionAnalyzer();
    void set_DebugShowPoseFromAnimationFromMotionAnalyzer(bool value);
    bool get_DebugDrawPhysicalAnimationRootMotion();
    void set_DebugDrawPhysicalAnimationRootMotion(bool value);
    bool get_DebugLogMatchingResultsForPhysicalAnimation();
    void set_DebugLogMatchingResultsForPhysicalAnimation(bool value);
    bool get_DebugDisableCustomKickstartForRagdolls();
    void set_DebugDisableCustomKickstartForRagdolls(bool value);
    void* get_DefaultPhysicalMaterialForPhysicalAnimation();
    bool get_DebugPhysAnimEnableFrameTimeSpikes();
    void set_DebugPhysAnimEnableFrameTimeSpikes(bool value);
    float& get_DebugPhysAnimFrameTimeSpikesTimeBetween();
    float& get_DebugPhysAnimFrameTimeSpikesLength();
    bool get_DebugPhysAnimDisablePrediction();
    void set_DebugPhysAnimDisablePrediction(bool value);
    bool get_DebugPhysAnimVisualizeDifferenceAnimationAndPhysics();
    void set_DebugPhysAnimVisualizeDifferenceAnimationAndPhysics(bool value);
    bool get_DebugPhysAnimVisualizeAnimationAndPhysicsBlendWeight();
    void set_DebugPhysAnimVisualizeAnimationAndPhysicsBlendWeight(bool value);
    float& get_DebugPhysicsAssetDebugRenderingScale();
    bool get_EnableDebugLogWithMaximumVelocitiesForAllRagdollBodies();
    void set_EnableDebugLogWithMaximumVelocitiesForAllRagdollBodies(bool value);
    float& get_RagdollMaximumLinearVelocity();
    float& get_RagdollMaximumAngularVelocity();
    bool get_EnableDebugLogForSleepingForAllRagdollBodies();
    void set_EnableDebugLogForSleepingForAllRagdollBodies(bool value);
    bool get_EnableValidationForRespawnDestructibleActors();
    void set_EnableValidationForRespawnDestructibleActors(bool value);
    bool get_EnableDebugLogForSleepingForAllDestructionBodies();
    void set_EnableDebugLogForSleepingForAllDestructionBodies(bool value);
    void* get_WeightClassEntries();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x188
#pragma pack(pop)
}
