#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BodySetup.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "ProceduralMeshComponent.hpp"
void* _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_LocalBounds() {
    return (void*)((uintptr_t)this + 0xb98);
}
bool _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_bUseComplexAsSimpleCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xb68 + 0)) & 1 != 0;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::set_bUseComplexAsSimpleCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb68 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::set_bUseAsyncCooking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb69 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb69 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_bUseAsyncCooking() {
    return (*(uint8_t*)((uintptr_t)this + 0xb69 + 0)) & 1 != 0;
}
void* _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_ProcMeshSections() {
    return (void*)((uintptr_t)this + 0xb78);
}
_Script_Engine::BodySetup*& _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_ProcMeshBodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0xb70);
}
void* _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_CollisionConvexElems() {
    return (void*)((uintptr_t)this + 0xb88);
}
void* _Script_ProceduralMeshComponent::ProceduralMeshComponent::get_AsyncBodySetupQueue() {
    return (void*)((uintptr_t)this + 0xbb8);
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, void*& Vertices, void*& Normals, void*& UV0, void*& VertexColors, void*& Tangents) {
    return;
}
_Script_CoreUObject::Class* _Script_ProceduralMeshComponent::ProceduralMeshComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ProceduralMeshComponent.ProceduralMeshComponent");
    return result;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, void*& Vertices, void*& Normals, void*& UV0, void*& UV1, void*& UV2, void*& UV3, void*& VertexColors, void*& Tangents) {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility) {
    return;
}
bool _Script_ProceduralMeshComponent::ProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex) {
    return;
}
int32_t _Script_ProceduralMeshComponent::ProceduralMeshComponent::GetNumSections() {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UV0, void*& UV1, void*& UV2, void*& UV3, void*& VertexColors, void*& Tangents, bool bCreateCollision) {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, void*& Vertices, void*& Triangles, void*& Normals, void*& UV0, void*& VertexColors, void*& Tangents, bool bCreateCollision) {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex) {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::ClearCollisionConvexMeshes() {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::ClearAllMeshSections() {
    return;
}
void _Script_ProceduralMeshComponent::ProceduralMeshComponent::AddCollisionConvexMesh(void* ConvexVerts) {
    return;
}
