#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HierarchicalInstancedStaticMeshComponent.hpp"
#include "InstancedStaticMeshComponent.hpp"
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_NumBuiltInstances() {
    return *(int32_t*)((uintptr_t)this + 0xc88);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_SortedInstances() {
    return (void*)((uintptr_t)this + 0xc78);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_BuiltInstanceBounds() {
    return (void*)((uintptr_t)this + 0xc90);
}
void _Script_Engine::HierarchicalInstancedStaticMeshComponent::set_bEnableDensityScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xcd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceBounds() {
    return (void*)((uintptr_t)this + 0xcac);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_UnbuiltInstanceBoundsList() {
    return (void*)((uintptr_t)this + 0xcc8);
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_bEnableDensityScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0xcd8 + 0)) & 1 != 0;
}
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_OcclusionLayerNumNodes() {
    return *(int32_t*)((uintptr_t)this + 0xce0);
}
void* _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_CacheMeshExtendedBounds() {
    return (void*)((uintptr_t)this + 0xce4);
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_bDisableCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xd04 + 0)) & 1 != 0;
}
void _Script_Engine::HierarchicalInstancedStaticMeshComponent::set_bDisableCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd04 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd04 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::HierarchicalInstancedStaticMeshComponent::get_InstanceCountToRender() {
    return *(int32_t*)((uintptr_t)this + 0xd08);
}
_Script_CoreUObject::Class* _Script_Engine::HierarchicalInstancedStaticMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HierarchicalInstancedStaticMeshComponent");
    return result;
}
bool _Script_Engine::HierarchicalInstancedStaticMeshComponent::RemoveInstances(void*& InstancesToRemove) {
    return;
}
