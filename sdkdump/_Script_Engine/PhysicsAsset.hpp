#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct ThumbnailInfo;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsAsset : public _Script_CoreUObject::Object {
    private: char pad_28[0x158]; public:
    void* get_BoundsBodies();
    void* get_SkeletalBodySetups();
    void* get_ConstraintSetup();
    bool get_bUseAsyncScene();
    void set_bUseAsyncScene(bool value);
    bool get_bNotForDedicatedServer();
    void set_bNotForDedicatedServer(bool value);
    bool get_bUseCCDForAllBodiesDuringRagdollPhysics();
    void set_bUseCCDForAllBodiesDuringRagdollPhysics(bool value);
    bool get_bUseCCDForAllBodiesDuringPhysicalAnimation();
    void set_bUseCCDForAllBodiesDuringPhysicalAnimation(bool value);
    bool get_bSupportsPhysicalAnimation();
    void set_bSupportsPhysicalAnimation(bool value);
    bool get_bPhysicalAnimationWithContinuousMotionProcessing();
    void set_bPhysicalAnimationWithContinuousMotionProcessing(bool value);
    bool get_bUseHardcodedSetupForConstraints();
    void set_bUseHardcodedSetupForConstraints(bool value);
    float& get_MaximumDistanceFromCameraToEnablePhysicalAnimation();
    void* get_CopyCollisionFromStaticMeshes_NamePrefix();
    void* get_CopyCollisionFromStaticMeshes_NameSuffix();
    void* get_CopyCollisionFromStaticMeshes_NameIgnorePrefix();
    void* get_CopyCollisionFromStaticMeshes_NameIgnoreSuffix();
    void* get_CopyCollisionFromStaticMeshes_BoneNameIgnorePrefix();
    void* get_CopyCollisionFromStaticMeshes_BoneNameIgnoreSuffix();
    _Script_Engine::ThumbnailInfo*& get_ThumbnailInfo();
    void* get_BodySetup();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
