#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsNavMeshDisplaySettings.hpp"
void* _Script_NavigationSystem::RsNavMeshDisplaySettings::get_AgentName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_NavigationSystem::RsNavMeshDisplaySettings::get_DrawOffset() {
    return *(float*)((uintptr_t)this + 0x8);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bEnableDrawing() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bEnableDrawing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawDefaultPolygonCost() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d + 0)) & 1 != 0;
}
void* _Script_NavigationSystem::RsNavMeshDisplaySettings::get_Color() {
    return (void*)((uintptr_t)this + 0x10);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawTriangleEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawTriangleEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawPolyEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x15 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawOctree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x22 + 0);
    *(uint8_t*)((uintptr_t)this + 0x22 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawPolyEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawFilledPolys() {
    return (*(uint8_t*)((uintptr_t)this + 0x16 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDistinctlyDrawTilesBeingBuilt() {
    return (*(uint8_t*)((uintptr_t)this + 0x24 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawFilledPolys(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x16 + 0);
    *(uint8_t*)((uintptr_t)this + 0x16 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawNavMeshEdges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawNavMeshEdges() {
    return (*(uint8_t*)((uintptr_t)this + 0x17 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawTileBounds() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawTileBounds(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawPathCollidingGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawClusters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x21 + 0);
    *(uint8_t*)((uintptr_t)this + 0x21 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawPathCollidingGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawTileLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawTileLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawTileLevelInfo() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawTileLevelInfo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawPolygonLabels() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawPolygonLabels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawDefaultPolygonCost(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawLabelsOnPathNodes() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawLabelsOnPathNodes(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawFailedNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawFailedNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawClusters() {
    return (*(uint8_t*)((uintptr_t)this + 0x21 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawOctree() {
    return (*(uint8_t*)((uintptr_t)this + 0x22 + 0)) & 1 != 0;
}
bool _Script_NavigationSystem::RsNavMeshDisplaySettings::get_bDrawOctreeDetails() {
    return (*(uint8_t*)((uintptr_t)this + 0x23 + 0)) & 1 != 0;
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDrawOctreeDetails(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23 + 0);
    *(uint8_t*)((uintptr_t)this + 0x23 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_NavigationSystem::RsNavMeshDisplaySettings::set_bDistinctlyDrawTilesBeingBuilt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24 + 0);
    *(uint8_t*)((uintptr_t)this + 0x24 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_NavigationSystem::RsNavMeshDisplaySettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/NavigationSystem.RsNavMeshDisplaySettings");
    return result;
}
