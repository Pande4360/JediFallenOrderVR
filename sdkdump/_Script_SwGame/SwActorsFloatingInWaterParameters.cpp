#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwActorsFloatingInWaterParameters.hpp"
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_DoNotActivate() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_DebugShowHeroRanges() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_DoNotActivate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_DebugShowBasicInfoForEveryObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_DebugShowHeroRanges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_DebugShowBasicInfoForEveryObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_DebugShowRotationalAlignment() {
    return (*(uint8_t*)((uintptr_t)this + 0x3 + 0)) & 1 != 0;
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_DebugShowRotationalAlignment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_DebugShowSpawningExclusionAreas() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_DebugShowSpawningExclusionAreas(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwActorsFloatingInWaterParameters::get_HiResActorsDefinition() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_SwGame::SwActorsFloatingInWaterParameters::get_StaticMeshesDefinition() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_SwGame::SwActorsFloatingInWaterParameters::get_TotalNumberOfObjects() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
int32_t& _Script_SwGame::SwActorsFloatingInWaterParameters::get_InitialNumberOfObjectsOnX() {
    return *(int32_t*)((uintptr_t)this + 0x2c);
}
int32_t& _Script_SwGame::SwActorsFloatingInWaterParameters::get_InitialNumberOfObjectsOnY() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_InitialSpawningChancePercentage() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Script_SwGame::SwActorsFloatingInWaterParameters::get_HiResPoolSize() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_SwGame::SwActorsFloatingInWaterParameters::get_LowResPoolSize() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_MaximumDistanceFromHeroForAnyObject() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_LowResDistanceBelowWaterAfterActivation() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_DistanceFromHeroToStartDynamicSpawning() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_DistanceBelowWaterToSafelySpawnPool() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_HiResDistanceOnXBetweenActorsInPool() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_SurfaceAlignmentSpeed() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_LowResSurfaceAlignmentSpeed() {
    return *(float*)((uintptr_t)this + 0x54);
}
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_HiResRotationAlignmentEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_HiResRotationAlignmentEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_HiResRotationAlignmentSpeed() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_MinimumDistanceBetweenTwoObjects() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_MinimumDistanceBetweenTwoObjectsVariation() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_UsablePartOfTheSurfaceCoef() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_WaterSurfaceOffset() {
    return *(float*)((uintptr_t)this + 0x70);
}
bool _Script_SwGame::SwActorsFloatingInWaterParameters::get_WaterFlowDisabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
void _Script_SwGame::SwActorsFloatingInWaterParameters::set_WaterFlowDisabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwActorsFloatingInWaterParameters::get_WaterFlowStrength() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_SwGame::SwActorsFloatingInWaterParameters::get_WaterFlowDirection() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::SwActorsFloatingInWaterParameters::get_SpawningExclusionAreas() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_SwGame::SwActorsFloatingInWaterParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwActorsFloatingInWaterParameters");
    return result;
}
