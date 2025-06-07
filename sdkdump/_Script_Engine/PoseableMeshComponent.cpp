#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "PoseableMeshComponent.hpp"
#include "SkeletalMeshComponent.hpp"
#include "SkinnedMeshComponent.hpp"
_Script_CoreUObject::Class* _Script_Engine::PoseableMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PoseableMeshComponent");
    return result;
}
_Script_CoreUObject::Vector _Script_Engine::PoseableMeshComponent::GetBoneScaleByName(void* BoneName, void* BoneSpace) {
    return;
}
void _Script_Engine::PoseableMeshComponent::SetBoneTransformByName(void* BoneName, _Script_CoreUObject::Transform& InTransform, void* BoneSpace) {
    return;
}
void _Script_Engine::PoseableMeshComponent::SetBoneScaleByName(void* BoneName, _Script_CoreUObject::Vector InScale3D, void* BoneSpace) {
    return;
}
void _Script_Engine::PoseableMeshComponent::ResetBoneTransformByName(void* BoneName) {
    return;
}
void _Script_Engine::PoseableMeshComponent::SetBoneRotationByName(void* BoneName, _Script_CoreUObject::Rotator InRotation, void* BoneSpace) {
    return;
}
void _Script_Engine::PoseableMeshComponent::SetBoneLocationByName(void* BoneName, _Script_CoreUObject::Vector InLocation, void* BoneSpace) {
    return;
}
_Script_CoreUObject::Transform _Script_Engine::PoseableMeshComponent::GetBoneTransformByName(void* BoneName, void* BoneSpace) {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::PoseableMeshComponent::GetBoneRotationByName(void* BoneName, void* BoneSpace) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PoseableMeshComponent::GetBoneLocationByName(void* BoneName, void* BoneSpace) {
    return;
}
void _Script_Engine::PoseableMeshComponent::CopyPoseFromSkeletalComponent(_Script_Engine::SkeletalMeshComponent* InComponentToCopy) {
    return;
}
void _Script_Engine::PoseableMeshComponent::ForceRefreshBoneTransforms() {
    return;
}
