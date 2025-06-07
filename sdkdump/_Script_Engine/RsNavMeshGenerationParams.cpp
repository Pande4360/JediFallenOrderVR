#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsNavMeshGenerationParams.hpp"
float& _Script_Engine::RsNavMeshGenerationParams::get_TileSizeUU() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_CellHeight() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_CellSize() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_AgentMaxSlope() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_MinRegionArea() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::RsNavMeshGenerationParams::get_LayerPartitioning() {
    return (void*)((uintptr_t)this + 0x27);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_MergeRegionSize() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_MaxSimplificationError() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bSortNavigationAreasByCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bSortNavigationAreasByCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bPerformVoxelFiltering() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bPerformVoxelFiltering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RsNavMeshGenerationParams::set_bMarkLowHeightAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bMarkLowHeightAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e + 0)) & 1 != 0;
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bFilterLowSpanSequences() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 1 != 0;
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bUseBetterOffsetsFromCorners() {
    return (*(uint8_t*)((uintptr_t)this + 0x22 + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bFilterLowSpanSequences(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bFilterLowSpanFromTileCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bDoFullyAsyncNavDataGathering() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bFilterLowSpanFromTileCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::RsNavMeshGenerationParams::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RsNavMeshGenerationParams");
    return result;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bDoFullyAsyncNavDataGathering(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::RsNavMeshGenerationParams::set_bUseBetterOffsetsFromCorners(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22 + 0);
    *(uint8_t*)((uintptr_t)this + 0x22 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bStoreEmptyTileLayers() {
    return (*(uint8_t*)((uintptr_t)this + 0x23 + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bStoreEmptyTileLayers(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23 + 0);
    *(uint8_t*)((uintptr_t)this + 0x23 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bAllowNavLinkAsPathEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bAllowNavLinkAsPathEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::RsNavMeshGenerationParams::get_bUseVoxelCache() {
    return (*(uint8_t*)((uintptr_t)this + 0x25 + 0)) & 1 != 0;
}
void _Script_Engine::RsNavMeshGenerationParams::set_bUseVoxelCache(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x25 + 0);
    *(uint8_t*)((uintptr_t)this + 0x25 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::RsNavMeshGenerationParams::get_RegionPartitioning() {
    return (void*)((uintptr_t)this + 0x26);
}
int32_t& _Script_Engine::RsNavMeshGenerationParams::get_RegionChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::RsNavMeshGenerationParams::get_LayerChunkSplits() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_Engine::RsNavMeshGenerationParams::get_MaxSimultaneousTileGenerationJobsCount() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
float& _Script_Engine::RsNavMeshGenerationParams::get_TileSetUpdateInterval() {
    return *(float*)((uintptr_t)this + 0x34);
}
