#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInterface.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
#include "MRMeshComponent.hpp"
_Script_Engine::MaterialInterface*& _Script_MRMesh::MRMeshComponent::get_Material() {
    return *(_Script_Engine::MaterialInterface**)((uintptr_t)this + 0xb30);
}
bool _Script_MRMesh::MRMeshComponent::get_bUpdateNavMeshOnMeshUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0xb39 + 0)) & 1 != 0;
}
bool _Script_MRMesh::MRMeshComponent::get_bCreateMeshProxySections() {
    return (*(uint8_t*)((uintptr_t)this + 0xb38 + 0)) & 1 != 0;
}
void _Script_MRMesh::MRMeshComponent::set_bCreateMeshProxySections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb38 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_MRMesh::MRMeshComponent::set_bUpdateNavMeshOnMeshUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb39 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb39 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_MRMesh::MRMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MRMesh.MRMeshComponent");
    return result;
}
void* _Script_MRMesh::MRMeshComponent::get_BodySetups() {
    return (void*)((uintptr_t)this + 0xb40);
}
bool _Script_MRMesh::MRMeshComponent::IsConnected() {
    return;
}
void _Script_MRMesh::MRMeshComponent::ForceNavMeshUpdate() {
    return;
}
void _Script_MRMesh::MRMeshComponent::Clear() {
    return;
}
