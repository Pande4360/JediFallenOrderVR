#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "MeshComponent.hpp"
#include "PhysicsAsset.hpp"
#include "SkeletalMesh.hpp"
#include "SkinnedMeshComponent.hpp"
void _Script_Engine::SkinnedMeshComponent::set_bRecentlyRendered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_Engine::SkeletalMesh*& _Script_Engine::SkinnedMeshComponent::get_SkeletalMesh() {
    return *(_Script_Engine::SkeletalMesh**)((uintptr_t)this + 0xb60);
}
void _Script_Engine::SkinnedMeshComponent::set_bHideSkin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
_Script_Engine::PhysicsAsset*& _Script_Engine::SkinnedMeshComponent::get_PhysicsAssetOverride() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0xcb0);
}
void* _Script_Engine::SkinnedMeshComponent::get_MasterPoseComponent() {
    return (void*)((uintptr_t)this + 0xb68);
}
void _Script_Engine::SkinnedMeshComponent::set_bEnablePhysicsOnSlavePoseComponents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb70 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bSyncAttachParentLOD() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 4 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bEnablePhysicsOnSlavePoseComponents() {
    return (*(uint8_t*)((uintptr_t)this + 0xb70 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::SkinnedMeshComponent::get_MinLodModel() {
    return *(int32_t*)((uintptr_t)this + 0xcbc);
}
int32_t& _Script_Engine::SkinnedMeshComponent::get_ForcedLodModel() {
    return *(int32_t*)((uintptr_t)this + 0xcb8);
}
float& _Script_Engine::SkinnedMeshComponent::get_StreamingDistanceMultiplier() {
    return *(float*)((uintptr_t)this + 0xccc);
}
void _Script_Engine::SkinnedMeshComponent::set_bEnableUpdateRateOptimizations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf3 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::SkinnedMeshComponent::get_LODInfo() {
    return (void*)((uintptr_t)this + 0xcd0);
}
void _Script_Engine::SkinnedMeshComponent::set_bCachedLocalBoundsUpToDate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::SkinnedMeshComponent::get_VisibilityBasedAnimTickOption() {
    return (void*)((uintptr_t)this + 0xcf0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bOverrideMinLod() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 2 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bPerBoneMotionBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::SkinnedMeshComponent::TransformFromBoneSpace(void* BoneName, _Script_CoreUObject::Vector InPosition, _Script_CoreUObject::Rotator InRotation, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutRotation) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::set_bOverrideMinLod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bUseBoundsFromMasterPoseComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 4 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bUseBoundsFromMasterPoseComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bCastCapsuleDirectShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bForceWireframe() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 8 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bRequireBoneRefresh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bForceWireframe(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bDisplayDebugUpdateRateOptimizations() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf3 + 0)) & 4 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bDisplayBones() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 16 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bDisplayBones(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bDisableMorphTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 32 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bForceMeshObjectUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bDisableMorphTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf1 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bHideSkin() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 64 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bCPUSkinning() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf3 + 0)) & 1 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bPerBoneMotionBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf1 + 0)) & 128 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bComponentUseFixedSkelBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 1 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bConsiderAllBodiesForBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 2 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bComponentUseFixedSkelBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bConsiderAllBodiesForBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bCanHighlightSelectedSections() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 8 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bSyncAttachParentLOD(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bCanHighlightSelectedSections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bRenderStatic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf3 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bRecentlyRendered() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 16 != 0;
}
void* _Script_Engine::SkinnedMeshComponent::get_CachedLocalBounds() {
    return (void*)((uintptr_t)this + 0xd08);
}
bool _Script_Engine::SkinnedMeshComponent::get_bRequireBoneRefresh() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 32 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bCastCapsuleDirectShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 64 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bCastCapsuleIndirectShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf2 + 0)) & 128 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bCastCapsuleIndirectShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf2 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void _Script_Engine::SkinnedMeshComponent::set_bCPUSkinning(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bEnableUpdateRateOptimizations() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf3 + 0)) & 2 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bDisplayDebugUpdateRateOptimizations(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf3 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::SkinnedMeshComponent::get_bRenderStatic() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf3 + 0)) & 8 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bShouldMarkSlaveTransformsDirtyOnRefresh() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf3 + 0)) & 32 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bShouldMarkSlaveTransformsDirtyOnRefresh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf3 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf3 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::SkinnedMeshComponent::get_CapsuleIndirectShadowMinVisibility() {
    return *(float*)((uintptr_t)this + 0xcfc);
}
bool _Script_Engine::SkinnedMeshComponent::get_bCachedLocalBoundsUpToDate() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf4 + 0)) & 1 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bForceMeshObjectUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf4 + 0)) & 2 != 0;
}
bool _Script_Engine::SkinnedMeshComponent::get_bInvalidateSkinCache() {
    return (*(uint8_t*)((uintptr_t)this + 0xcf8 + 0)) & 1 != 0;
}
void _Script_Engine::SkinnedMeshComponent::set_bInvalidateSkinCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcf8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcf8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SkinnedMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkinnedMeshComponent");
    return result;
}
void _Script_Engine::SkinnedMeshComponent::UnHideBoneByName(void* BoneName) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::TransformToBoneSpace(void* BoneName, _Script_CoreUObject::Vector InPosition, _Script_CoreUObject::Rotator InRotation, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutRotation) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::ShowMaterialSection(int32_t MaterialID, bool bShow, int32_t LODIndex) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::ShowAllMaterialSections(int32_t LODIndex) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetVertexColorOverride_LinearColor(int32_t LODIndex, void*& VertexColors) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetSkinWeightOverride(int32_t LODIndex, void*& SkinWeights) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetSkeletalMesh(_Script_Engine::SkeletalMesh* NewMesh, bool bReinitPose) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetRenderStatic(bool bNewValue) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetPhysicsAsset(_Script_Engine::PhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetMinLOD(int32_t InNewMinLOD) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetMasterPoseComponent(_Script_Engine::SkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetForcedLOD(int32_t InNewForcedLOD) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetCastCapsuleIndirectShadow(bool bNewValue) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetCastCapsuleDirectShadow(bool bNewValue) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::SetCapsuleIndirectShadowMinVisibility(float NewValue) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::RaycastFindUVCoords(_Script_CoreUObject::Vector2D& OutUVCoords, _Script_CoreUObject::Vector RayStart, _Script_CoreUObject::Vector RayDirection, int32_t UVChannel, bool bUseHighestLOD, void* BoneNameHint) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::IsBoneHiddenByName(void* BoneName) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::HideBoneByName(void* BoneName, void* PhysBodyOption) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::GetSocketBoneName(void* InSocketName) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::SkinnedMeshComponent::GetRefPosePosition(int32_t BoneIndex) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::GetParentBone(void* BoneName) {
    return;
}
int32_t _Script_Engine::SkinnedMeshComponent::GetNumLODs() {
    return;
}
int32_t _Script_Engine::SkinnedMeshComponent::GetNumBones() {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::SkinnedMeshComponent::GetDeltaTransformFromRefPose(void* BoneName, void* BaseName) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::GetBoneName(int32_t BoneIndex) {
    return;
}
int32_t _Script_Engine::SkinnedMeshComponent::GetBoneIndex(void* BoneName) {
    return;
}
void* _Script_Engine::SkinnedMeshComponent::FindClosestBone_K2(_Script_CoreUObject::Vector TestLocation, _Script_CoreUObject::Vector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::ClearVertexColorOverride(int32_t LODIndex) {
    return;
}
void _Script_Engine::SkinnedMeshComponent::ClearSkinWeightOverride(int32_t LODIndex) {
    return;
}
bool _Script_Engine::SkinnedMeshComponent::BoneIsChildOf(void* BoneName, void* ParentBoneName) {
    return;
}
