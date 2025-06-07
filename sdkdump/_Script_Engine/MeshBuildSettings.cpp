#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshBuildSettings.hpp"
#include "StaticMesh.hpp"
bool _Script_Engine::MeshBuildSettings::get_bUseMikkTSpace() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bUseMikkTSpace(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bRecomputeNormals() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bRecomputeNormals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bRemoveDegenerates() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
bool _Script_Engine::MeshBuildSettings::get_bRecomputeTangents() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bRecomputeTangents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::MeshBuildSettings::set_bRemoveDegenerates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bBuildAdjacencyBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 16 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bBuildAdjacencyBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bBuildReversedIndexBuffer() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 32 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bBuildReversedIndexBuffer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bOmitTangentBasis() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 64 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bOmitTangentBasis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bUseHighPrecisionTangentBasis() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 128 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bUseHighPrecisionTangentBasis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bUseFullPrecisionUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bUseFullPrecisionUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::MeshBuildSettings::get_bGenerateLightmapUVs() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 2 != 0;
}
bool _Script_Engine::MeshBuildSettings::get_bGenerateDistanceFieldAsIfTwoSided() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 4 != 0;
}
void _Script_Engine::MeshBuildSettings::set_bGenerateLightmapUVs(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::MeshBuildSettings::set_bGenerateDistanceFieldAsIfTwoSided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
int32_t& _Script_Engine::MeshBuildSettings::get_MinLightmapResolution() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::MeshBuildSettings::get_SrcLightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Engine::MeshBuildSettings::get_DstLightmapIndex() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
void* _Script_Engine::MeshBuildSettings::get_BuildScale3D() {
    return (void*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::MeshBuildSettings::get_BuildScale() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_Engine::MeshBuildSettings::get_DistanceFieldResolutionScale() {
    return *(float*)((uintptr_t)this + 0x20);
}
_Script_Engine::StaticMesh*& _Script_Engine::MeshBuildSettings::get_DistanceFieldReplacementMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::MeshBuildSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MeshBuildSettings");
    return result;
}
