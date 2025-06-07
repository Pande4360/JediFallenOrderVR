#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "InstancedStaticMeshComponent.hpp"
#include "StaticMeshComponent.hpp"
bool _Script_Engine::InstancedStaticMeshComponent::get_bOcclusionClustersUpToDate() {
    return (*(uint8_t*)((uintptr_t)this + 0xbe6 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_InstancingRandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0xbd8);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_PerInstanceSMData() {
    return (void*)((uintptr_t)this + 0xbc8);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_InstanceStartCullDistance() {
    return *(int32_t*)((uintptr_t)this + 0xbdc);
}
void _Script_Engine::InstancedStaticMeshComponent::set_bAutoUpdateOcclusionClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbe5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbe5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_InstanceEndCullDistance() {
    return *(int32_t*)((uintptr_t)this + 0xbe0);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_OcclusionQueryMode() {
    return (void*)((uintptr_t)this + 0xbe4);
}
bool _Script_Engine::InstancedStaticMeshComponent::get_bAutoUpdateOcclusionClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0xbe5 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::InstancedStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InstancedStaticMeshComponent");
    return result;
}
void _Script_Engine::InstancedStaticMeshComponent::set_bOcclusionClustersUpToDate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbe6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xbe6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_OcclusionClusters() {
    return (void*)((uintptr_t)this + 0xbe8);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_InstanceReorderTable() {
    return (void*)((uintptr_t)this + 0xbf8);
}
int32_t& _Script_Engine::InstancedStaticMeshComponent::get_NumPendingLightmaps() {
    return *(int32_t*)((uintptr_t)this + 0xc50);
}
void* _Script_Engine::InstancedStaticMeshComponent::get_CachedMappings() {
    return (void*)((uintptr_t)this + 0xc58);
}
void _Script_Engine::InstancedStaticMeshComponent::UpdateOcclusionClusters() {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::UpdateInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
    return;
}
void _Script_Engine::InstancedStaticMeshComponent::SetOcclusionQueryMode(void* InQueryMode) {
    return;
}
void _Script_Engine::InstancedStaticMeshComponent::SetCullDistances(int32_t StartCullDistance, int32_t EndCullDistance) {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::RemoveInstance(int32_t InstanceIndex) {
    return;
}
bool _Script_Engine::InstancedStaticMeshComponent::GetInstanceTransform(int32_t InstanceIndex, _Script_CoreUObject::Transform& OutInstanceTransform, bool bWorldSpace) {
    return;
}
void* _Script_Engine::InstancedStaticMeshComponent::GetInstancesOverlappingSphere(_Script_CoreUObject::Vector& Center, float Radius, bool bSphereInWorldSpace) {
    return;
}
void* _Script_Engine::InstancedStaticMeshComponent::GetInstancesOverlappingBox(_Script_CoreUObject::Box& Box, bool bBoxInWorldSpace) {
    return;
}
int32_t _Script_Engine::InstancedStaticMeshComponent::GetInstanceCount() {
    return;
}
void _Script_Engine::InstancedStaticMeshComponent::ClearInstances() {
    return;
}
int32_t _Script_Engine::InstancedStaticMeshComponent::AddInstanceWorldSpace(_Script_CoreUObject::Transform& WorldTransform) {
    return;
}
int32_t _Script_Engine::InstancedStaticMeshComponent::AddInstance(_Script_CoreUObject::Transform& InstanceTransform) {
    return;
}
