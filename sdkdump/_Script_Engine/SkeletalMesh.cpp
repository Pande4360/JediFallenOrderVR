#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Blueprint.hpp"
#include "BodySetup.hpp"
#include "NodeMappingContainer.hpp"
#include "PhysicsAsset.hpp"
#include "SkeletalMesh.hpp"
#include "SkeletalMeshLODSettings.hpp"
#include "SkeletalMeshSocket.hpp"
#include "Skeleton.hpp"
void* _Script_Engine::SkeletalMesh::get_Materials() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_Engine::SkeletalMeshSocket* _Script_Engine::SkeletalMesh::FindSocket(void* InSocketName) {
    return;
}
_Script_Engine::Skeleton*& _Script_Engine::SkeletalMesh::get_Skeleton() {
    return *(_Script_Engine::Skeleton**)((uintptr_t)this + 0x48);
}
void* _Script_Engine::SkeletalMesh::get_ImportedBounds() {
    return (void*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::SkeletalMesh::get_NegativeBoundsExtension() {
    return (void*)((uintptr_t)this + 0x94);
}
void* _Script_Engine::SkeletalMesh::get_ExtendedBounds() {
    return (void*)((uintptr_t)this + 0x6c);
}
void* _Script_Engine::SkeletalMesh::get_PositiveBoundsExtension() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_Engine::SkeletalMesh::get_SkelMirrorTable() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::SkeletalMesh::get_PostProcessAnimBlueprint() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Script_Engine::SkeletalMesh::get_LODInfo() {
    return (void*)((uintptr_t)this + 0xc0);
}
void _Script_Engine::SkeletalMesh::SetLODSettings(_Script_Engine::SkeletalMeshLODSettings* InLODSettings) {
    return;
}
void* _Script_Engine::SkeletalMesh::get_MinLOD() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::SkeletalMesh::get_MeshClothingAssets() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Script_Engine::SkeletalMesh::get_SkelMirrorAxis() {
    return (void*)((uintptr_t)this + 0xd4);
}
_Script_CoreUObject::Class* _Script_Engine::SkeletalMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SkeletalMesh");
    return result;
}
void* _Script_Engine::SkeletalMesh::get_SkelMirrorFlipAxis() {
    return (void*)((uintptr_t)this + 0xd5);
}
bool _Script_Engine::SkeletalMesh::get_bUseFullPrecisionUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 1 != 0;
}
void _Script_Engine::SkeletalMesh::set_bUseFullPrecisionUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::SkeletalMesh::get_bUseHighPrecisionTangentBasis() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 2 != 0;
}
void _Script_Engine::SkeletalMesh::set_bUseHighPrecisionTangentBasis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::SkeletalMesh::get_bHasBeenSimplified() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 4 != 0;
}
_Script_CoreUObject::BoxSphereBounds _Script_Engine::SkeletalMesh::GetBounds() {
    return;
}
void* _Script_Engine::SkeletalMesh::get_NodeMappingData() {
    return (void*)((uintptr_t)this + 0xf0);
}
void _Script_Engine::SkeletalMesh::set_bHasVertexColors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::SkeletalMesh::set_bHasBeenSimplified(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::PhysicsAsset*& _Script_Engine::SkeletalMesh::get_ShadowPhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0xe8);
}
bool _Script_Engine::SkeletalMesh::get_bHasVertexColors() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 8 != 0;
}
bool _Script_Engine::SkeletalMesh::get_bEnablePerPolyCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xd6 + 0)) & 32 != 0;
}
void _Script_Engine::SkeletalMesh::set_bEnablePerPolyCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd6 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd6 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_Engine::BodySetup*& _Script_Engine::SkeletalMesh::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0xd8);
}
_Script_Engine::PhysicsAsset*& _Script_Engine::SkeletalMesh::get_PhysicsAsset() {
    return *(_Script_Engine::PhysicsAsset**)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::SkeletalMesh::get_MorphTargets() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_Engine::SkeletalMesh::get_SamplingInfo() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Script_Engine::SkeletalMesh::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_Engine::SkeletalMesh::get_Sockets() {
    return (void*)((uintptr_t)this + 0x2d8);
}
int32_t _Script_Engine::SkeletalMesh::NumSockets() {
    return;
}
bool _Script_Engine::SkeletalMesh::IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections) {
    return;
}
_Script_Engine::SkeletalMeshSocket* _Script_Engine::SkeletalMesh::GetSocketByIndex(int32_t Index) {
    return;
}
_Script_Engine::NodeMappingContainer* _Script_Engine::SkeletalMesh::GetNodeMappingContainer(_Script_Engine::Blueprint* SourceAsset) {
    return;
}
_Script_CoreUObject::BoxSphereBounds _Script_Engine::SkeletalMesh::GetImportedBounds() {
    return;
}
_Script_Engine::SkeletalMeshSocket* _Script_Engine::SkeletalMesh::FindSocketAndIndex(void* InSocketName, int32_t& OutIndex) {
    return;
}
