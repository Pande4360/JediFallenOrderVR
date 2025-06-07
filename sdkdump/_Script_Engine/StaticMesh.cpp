#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Box.hpp"
#include "..\_Script_CoreUObject\BoxSphereBounds.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "BodySetup.hpp"
#include "MaterialInterface.hpp"
#include "NavCollisionBase.hpp"
#include "StaticMesh.hpp"
void* _Script_Engine::StaticMesh::get_Sockets() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_Engine::BodySetup*& _Script_Engine::StaticMesh::get_BodySetup() {
    return *(_Script_Engine::BodySetup**)((uintptr_t)this + 0x70);
}
void* _Script_Engine::StaticMesh::get_MinLOD() {
    return (void*)((uintptr_t)this + 0x48);
}
float& _Script_Engine::StaticMesh::get_LpvBiasMultiplier() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::StaticMesh::get_StaticMaterials() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::StaticMesh::get_LightMapCoordinateIndex() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
float& _Script_Engine::StaticMesh::get_LightmapUVDensity() {
    return *(float*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::StaticMesh::get_LightMapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::StaticMesh::get_DistanceFieldSelfShadowBias() {
    return *(float*)((uintptr_t)this + 0x6c);
}
int32_t& _Script_Engine::StaticMesh::get_LODForCollision() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
bool _Script_Engine::StaticMesh::get_bGenerateMeshDistanceField() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 1 != 0;
}
void _Script_Engine::StaticMesh::set_bGenerateMeshDistanceField(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::StaticMesh::get_bStripComplexCollisionForConsole() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 2 != 0;
}
void _Script_Engine::StaticMesh::set_bStripComplexCollisionForConsole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::StaticMesh::get_bHasNavigationData() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 4 != 0;
}
void _Script_Engine::StaticMesh::set_bHasNavigationData(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::StaticMesh::get_bSupportUniformlyDistributedSampling() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 8 != 0;
}
void _Script_Engine::StaticMesh::set_bSupportUniformlyDistributedSampling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::StaticMesh::get_bAllowCPUAccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x7c + 0)) & 32 != 0;
}
void _Script_Engine::StaticMesh::set_bAllowCPUAccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x7c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::StaticMesh::get_bDisableCollisionOnSpawn() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_Engine::StaticMesh::set_bDisableCollisionOnSpawn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::StaticMesh::get_PositiveBoundsExtension() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::StaticMesh::get_NegativeBoundsExtension() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_Engine::StaticMesh::get_ExtendedBounds() {
    return (void*)((uintptr_t)this + 0xd8);
}
int32_t& _Script_Engine::StaticMesh::get_ElementToIgnoreForTexFactor() {
    return *(int32_t*)((uintptr_t)this + 0xf4);
}
void* _Script_Engine::StaticMesh::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0xf8);
}
_Script_CoreUObject::Object*& _Script_Engine::StaticMesh::get_EditableMesh() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x108);
}
_Script_Engine::NavCollisionBase*& _Script_Engine::StaticMesh::get_NavCollision() {
    return *(_Script_Engine::NavCollisionBase**)((uintptr_t)this + 0x110);
}
_Script_CoreUObject::Class* _Script_Engine::StaticMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StaticMesh");
    return result;
}
int32_t _Script_Engine::StaticMesh::GetNumSections(int32_t InLOD) {
    return;
}
int32_t _Script_Engine::StaticMesh::GetNumLODs() {
    return;
}
int32_t _Script_Engine::StaticMesh::GetMaterialIndex(void* MaterialSlotName) {
    return;
}
_Script_Engine::MaterialInterface* _Script_Engine::StaticMesh::GetMaterial(int32_t MaterialIndex) {
    return;
}
_Script_CoreUObject::BoxSphereBounds _Script_Engine::StaticMesh::GetBounds() {
    return;
}
_Script_CoreUObject::Box _Script_Engine::StaticMesh::GetBoundingBox() {
    return;
}
