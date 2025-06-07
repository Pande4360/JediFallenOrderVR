#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "MeshComponent.hpp"
namespace _Script_Engine {
struct SkeletalMesh;
}
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SkinnedMeshComponent : public MeshComponent {
    private: char pad_b60[0x1e0]; public:
    _Script_Engine::SkeletalMesh*& get_SkeletalMesh();
    void* get_MasterPoseComponent();
    bool get_bEnablePhysicsOnSlavePoseComponents();
    void set_bEnablePhysicsOnSlavePoseComponents(bool value);
    _Script_Engine::PhysicsAsset*& get_PhysicsAssetOverride();
    int32_t& get_ForcedLodModel();
    int32_t& get_MinLodModel();
    float& get_StreamingDistanceMultiplier();
    void* get_LODInfo();
    void* get_VisibilityBasedAnimTickOption();
    bool get_bOverrideMinLod();
    void set_bOverrideMinLod(bool value);
    bool get_bUseBoundsFromMasterPoseComponent();
    void set_bUseBoundsFromMasterPoseComponent(bool value);
    bool get_bForceWireframe();
    void set_bForceWireframe(bool value);
    bool get_bDisplayBones();
    void set_bDisplayBones(bool value);
    bool get_bDisableMorphTarget();
    void set_bDisableMorphTarget(bool value);
    bool get_bHideSkin();
    void set_bHideSkin(bool value);
    bool get_bPerBoneMotionBlur();
    void set_bPerBoneMotionBlur(bool value);
    bool get_bComponentUseFixedSkelBounds();
    void set_bComponentUseFixedSkelBounds(bool value);
    bool get_bConsiderAllBodiesForBounds();
    void set_bConsiderAllBodiesForBounds(bool value);
    bool get_bSyncAttachParentLOD();
    void set_bSyncAttachParentLOD(bool value);
    bool get_bCanHighlightSelectedSections();
    void set_bCanHighlightSelectedSections(bool value);
    bool get_bRecentlyRendered();
    void set_bRecentlyRendered(bool value);
    bool get_bRequireBoneRefresh();
    void set_bRequireBoneRefresh(bool value);
    bool get_bCastCapsuleDirectShadow();
    void set_bCastCapsuleDirectShadow(bool value);
    bool get_bCastCapsuleIndirectShadow();
    void set_bCastCapsuleIndirectShadow(bool value);
    bool get_bCPUSkinning();
    void set_bCPUSkinning(bool value);
    bool get_bEnableUpdateRateOptimizations();
    void set_bEnableUpdateRateOptimizations(bool value);
    bool get_bDisplayDebugUpdateRateOptimizations();
    void set_bDisplayDebugUpdateRateOptimizations(bool value);
    bool get_bRenderStatic();
    void set_bRenderStatic(bool value);
    bool get_bShouldMarkSlaveTransformsDirtyOnRefresh();
    void set_bShouldMarkSlaveTransformsDirtyOnRefresh(bool value);
    bool get_bCachedLocalBoundsUpToDate();
    void set_bCachedLocalBoundsUpToDate(bool value);
    bool get_bForceMeshObjectUpdate();
    void set_bForceMeshObjectUpdate(bool value);
    bool get_bInvalidateSkinCache();
    void set_bInvalidateSkinCache(bool value);
    float& get_CapsuleIndirectShadowMinVisibility();
    void* get_CachedLocalBounds();
    static _Script_CoreUObject::Class* static_class();
    void UnHideBoneByName(void* BoneName);
    void TransformToBoneSpace(void* BoneName, _Script_CoreUObject::Vector InPosition, _Script_CoreUObject::Rotator InRotation, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutRotation);
    void TransformFromBoneSpace(void* BoneName, _Script_CoreUObject::Vector InPosition, _Script_CoreUObject::Rotator InRotation, _Script_CoreUObject::Vector& OutPosition, _Script_CoreUObject::Rotator& OutRotation);
    void ShowMaterialSection(int32_t MaterialID, bool bShow, int32_t LODIndex);
    void ShowAllMaterialSections(int32_t LODIndex);
    void SetVertexColorOverride_LinearColor(int32_t LODIndex, void*& VertexColors);
    void SetSkinWeightOverride(int32_t LODIndex, void*& SkinWeights);
    void SetSkeletalMesh(_Script_Engine::SkeletalMesh* NewMesh, bool bReinitPose);
    void SetRenderStatic(bool bNewValue);
    void SetPhysicsAsset(_Script_Engine::PhysicsAsset* NewPhysicsAsset, bool bForceReInit);
    void SetMinLOD(int32_t InNewMinLOD);
    void SetMasterPoseComponent(_Script_Engine::SkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
    void SetForcedLOD(int32_t InNewForcedLOD);
    void SetCastCapsuleIndirectShadow(bool bNewValue);
    void SetCastCapsuleDirectShadow(bool bNewValue);
    void SetCapsuleIndirectShadowMinVisibility(float NewValue);
    bool RaycastFindUVCoords(_Script_CoreUObject::Vector2D& OutUVCoords, _Script_CoreUObject::Vector RayStart, _Script_CoreUObject::Vector RayDirection, int32_t UVChannel, bool bUseHighestLOD, void* BoneNameHint);
    bool IsMaterialSectionShown(int32_t MaterialID, int32_t LODIndex);
    bool IsBoneHiddenByName(void* BoneName);
    void HideBoneByName(void* BoneName, void* PhysBodyOption);
    void* GetSocketBoneName(void* InSocketName);
    _Script_CoreUObject::Vector GetRefPosePosition(int32_t BoneIndex);
    void* GetParentBone(void* BoneName);
    int32_t GetNumLODs();
    int32_t GetNumBones();
    _Script_CoreUObject::Transform GetDeltaTransformFromRefPose(void* BoneName, void* BaseName);
    void* GetBoneName(int32_t BoneIndex);
    int32_t GetBoneIndex(void* BoneName);
    void* FindClosestBone_K2(_Script_CoreUObject::Vector TestLocation, _Script_CoreUObject::Vector& BoneLocation, float IgnoreScale, bool bRequirePhysicsAsset);
    void ClearVertexColorOverride(int32_t LODIndex);
    void ClearSkinWeightOverride(int32_t LODIndex);
    bool BoneIsChildOf(void* BoneName, void* ParentBoneName);
}; // Size: 0xd40
#pragma pack(pop)
}
