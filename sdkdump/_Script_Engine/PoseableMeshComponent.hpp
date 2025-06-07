#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "SkinnedMeshComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PoseableMeshComponent : public SkinnedMeshComponent {
    private: char pad_d40[0x140]; public:
    static _Script_CoreUObject::Class* static_class();
    void SetBoneTransformByName(void* BoneName, _Script_CoreUObject::Transform& InTransform, void* BoneSpace);
    void SetBoneScaleByName(void* BoneName, _Script_CoreUObject::Vector InScale3D, void* BoneSpace);
    void SetBoneRotationByName(void* BoneName, _Script_CoreUObject::Rotator InRotation, void* BoneSpace);
    void SetBoneLocationByName(void* BoneName, _Script_CoreUObject::Vector InLocation, void* BoneSpace);
    void ResetBoneTransformByName(void* BoneName);
    _Script_CoreUObject::Transform GetBoneTransformByName(void* BoneName, void* BoneSpace);
    _Script_CoreUObject::Vector GetBoneScaleByName(void* BoneName, void* BoneSpace);
    _Script_CoreUObject::Rotator GetBoneRotationByName(void* BoneName, void* BoneSpace);
    _Script_CoreUObject::Vector GetBoneLocationByName(void* BoneName, void* BoneSpace);
    void ForceRefreshBoneTransforms();
    void CopyPoseFromSkeletalComponent(_Script_Engine::SkeletalMeshComponent* InComponentToCopy);
}; // Size: 0xe80
#pragma pack(pop)
}
