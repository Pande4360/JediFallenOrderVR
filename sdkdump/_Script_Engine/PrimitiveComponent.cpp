#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
#include "HitResult.hpp"
#include "MaterialInstanceDynamic.hpp"
#include "MaterialInterface.hpp"
#include "Pawn.hpp"
#include "PhysicalMaterial.hpp"
#include "PrimitiveComponent.hpp"
#include "RsFrameOfReference.hpp"
#include "SceneComponent.hpp"
#include "WalkableSlopeOverride.hpp"
void _Script_Engine::PrimitiveComponent::AddAngularImpulse(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::set_bCastStaticShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bCheckAsyncSceneOnMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 1 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_VelocityBufferClipSpaceOverride() {
    return (void*)((uintptr_t)this + 0x2e0);
}
float& _Script_Engine::PrimitiveComponent::get_LpvBiasMultiplier() {
    return *(float*)((uintptr_t)this + 0x308);
}
bool _Script_Engine::PrimitiveComponent::get_bCastDynamicShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 32 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bAlwaysCreatePhysicsState() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 32 != 0;
}
float& _Script_Engine::PrimitiveComponent::get_MinDrawDistance() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
bool _Script_Engine::PrimitiveComponent::get_bCastFarShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 2 != 0;
}
float& _Script_Engine::PrimitiveComponent::get_LDMaxDrawDistance() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float& _Script_Engine::PrimitiveComponent::get_CachedMaxDrawDistance() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
bool _Script_Engine::PrimitiveComponent::IsOverlappingActor(_Script_Engine::Actor* Other) {
    return;
}
float& _Script_Engine::PrimitiveComponent::get_LastRenderTime() {
    return *(float*)((uintptr_t)this + 0x334);
}
bool _Script_Engine::PrimitiveComponent::get_bSelectable() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 128 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_IndirectLightingCacheQuality() {
    return (void*)((uintptr_t)this + 0x2de);
}
bool _Script_Engine::PrimitiveComponent::get_bSingleSampleShadowFromStationaryLights() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 2 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_DepthPriorityGroup() {
    return (void*)((uintptr_t)this + 0x2dc);
}
_Script_CoreUObject::Class* _Script_Engine::PrimitiveComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PrimitiveComponent");
    return result;
}
bool _Script_Engine::PrimitiveComponent::get_bOwnerNoSee() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 4 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_ViewOwnerDepthPriorityGroup() {
    return (void*)((uintptr_t)this + 0x2dd);
}
bool _Script_Engine::PrimitiveComponent::get_bTreatAsBackgroundForOcclusion() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 16 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_LightmapType() {
    return (void*)((uintptr_t)this + 0x2df);
}
bool _Script_Engine::PrimitiveComponent::get_bNeverDistanceCull() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
void _Script_Engine::PrimitiveComponent::SetLockedAxis(void* LockedAxis) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_AlwaysLoadOnServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 128 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bNeverDistanceCull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PrimitiveComponent::get_BoundsScale() {
    return *(float*)((uintptr_t)this + 0x32c);
}
void _Script_Engine::PrimitiveComponent::set_bAlwaysCreatePhysicsState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bTraceComplexOnMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bGenerateOverlapEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 64 != 0;
}
void _Script_Engine::PrimitiveComponent::WakeAllRigidBodies() {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_CastShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 4 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bGenerateOverlapEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_MoveIgnoreActors() {
    return (void*)((uintptr_t)this + 0x340);
}
void _Script_Engine::PrimitiveComponent::set_bRenderInMainPass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bMultiBodyOverlap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 128 != 0;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsAngularVelocityInRadians(_Script_CoreUObject::Vector NewAngVel, bool bAddToCurrent, void* BoneName) {
    return;
}
float& _Script_Engine::PrimitiveComponent::get_IndirectLightingScale() {
    return *(float*)((uintptr_t)this + 0x310);
}
void _Script_Engine::PrimitiveComponent::set_bMultiBodyOverlap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_OnComponentHit() {
    return (void*)((uintptr_t)this + 0x9b0);
}
void _Script_Engine::PrimitiveComponent::set_bCheckAsyncSceneOnMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PrimitiveComponent::set_CastShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bUseEditorCompositing() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ee + 0)) & 1 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bTraceComplexOnMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 2 != 0;
}
void _Script_Engine::PrimitiveComponent::SetLinearDamping(float InDamping) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bForceCachedShadowmap() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ee + 0)) & 4 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bReturnMaterialOnMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 4 != 0;
}
void _Script_Engine::PrimitiveComponent::SetRenderCustomDepth(bool bValue) {
    return;
}
void _Script_Engine::PrimitiveComponent::set_bDynamicDeformer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PrimitiveComponent::AddAngularImpulseInRadians(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange) {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_IsCollisionEnabled() {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bReceivesDecals() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 2 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bReturnMaterialOnMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bUseViewOwnerDepthPriorityGroup() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 8 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bUseViewOwnerDepthPriorityGroup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_OnComponentSleep() {
    return (void*)((uintptr_t)this + 0x9f0);
}
bool _Script_Engine::PrimitiveComponent::get_bAllowCullDistanceVolume() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 16 != 0;
}
void _Script_Engine::PrimitiveComponent::SetSkylightScale(float NewSkylightScale) {
    return;
}
void _Script_Engine::PrimitiveComponent::set_bCastVolumetricTranslucentShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bAllowCullDistanceVolume(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_OnComponentBeginOverlap() {
    return (void*)((uintptr_t)this + 0x9c0);
}
bool _Script_Engine::PrimitiveComponent::get_bHasMotionBlurVelocityMeshes() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 32 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bForceMipStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PrimitiveComponent::SetRenderInMono(bool bValue) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bOnlyOwnerSee() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 8 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bHasMotionBlurVelocityMeshes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PrimitiveComponent::AddTorqueInRadians(_Script_CoreUObject::Vector Torque, void* BoneName, bool bAccelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetRenderInMainPass(bool bValue) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bDynamicDeformer() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 64 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bVisibleInReflectionCaptures() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 64 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bVisibleInReflectionCaptures(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bRenderInMainPass() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 128 != 0;
}
void _Script_Engine::PrimitiveComponent::SetMassScale(void* BoneName, float InMassScale) {
    return;
}
void* _Script_Engine::PrimitiveComponent::get_OnComponentEndOverlap() {
    return (void*)((uintptr_t)this + 0x9d0);
}
bool _Script_Engine::PrimitiveComponent::get_bRenderInMono() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 1 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_LightingChannels() {
    return (void*)((uintptr_t)this + 0x2f2);
}
void _Script_Engine::PrimitiveComponent::set_bRenderInMono(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PrimitiveComponent::CanCharacterStepUp(_Script_Engine::Pawn* Pawn) {
    return;
}
void _Script_Engine::PrimitiveComponent::set_bReceivesDecals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bOwnerNoSee(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bOnlyOwnerSee(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
int32_t& _Script_Engine::PrimitiveComponent::get_TranslucencySortPriority() {
    return *(int32_t*)((uintptr_t)this + 0x2f8);
}
void _Script_Engine::PrimitiveComponent::set_bTreatAsBackgroundForOcclusion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bUseAsOccluder() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 32 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bUseAsOccluder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bSelectable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bForceMipStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 1 != 0;
}
void _Script_Engine::PrimitiveComponent::SetAllMassScale(float InMassScale) {
    return;
}
void* _Script_Engine::PrimitiveComponent::get_OnEndCursorOver() {
    return (void*)((uintptr_t)this + 0xa20);
}
bool _Script_Engine::PrimitiveComponent::get_bHasPerInstanceHitProxies() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 2 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bHasPerInstanceHitProxies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bAffectDistanceFieldLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 16 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bAffectDynamicIndirectLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 8 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bAffectDynamicIndirectLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bAffectDistanceFieldLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bCastDynamicShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bCastStaticShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 64 != 0;
}
void _Script_Engine::PrimitiveComponent::GetOverlappingActors(void*& OverlappingActors, void* ClassFilter) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bCastVolumetricTranslucentShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 128 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bSelfShadowOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 1 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bSelfShadowOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bCastFarShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PrimitiveComponent::SetConstraintMode(void* ConstraintMode) {
    return;
}
float& _Script_Engine::PrimitiveComponent::get_LastSubmitTime() {
    return *(float*)((uintptr_t)this + 0x330);
}
bool _Script_Engine::PrimitiveComponent::get_bCastInsetShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 4 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bCastInsetShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bCastCinematicShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 8 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bCastCinematicShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bCastHiddenShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 16 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bCastHiddenShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PrimitiveComponent::SetEnableGravity(bool bGravityEnabled) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bCastShadowAsTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 32 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bCastShadowAsTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PrimitiveComponent::SetCenterOfMass(_Script_CoreUObject::Vector CenterOfMassOffset, void* BoneName) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bLightAsIfStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 64 != 0;
}
bool _Script_Engine::PrimitiveComponent::get_bCanBeOccludedWithCustomDepth() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ee + 0)) & 8 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bLightAsIfStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_Engine::PrimitiveComponent::CopyArrayOfMoveIgnoreActors() {
    return;
}
void _Script_Engine::PrimitiveComponent::SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bLightAttachmentsAsGroup() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 128 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_OnComponentWake() {
    return (void*)((uintptr_t)this + 0x9e0);
}
void _Script_Engine::PrimitiveComponent::set_bLightAttachmentsAsGroup(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_OnInputTouchLeave() {
    return (void*)((uintptr_t)this + 0xa80);
}
bool _Script_Engine::PrimitiveComponent::get_bReceiveMobileCSMShadows() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 1 != 0;
}
void _Script_Engine::PrimitiveComponent::SetMaterial(int32_t ElementIndex, _Script_Engine::MaterialInterface* Material) {
    return;
}
void _Script_Engine::PrimitiveComponent::set_bReceiveMobileCSMShadows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bSingleSampleShadowFromStationaryLights(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bIgnoreRadialImpulse() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 4 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bIgnoreRadialImpulse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetPhysicsLinearVelocity(void* BoneName) {
    return;
}
bool _Script_Engine::PrimitiveComponent::get_bIgnoreRadialForce() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 8 != 0;
}
void* _Script_Engine::PrimitiveComponent::get_OnInputTouchEnter() {
    return (void*)((uintptr_t)this + 0xa70);
}
void _Script_Engine::PrimitiveComponent::set_bIgnoreRadialForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_CanCharacterStepUpOn() {
    return (void*)((uintptr_t)this + 0x2f1);
}
bool _Script_Engine::PrimitiveComponent::get_bApplyImpulseOnDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 16 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bApplyImpulseOnDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bReplicatePhysicsToAutonomousProxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 32 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bReplicatePhysicsToAutonomousProxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_AlwaysLoadOnClient() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 64 != 0;
}
void _Script_Engine::PrimitiveComponent::set_AlwaysLoadOnClient(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::PrimitiveComponent::set_AlwaysLoadOnServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::PrimitiveComponent::SetCastShadow(bool NewCastShadow) {
    return;
}
void _Script_Engine::PrimitiveComponent::set_bUseEditorCompositing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ee + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ee + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::PrimitiveComponent::get_bRenderCustomDepth() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ee + 0)) & 2 != 0;
}
void _Script_Engine::PrimitiveComponent::set_bRenderCustomDepth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ee + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ee + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bForceCachedShadowmap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ee + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ee + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::PrimitiveComponent::set_bCanBeOccludedWithCustomDepth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ee + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ee + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::PrimitiveComponent::get_bHasCustomNavigableGeometry() {
    return (void*)((uintptr_t)this + 0x2ef);
}
void* _Script_Engine::PrimitiveComponent::get_CustomDepthStencilWriteMask() {
    return (void*)((uintptr_t)this + 0x2f3);
}
int32_t& _Script_Engine::PrimitiveComponent::get_CustomDepthStencilValue() {
    return *(int32_t*)((uintptr_t)this + 0x2f4);
}
int32_t& _Script_Engine::PrimitiveComponent::get_VisibilityId() {
    return *(int32_t*)((uintptr_t)this + 0x2fc);
}
float& _Script_Engine::PrimitiveComponent::get_DitherAlpha() {
    return *(float*)((uintptr_t)this + 0x30c);
}
float& _Script_Engine::PrimitiveComponent::get_SkylightScale() {
    return *(float*)((uintptr_t)this + 0x314);
}
_Script_Engine::RsFrameOfReference*& _Script_Engine::PrimitiveComponent::get_FrameOfReference() {
    return *(_Script_Engine::RsFrameOfReference**)((uintptr_t)this + 0x320);
}
float& _Script_Engine::PrimitiveComponent::get_LastRenderTimeOnScreen() {
    return *(float*)((uintptr_t)this + 0x338);
}
void* _Script_Engine::PrimitiveComponent::get_MoveIgnoreComponents() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Script_Engine::PrimitiveComponent::get_BodyInstance() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Script_Engine::PrimitiveComponent::get_OnBeginCursorOver() {
    return (void*)((uintptr_t)this + 0xa10);
}
void* _Script_Engine::PrimitiveComponent::get_OnClicked() {
    return (void*)((uintptr_t)this + 0xa30);
}
void* _Script_Engine::PrimitiveComponent::get_OnReleased() {
    return (void*)((uintptr_t)this + 0xa40);
}
void* _Script_Engine::PrimitiveComponent::get_OnInputTouchBegin() {
    return (void*)((uintptr_t)this + 0xa50);
}
void* _Script_Engine::PrimitiveComponent::get_OnInputTouchEnd() {
    return (void*)((uintptr_t)this + 0xa60);
}
_Script_Engine::PrimitiveComponent*& _Script_Engine::PrimitiveComponent::get_LODParentPrimitive() {
    return *(_Script_Engine::PrimitiveComponent**)((uintptr_t)this + 0xaa0);
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetCenterOfMass(void* BoneName) {
    return;
}
void* _Script_Engine::PrimitiveComponent::get_PostPhysicsComponentTick() {
    return (void*)((uintptr_t)this + 0xaa8);
}
void* _Script_Engine::PrimitiveComponent::get_OnInflictingDamageFromCollision() {
    return (void*)((uintptr_t)this + 0xb10);
}
void _Script_Engine::PrimitiveComponent::WakeRigidBody(void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetWalkableSlopeOverride(_Script_Engine::WalkableSlopeOverride& NewOverride) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetVelocityBufferClipSpaceOverride(_Script_CoreUObject::Vector2D InOverride) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetUseCCD(bool InUseCCD, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetTranslucentSortPriority(int32_t NewTranslucentSortPriority) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetSimulatePhysics(bool bSimulate) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetRenderCustomDepthAndCanBeOccluded(bool bCustomDepth, bool bCanBeOccluded) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetReceivesDecals(bool bNewReceivesDecals) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysMaterialOverride(_Script_Engine::PhysicalMaterial* NewPhysMaterial) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddTorque(_Script_CoreUObject::Vector Torque, void* BoneName, bool bAccelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsLinearVelocity(_Script_CoreUObject::Vector NewVel, bool bAddToCurrent, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsAngularVelocityInDegrees(_Script_CoreUObject::Vector NewAngVel, bool bAddToCurrent, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetPhysicsAngularVelocity(_Script_CoreUObject::Vector NewAngVel, bool bAddToCurrent, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetOwnerNoSee(bool bNewOwnerNoSee) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetOnlyOwnerSee(bool bNewOnlyOwnerSee) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision) {
    return;
}
void _Script_Engine::PrimitiveComponent::ClearMoveIgnoreComponents() {
    return;
}
void _Script_Engine::PrimitiveComponent::SetMaterialByName(void* MaterialSlotName, _Script_Engine::MaterialInterface* Material) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetMassOverrideInKg(void* BoneName, float MassInKg, bool bOverrideMass) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetIndirectLightingScale(float NewIndirectLightingScale) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetGenerateOverlapEvents(bool bInGenerateOverlapEvents) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetForceCachedShadowmap(bool bNewForceCachedShadowmap) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetDynamicDeformer(bool bValue) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetDitherAlpha(float NewDitherAlpha) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCustomDepthStencilWriteMask(void* WriteMaskBit) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCustomDepthStencilValue(int32_t Value) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetPhysicsAngularVelocityInDegrees(void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCullDistance(float NewCullDistance) {
    return;
}
void* _Script_Engine::PrimitiveComponent::GetCollisionProfileName() {
    return;
}
void _Script_Engine::PrimitiveComponent::SetConstraintLockedAxes(bool bLockXTranslation, bool bLockYTranslation, bool bLockZTranslation, bool bLockXRotation, bool bLockYRotation, bool bLockZRotation) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddImpulseAtLocation(_Script_CoreUObject::Vector Impulse, _Script_CoreUObject::Vector Location, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCollisionResponseToChannel(void* Channel, void* NewResponse) {
    return;
}
void _Script_Engine::PrimitiveComponent::ClearMoveIgnoreActors() {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCollisionResponseToAllChannels(void* NewResponse) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCollisionProfileName(void* InCollisionProfileName) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddImpulse(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCollisionObjectType(void* Channel) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetCollisionEnabled(void* NewType) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetBoundsScale(float NewBoundsScale) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetApplyDamageFromPhysicsCollision(bool bNewValue) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddTorqueInDegrees(_Script_CoreUObject::Vector Torque, void* BoneName, bool bAccelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetAngularDamping(float InDamping) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetAllUseCCD(bool InUseCCD) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetAllPhysicsLinearVelocity(_Script_CoreUObject::Vector NewVel, bool bAddToCurrent) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetAllPhysicsAngularVelocityInRadians(_Script_CoreUObject::Vector& NewAngVel, bool bAddToCurrent) {
    return;
}
void* _Script_Engine::PrimitiveComponent::GetCollisionEnabled() {
    return;
}
void _Script_Engine::PrimitiveComponent::SetAllPhysicsAngularVelocityInDegrees(_Script_CoreUObject::Vector& NewAngVel, bool bAddToCurrent) {
    return;
}
float _Script_Engine::PrimitiveComponent::GetMassScale(void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::SetAllPhysicsAngularVelocity(_Script_CoreUObject::Vector& NewAngVel, bool bAddToCurrent) {
    return;
}
void* _Script_Engine::PrimitiveComponent::CopyArrayOfMoveIgnoreComponents() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::ScaleByMomentOfInertia(_Script_CoreUObject::Vector InputVector, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::PutRigidBodyToSleep(void* BoneName) {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_SphereTraceComponent(_Script_CoreUObject::Vector TraceStart, _Script_CoreUObject::Vector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit) {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_SphereOverlapComponent(_Script_CoreUObject::Vector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit) {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_LineTraceComponent(_Script_CoreUObject::Vector TraceStart, _Script_CoreUObject::Vector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit) {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_IsQueryCollisionEnabled() {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_IsPhysicsCollisionEnabled() {
    return;
}
bool _Script_Engine::PrimitiveComponent::K2_BoxOverlapComponent(_Script_CoreUObject::Vector InBoxCentre, _Script_CoreUObject::Box InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, _Script_CoreUObject::Vector& HitLocation, _Script_CoreUObject::Vector& HitNormal, void*& BoneName, _Script_Engine::HitResult& OutHit) {
    return;
}
bool _Script_Engine::PrimitiveComponent::IsOverlappingComponent(_Script_Engine::PrimitiveComponent* OtherComp) {
    return;
}
bool _Script_Engine::PrimitiveComponent::IsGravityEnabled() {
    return;
}
bool _Script_Engine::PrimitiveComponent::IsAnyRigidBodyAwake() {
    return;
}
void _Script_Engine::PrimitiveComponent::IgnoreComponentWhenMoving(_Script_Engine::PrimitiveComponent* Component, bool bShouldIgnore) {
    return;
}
void _Script_Engine::PrimitiveComponent::IgnoreActorWhenMoving(_Script_Engine::Actor* Actor, bool bShouldIgnore) {
    return;
}
_Script_Engine::WalkableSlopeOverride _Script_Engine::PrimitiveComponent::GetWalkableSlopeOverride() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetPhysicsLinearVelocityAtPoint(_Script_CoreUObject::Vector Point, void* BoneName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetPhysicsAngularVelocityInRadians(void* BoneName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetPhysicsAngularVelocity(void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::GetOverlappingComponents(void*& OutOverlappingComponents) {
    return;
}
int32_t _Script_Engine::PrimitiveComponent::GetNumMaterials() {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::PrimitiveComponent::GetMaterialFromCollisionFaceIndex(int32_t FaceIndex, int32_t& SectionIndex) {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::PrimitiveComponent::GetMaterial(int32_t ElementIndex) {
    return;
}
float _Script_Engine::PrimitiveComponent::GetMass() {
    return;
}
float _Script_Engine::PrimitiveComponent::GetLinearDamping() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PrimitiveComponent::GetInertiaTensor(void* BoneName) {
    return;
}
bool _Script_Engine::PrimitiveComponent::GetGenerateOverlapEvents() {
    return;
}
void _Script_Engine::PrimitiveComponent::GetConstraintLockedAxes(bool& bLockXTranslation, bool& bLockYTranslation, bool& bLockZTranslation, bool& bLockXRotation, bool& bLockYRotation, bool& bLockZRotation) {
    return;
}
void* _Script_Engine::PrimitiveComponent::GetCollisionResponseToChannel(void* Channel) {
    return;
}
void* _Script_Engine::PrimitiveComponent::GetCollisionObjectType() {
    return;
}
float _Script_Engine::PrimitiveComponent::GetClosestPointOnCollision(_Script_CoreUObject::Vector& Point, _Script_CoreUObject::Vector& OutPointOnBody, void* BoneName) {
    return;
}
float _Script_Engine::PrimitiveComponent::GetAngularDamping() {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::PrimitiveComponent::CreateDynamicMaterialInstance(int32_t ElementIndex, _Script_Engine::MaterialInterface* SourceMaterial, void* OptionalName) {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::PrimitiveComponent::CreateAndSetMaterialInstanceDynamicFromMaterial(int32_t ElementIndex, _Script_Engine::MaterialInterface* Parent) {
    return;
}
_Script_Engine::MaterialInstanceDynamic* _Script_Engine::PrimitiveComponent::CreateAndSetMaterialInstanceDynamic(int32_t ElementIndex) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddRadialImpulse(_Script_CoreUObject::Vector origin, float Radius, float Strength, void* Falloff, bool bVelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddRadialForce(_Script_CoreUObject::Vector origin, float Radius, float Strength, void* Falloff, bool bAccelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddForceAtLocationLocal(_Script_CoreUObject::Vector Force, _Script_CoreUObject::Vector Location, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddForceAtLocation(_Script_CoreUObject::Vector Force, _Script_CoreUObject::Vector Location, void* BoneName) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddForce(_Script_CoreUObject::Vector Force, void* BoneName, bool bAccelChange) {
    return;
}
void _Script_Engine::PrimitiveComponent::AddAngularImpulseInDegrees(_Script_CoreUObject::Vector Impulse, void* BoneName, bool bVelChange) {
    return;
}
