#include "..\FUObjectArray.hpp"
#include "AnimNode_RigidBody.hpp"
#include "AnimNode_SkeletalControlBase.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\PhysicsAsset.hpp"
_Script_Engine::PhysicsAsset*& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_OverridePhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0xf0);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_OverrideWorldGravity() {
    return (void*)((uintptr_t)this + 0xf8);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ExternalForce() {
    return (void*)((uintptr_t)this + 0x104);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ComponentLinearAccScale() {
    return (void*)((uintptr_t)this + 0x110);
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bOverrideWorldGravity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x158 + 0);
    *(uint8_t*)((uintptr_t)this + 0x158 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ComponentLinearVelScale() {
    return (void*)((uintptr_t)this + 0x11c);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_ComponentAppliedLinearAccClamp() {
    return (void*)((uintptr_t)this + 0x128);
}
float& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_TeleportationThreshold() {
    return *(float*)((uintptr_t)this + 0x134);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_OverlapChannel() {
    return (void*)((uintptr_t)this + 0x138);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_BaseBoneRef() {
    return (void*)((uintptr_t)this + 0x140);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bEnableWorldGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x139 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bEnableWorldGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x139 + 0);
    *(uint8_t*)((uintptr_t)this + 0x139 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_AnimGraphRuntime::AnimNode_RigidBody::get_SimulationSpace() {
    return (void*)((uintptr_t)this + 0x13c);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bOverrideWorldGravity() {
    return (*(uint8_t*)((uintptr_t)this + 0x158 + 0)) & 1 != 0;
}
float& _Script_AnimGraphRuntime::AnimNode_RigidBody::get_CachedBoundsScale() {
    return *(float*)((uintptr_t)this + 0x15c);
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bTransferBoneVelocities(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x160 + 0);
    *(uint8_t*)((uintptr_t)this + 0x160 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bTransferBoneVelocities() {
    return (*(uint8_t*)((uintptr_t)this + 0x160 + 0)) & 1 != 0;
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bFreezeIncomingPoseOnStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x161 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bFreezeIncomingPoseOnStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x161 + 0);
    *(uint8_t*)((uintptr_t)this + 0x161 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bUsePhysicsBodiesFromSkeletalMeshComponentToDriveClothKinematicBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x162 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bUsePhysicsBodiesFromSkeletalMeshComponentToDriveClothKinematicBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x162 + 0);
    *(uint8_t*)((uintptr_t)this + 0x162 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bTransferSimulationTransformsToAnimInstanceProxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x163 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bTransferSimulationTransformsToAnimInstanceProxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x163 + 0);
    *(uint8_t*)((uintptr_t)this + 0x163 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_DebugEnableVisualDisplayForBodies() {
    return (*(uint8_t*)((uintptr_t)this + 0x164 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_DebugEnableVisualDisplayForBodies(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x164 + 0);
    *(uint8_t*)((uintptr_t)this + 0x164 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AnimGraphRuntime::AnimNode_RigidBody::get_bComponentSpaceSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x165 + 0)) & 1 != 0;
}
void _Script_AnimGraphRuntime::AnimNode_RigidBody::set_bComponentSpaceSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x165 + 0);
    *(uint8_t*)((uintptr_t)this + 0x165 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AnimGraphRuntime::AnimNode_RigidBody::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AnimGraphRuntime.AnimNode_RigidBody");
    return result;
}
