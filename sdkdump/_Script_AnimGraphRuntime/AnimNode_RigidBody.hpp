#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_SkeletalControlBase.hpp"
namespace _Script_Engine {
struct PhysicsAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RigidBody : public AnimNode_SkeletalControlBase {
    private: char pad_f0[0xc80]; public:
    _Script_Engine::PhysicsAsset*& get_OverridePhysicsAsset();
    void* get_OverrideWorldGravity();
    void* get_ExternalForce();
    void* get_ComponentLinearAccScale();
    void* get_ComponentLinearVelScale();
    void* get_ComponentAppliedLinearAccClamp();
    float& get_TeleportationThreshold();
    void* get_OverlapChannel();
    bool get_bEnableWorldGeometry();
    void set_bEnableWorldGeometry(bool value);
    void* get_SimulationSpace();
    void* get_BaseBoneRef();
    bool get_bOverrideWorldGravity();
    void set_bOverrideWorldGravity(bool value);
    float& get_CachedBoundsScale();
    bool get_bTransferBoneVelocities();
    void set_bTransferBoneVelocities(bool value);
    bool get_bFreezeIncomingPoseOnStart();
    void set_bFreezeIncomingPoseOnStart(bool value);
    bool get_bUsePhysicsBodiesFromSkeletalMeshComponentToDriveClothKinematicBodies();
    void set_bUsePhysicsBodiesFromSkeletalMeshComponentToDriveClothKinematicBodies(bool value);
    bool get_bTransferSimulationTransformsToAnimInstanceProxy();
    void set_bTransferSimulationTransformsToAnimInstanceProxy(bool value);
    bool get_DebugEnableVisualDisplayForBodies();
    void set_DebugEnableVisualDisplayForBodies(bool value);
    bool get_bComponentSpaceSimulation();
    void set_bComponentSpaceSimulation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd70
#pragma pack(pop)
}
