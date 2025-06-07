#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DeveloperSettings.hpp"
#include "PhysicsSettings.hpp"
float& _Script_Engine::PhysicsSettings::get_DefaultGravityZ() {
    return *(float*)((uintptr_t)this + 0x38);
}
void _Script_Engine::PhysicsSettings::set_bEnableAsyncScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_DefaultTerminalVelocity() {
    return *(float*)((uintptr_t)this + 0x3c);
}
bool _Script_Engine::PhysicsSettings::get_bSuppressFaceRemapTable() {
    return (*(uint8_t*)((uintptr_t)this + 0xaf + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicsSettings::get_DefaultFluidFriction() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::PhysicsSettings::get_SimulateScratchMemorySize() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
int32_t& _Script_Engine::PhysicsSettings::get_RagdollAggregateThreshold() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::PhysicsSettings::get_AsyncSceneSmoothingFactor() {
    return *(float*)((uintptr_t)this + 0xcc);
}
float& _Script_Engine::PhysicsSettings::get_TriangleMeshTriangleMinAreaThreshold() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void _Script_Engine::PhysicsSettings::set_DebugLogDamageFromPhysicsCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x128 + 0);
    *(uint8_t*)((uintptr_t)this + 0x128 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnableAsyncScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bEnableShapeSharing() {
    return (*(uint8_t*)((uintptr_t)this + 0x51 + 0)) & 1 != 0;
}
void* _Script_Engine::PhysicsSettings::get_PhysicalSurfaces() {
    return (void*)((uintptr_t)this + 0xd8);
}
void _Script_Engine::PhysicsSettings::set_bEnableShapeSharing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51 + 0);
    *(uint8_t*)((uintptr_t)this + 0x51 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnablePCM() {
    return (*(uint8_t*)((uintptr_t)this + 0x52 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnablePCM(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x52 + 0);
    *(uint8_t*)((uintptr_t)this + 0x52 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnableStabilization() {
    return (*(uint8_t*)((uintptr_t)this + 0x53 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSubsteppingAsync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbd + 0);
    *(uint8_t*)((uintptr_t)this + 0xbd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bEnableStabilization(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53 + 0);
    *(uint8_t*)((uintptr_t)this + 0x53 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_bWarnMissingLocks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x54 + 0);
    *(uint8_t*)((uintptr_t)this + 0x54 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bWarnMissingLocks() {
    return (*(uint8_t*)((uintptr_t)this + 0x54 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bSubsteppingAsync() {
    return (*(uint8_t*)((uintptr_t)this + 0xbd + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bEnable2DPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x55 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnable2DPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x55 + 0);
    *(uint8_t*)((uintptr_t)this + 0x55 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_PhysicErrorCorrection() {
    return (void*)((uintptr_t)this + 0x58);
}
void _Script_Engine::PhysicsSettings::set_bSubstepping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_LockedAxis() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_Engine::PhysicsSettings::get_DefaultDegreesOfFreedom() {
    return (void*)((uintptr_t)this + 0x8d);
}
void* _Script_Engine::PhysicsSettings::get_FrictionCombineMode() {
    return (void*)((uintptr_t)this + 0x94);
}
float& _Script_Engine::PhysicsSettings::get_BounceThresholdVelocity() {
    return *(float*)((uintptr_t)this + 0x90);
}
void _Script_Engine::PhysicsSettings::set_bDefaultHasComplexCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xae + 0);
    *(uint8_t*)((uintptr_t)this + 0xae + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_RestitutionCombineMode() {
    return (void*)((uintptr_t)this + 0x95);
}
float& _Script_Engine::PhysicsSettings::get_MaxAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_Engine::PhysicsSettings::get_MaxDepenetrationVelocity() {
    return *(float*)((uintptr_t)this + 0x9c);
}
float& _Script_Engine::PhysicsSettings::get_ContactOffsetMultiplier() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_Engine::PhysicsSettings::get_MinContactOffset() {
    return *(float*)((uintptr_t)this + 0xa4);
}
float& _Script_Engine::PhysicsSettings::get_MaxContactOffset() {
    return *(float*)((uintptr_t)this + 0xa8);
}
bool _Script_Engine::PhysicsSettings::get_bSimulateSkeletalMeshOnDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0xac + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_DebugLogDamageFromPhysicsCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0x128 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSimulateSkeletalMeshOnDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xac + 0);
    *(uint8_t*)((uintptr_t)this + 0xac + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_DamageFromPhysicsCollision() {
    return (void*)((uintptr_t)this + 0x110);
}
void* _Script_Engine::PhysicsSettings::get_DefaultShapeComplexity() {
    return (void*)((uintptr_t)this + 0xad);
}
bool _Script_Engine::PhysicsSettings::get_bDefaultHasComplexCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xae + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bSuppressFaceRemapTable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xaf + 0);
    *(uint8_t*)((uintptr_t)this + 0xaf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_DefaultBroadphaseSettings() {
    return (void*)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::PhysicsSettings::get_bSupportUVFromHitResults() {
    return (*(uint8_t*)((uintptr_t)this + 0xb0 + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicsSettings::get_InitialAverageFrameRate() {
    return *(float*)((uintptr_t)this + 0xd0);
}
void _Script_Engine::PhysicsSettings::set_bSupportUVFromHitResults(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bDisableActiveActors() {
    return (*(uint8_t*)((uintptr_t)this + 0xb1 + 0)) & 1 != 0;
}
float& _Script_Engine::PhysicsSettings::get_SyncSceneSmoothingFactor() {
    return *(float*)((uintptr_t)this + 0xc8);
}
bool _Script_Engine::PhysicsSettings::get_DebugPhysAnimVisualizeDifferenceAnimationAndPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x15d + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableActiveActors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bSubstepping() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bDisableKinematicStaticPairs() {
    return (*(uint8_t*)((uintptr_t)this + 0xb2 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_DebugPhysAnimEnableFrameTimeSpikes() {
    return (*(uint8_t*)((uintptr_t)this + 0x150 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableKinematicStaticPairs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_EnableDebugLogForSleepingForAllRagdollBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x170 + 0)) & 1 != 0;
}
bool _Script_Engine::PhysicsSettings::get_bDisableKinematicKinematicPairs() {
    return (*(uint8_t*)((uintptr_t)this + 0xb3 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableKinematicKinematicPairs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bDisableCCD() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bDisableCCD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_bEnableEnhancedDeterminism() {
    return (*(uint8_t*)((uintptr_t)this + 0xb5 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_bEnableEnhancedDeterminism(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_MaxPhysicsDeltaTime() {
    return *(float*)((uintptr_t)this + 0xb8);
}
float& _Script_Engine::PhysicsSettings::get_MaxSubstepDeltaTime() {
    return *(float*)((uintptr_t)this + 0xc0);
}
int32_t& _Script_Engine::PhysicsSettings::get_PhysXTreeRebuildRate() {
    return *(int32_t*)((uintptr_t)this + 0xd4);
}
int32_t& _Script_Engine::PhysicsSettings::get_MaxSubsteps() {
    return *(int32_t*)((uintptr_t)this + 0xc4);
}
bool _Script_Engine::PhysicsSettings::get_DebugDisablePhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x129 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugDisablePhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x129 + 0);
    *(uint8_t*)((uintptr_t)this + 0x129 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_AllowDebugDrawForPhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x12a + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_AllowDebugDrawForPhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12a + 0);
    *(uint8_t*)((uintptr_t)this + 0x12a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugShowPoseFromAnimationWithoutPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x12b + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugShowPoseFromAnimationWithoutPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12b + 0);
    *(uint8_t*)((uintptr_t)this + 0x12b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugShowPoseFromAnimationWithoutPhysicsSolid() {
    return (*(uint8_t*)((uintptr_t)this + 0x12c + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugShowPoseFromAnimationWithoutPhysicsSolid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12c + 0);
    *(uint8_t*)((uintptr_t)this + 0x12c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugShowPoseFromPhysicalAnimationAfterPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x12d + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugShowPoseFromPhysicalAnimationAfterPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12d + 0);
    *(uint8_t*)((uintptr_t)this + 0x12d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugShowPhysicalAnimationActiveProfileName() {
    return (*(uint8_t*)((uintptr_t)this + 0x12e + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugShowPhysicalAnimationActiveProfileName(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12e + 0);
    *(uint8_t*)((uintptr_t)this + 0x12e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugShowPoseFromAnimationFromMotionAnalyzer() {
    return (*(uint8_t*)((uintptr_t)this + 0x12f + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugShowPoseFromAnimationFromMotionAnalyzer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x12f + 0);
    *(uint8_t*)((uintptr_t)this + 0x12f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugDrawPhysicalAnimationRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x130 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugDrawPhysicalAnimationRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x130 + 0);
    *(uint8_t*)((uintptr_t)this + 0x130 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugLogMatchingResultsForPhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x131 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugLogMatchingResultsForPhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x131 + 0);
    *(uint8_t*)((uintptr_t)this + 0x131 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugDisableCustomKickstartForRagdolls() {
    return (*(uint8_t*)((uintptr_t)this + 0x132 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugDisableCustomKickstartForRagdolls(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x132 + 0);
    *(uint8_t*)((uintptr_t)this + 0x132 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_DefaultPhysicalMaterialForPhysicalAnimation() {
    return (void*)((uintptr_t)this + 0x138);
}
void _Script_Engine::PhysicsSettings::set_DebugPhysAnimEnableFrameTimeSpikes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150 + 0);
    *(uint8_t*)((uintptr_t)this + 0x150 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_DebugPhysAnimFrameTimeSpikesTimeBetween() {
    return *(float*)((uintptr_t)this + 0x154);
}
float& _Script_Engine::PhysicsSettings::get_DebugPhysAnimFrameTimeSpikesLength() {
    return *(float*)((uintptr_t)this + 0x158);
}
bool _Script_Engine::PhysicsSettings::get_DebugPhysAnimDisablePrediction() {
    return (*(uint8_t*)((uintptr_t)this + 0x15c + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugPhysAnimDisablePrediction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15c + 0);
    *(uint8_t*)((uintptr_t)this + 0x15c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PhysicsSettings::set_DebugPhysAnimVisualizeDifferenceAnimationAndPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15d + 0);
    *(uint8_t*)((uintptr_t)this + 0x15d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_DebugPhysAnimVisualizeAnimationAndPhysicsBlendWeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x15e + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_DebugPhysAnimVisualizeAnimationAndPhysicsBlendWeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15e + 0);
    *(uint8_t*)((uintptr_t)this + 0x15e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_DebugPhysicsAssetDebugRenderingScale() {
    return *(float*)((uintptr_t)this + 0x160);
}
bool _Script_Engine::PhysicsSettings::get_EnableDebugLogWithMaximumVelocitiesForAllRagdollBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_EnableDebugLogWithMaximumVelocitiesForAllRagdollBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PhysicsSettings::get_RagdollMaximumLinearVelocity() {
    return *(float*)((uintptr_t)this + 0x168);
}
float& _Script_Engine::PhysicsSettings::get_RagdollMaximumAngularVelocity() {
    return *(float*)((uintptr_t)this + 0x16c);
}
void _Script_Engine::PhysicsSettings::set_EnableDebugLogForSleepingForAllRagdollBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x170 + 0);
    *(uint8_t*)((uintptr_t)this + 0x170 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_EnableValidationForRespawnDestructibleActors() {
    return (*(uint8_t*)((uintptr_t)this + 0x171 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_EnableValidationForRespawnDestructibleActors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x171 + 0);
    *(uint8_t*)((uintptr_t)this + 0x171 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PhysicsSettings::get_EnableDebugLogForSleepingForAllDestructionBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x172 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsSettings::set_EnableDebugLogForSleepingForAllDestructionBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x172 + 0);
    *(uint8_t*)((uintptr_t)this + 0x172 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsSettings::get_WeightClassEntries() {
    return (void*)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsSettings");
    return result;
}
