#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PhysicsAsset.hpp"
#include "ThumbnailInfo.hpp"
void _Script_Engine::PhysicsAsset::set_bPhysicalAnimationWithContinuousMotionProcessing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PhysicsAsset::set_bNotForDedicatedServer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::PhysicsAsset::get_CopyCollisionFromStaticMeshes_BoneNameIgnoreSuffix() {
    return (void*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::PhysicsAsset::get_BoundsBodies() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_Engine::PhysicsAsset::get_bUseCCDForAllBodiesDuringRagdollPhysics() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 4 != 0;
}
void* _Script_Engine::PhysicsAsset::get_SkeletalBodySetups() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::PhysicsAsset::get_ConstraintSetup() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_Engine::PhysicsAsset::get_bUseAsyncScene() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_Engine::PhysicsAsset::set_bUseAsyncScene(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PhysicsAsset::get_CopyCollisionFromStaticMeshes_NameIgnorePrefix() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_Engine::PhysicsAsset::get_bNotForDedicatedServer() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 2 != 0;
}
void _Script_Engine::PhysicsAsset::set_bUseCCDForAllBodiesDuringRagdollPhysics(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::PhysicsAsset::get_bUseCCDForAllBodiesDuringPhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 8 != 0;
}
void _Script_Engine::PhysicsAsset::set_bUseCCDForAllBodiesDuringPhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::PhysicsAsset::get_CopyCollisionFromStaticMeshes_NamePrefix() {
    return (void*)((uintptr_t)this + 0x68);
}
bool _Script_Engine::PhysicsAsset::get_bSupportsPhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 16 != 0;
}
void _Script_Engine::PhysicsAsset::set_bSupportsPhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::PhysicsAsset::get_bPhysicalAnimationWithContinuousMotionProcessing() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 32 != 0;
}
bool _Script_Engine::PhysicsAsset::get_bUseHardcodedSetupForConstraints() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 64 != 0;
}
void _Script_Engine::PhysicsAsset::set_bUseHardcodedSetupForConstraints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::PhysicsAsset::get_MaximumDistanceFromCameraToEnablePhysicalAnimation() {
    return *(float*)((uintptr_t)this + 0x64);
}
void* _Script_Engine::PhysicsAsset::get_CopyCollisionFromStaticMeshes_NameSuffix() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_Engine::PhysicsAsset::get_CopyCollisionFromStaticMeshes_NameIgnoreSuffix() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::PhysicsAsset::get_CopyCollisionFromStaticMeshes_BoneNameIgnorePrefix() {
    return (void*)((uintptr_t)this + 0xa8);
}
_Script_Engine::ThumbnailInfo*& _Script_Engine::PhysicsAsset::get_ThumbnailInfo() {
    return *(_Script_Engine::ThumbnailInfo**)((uintptr_t)this + 0x168);
}
void* _Script_Engine::PhysicsAsset::get_BodySetup() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_Engine::PhysicsAsset::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PhysicsAsset");
    return result;
}
