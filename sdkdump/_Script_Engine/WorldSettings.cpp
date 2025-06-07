#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BookMark.hpp"
#include "Info.hpp"
#include "NavigationSystemConfig.hpp"
#include "PlayerState.hpp"
#include "SoundMix.hpp"
#include "WorldSettings.hpp"
bool _Script_Engine::WorldSettings::get_bWorldGravitySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 8 != 0;
}
int32_t& _Script_Engine::WorldSettings::get_MaxNumberOfBookmarks() {
    return *(int32_t*)((uintptr_t)this + 0x568);
}
bool _Script_Engine::WorldSettings::get_bEnableWorldBoundsChecks() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bPlaceCellsOnlyAlongCameraTracks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::WorldSettings::set_bEnableWorldBoundsChecks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::WorldSettings::get_bEnableNavigationSystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 2 != 0;
}
bool _Script_Engine::WorldSettings::get_bPausedFromSuspension() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 8 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableNavigationSystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::WorldSettings::get_MinGlobalTimeDilation() {
    return *(float*)((uintptr_t)this + 0x500);
}
bool _Script_Engine::WorldSettings::get_bEnableAISystem() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 4 != 0;
}
void _Script_Engine::WorldSettings::set_bEnableAISystem(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::WorldSettings::set_bWorldGravitySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::WorldSettings::get_bGlobalGravitySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 16 != 0;
}
void _Script_Engine::WorldSettings::set_bGlobalGravitySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::WorldSettings::get_MaxGlobalTimeDilation() {
    return *(float*)((uintptr_t)this + 0x504);
}
_Script_Engine::NavigationSystemConfig*& _Script_Engine::WorldSettings::get_NavigationSystemConfig() {
    return *(_Script_Engine::NavigationSystemConfig**)((uintptr_t)this + 0x370);
}
void _Script_Engine::WorldSettings::set_bHighPriorityLoadingLocal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_Engine::NavigationSystemConfig*& _Script_Engine::WorldSettings::get_NavigationSystemConfigOverride() {
    return *(_Script_Engine::NavigationSystemConfig**)((uintptr_t)this + 0x378);
}
float& _Script_Engine::WorldSettings::get_WorldToMeters() {
    return *(float*)((uintptr_t)this + 0x498);
}
float& _Script_Engine::WorldSettings::get_KillZ() {
    return *(float*)((uintptr_t)this + 0x380);
}
void* _Script_Engine::WorldSettings::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x558);
}
void* _Script_Engine::WorldSettings::get_KillZDamageType() {
    return (void*)((uintptr_t)this + 0x388);
}
float& _Script_Engine::WorldSettings::get_WorldGravityZ() {
    return *(float*)((uintptr_t)this + 0x390);
}
float& _Script_Engine::WorldSettings::get_TimeDilation() {
    return *(float*)((uintptr_t)this + 0x4f0);
}
float& _Script_Engine::WorldSettings::get_GlobalGravityZ() {
    return *(float*)((uintptr_t)this + 0x394);
}
void* _Script_Engine::WorldSettings::get_DefaultPhysicsVolumeClass() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Script_Engine::WorldSettings::get_LightmassSettings() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Script_Engine::WorldSettings::get_PhysicsCollisionHandlerClass() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Script_Engine::WorldSettings::get_DefaultGameMode() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::WorldSettings::get_GameNetworkManagerClass() {
    return (void*)((uintptr_t)this + 0x3b0);
}
int32_t& _Script_Engine::WorldSettings::get_PackedLightAndShadowMapTextureSize() {
    return *(int32_t*)((uintptr_t)this + 0x3b8);
}
void _Script_Engine::WorldSettings::set_bMinimizeBSPSections(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x3bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::WorldSettings::get_bMinimizeBSPSections() {
    return (*(uint8_t*)((uintptr_t)this + 0x3bc + 0)) & 1 != 0;
}
void* _Script_Engine::WorldSettings::get_DefaultColorScale() {
    return (void*)((uintptr_t)this + 0x3c0);
}
float& _Script_Engine::WorldSettings::get_DefaultMaxDistanceFieldOcclusionDistance() {
    return *(float*)((uintptr_t)this + 0x3cc);
}
bool _Script_Engine::WorldSettings::get_bHighPriorityLoading() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 1 != 0;
}
float& _Script_Engine::WorldSettings::get_GlobalDistanceFieldViewDistance() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
float& _Script_Engine::WorldSettings::get_DynamicIndirectShadowsSelfShadowingIntensity() {
    return *(float*)((uintptr_t)this + 0x3d4);
}
bool _Script_Engine::WorldSettings::get_bPrecomputeVisibility() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bPrecomputeVisibility(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::BookMark*& _Script_Engine::WorldSettings::get_BookMarks() {
    return *(_Script_Engine::BookMark**)((uintptr_t)this + 0x4a0);
}
bool _Script_Engine::WorldSettings::get_bPlaceCellsOnlyAlongCameraTracks() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 2 != 0;
}
int32_t& _Script_Engine::WorldSettings::get_VisibilityCellSize() {
    return *(int32_t*)((uintptr_t)this + 0x3dc);
}
void* _Script_Engine::WorldSettings::get_BroadphaseSettings() {
    return (void*)((uintptr_t)this + 0x534);
}
void* _Script_Engine::WorldSettings::get_VisibilityAggressiveness() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Script_Engine::WorldSettings::get_bForceNoPrecomputedLighting() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e4 + 0)) & 1 != 0;
}
void _Script_Engine::WorldSettings::set_bForceNoPrecomputedLighting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::WorldSettings::get_DefaultReverbSettings() {
    return (void*)((uintptr_t)this + 0x440);
}
_Script_Engine::PlayerState*& _Script_Engine::WorldSettings::get_Pauser() {
    return *(_Script_Engine::PlayerState**)((uintptr_t)this + 0x510);
}
void* _Script_Engine::WorldSettings::get_DefaultAmbientZoneSettings() {
    return (void*)((uintptr_t)this + 0x460);
}
_Script_Engine::SoundMix*& _Script_Engine::WorldSettings::get_DefaultBaseSoundMix() {
    return *(_Script_Engine::SoundMix**)((uintptr_t)this + 0x488);
}
void* _Script_Engine::WorldSettings::get_WorldMapName() {
    return (void*)((uintptr_t)this + 0x490);
}
float& _Script_Engine::WorldSettings::get_MonoCullingDistance() {
    return *(float*)((uintptr_t)this + 0x49c);
}
float& _Script_Engine::WorldSettings::get_MatineeTimeDilation() {
    return *(float*)((uintptr_t)this + 0x4f4);
}
float& _Script_Engine::WorldSettings::get_DemoPlayTimeDilation() {
    return *(float*)((uintptr_t)this + 0x4f8);
}
float& _Script_Engine::WorldSettings::get_DevTimeDilation() {
    return *(float*)((uintptr_t)this + 0x4fc);
}
float& _Script_Engine::WorldSettings::get_MinUndilatedFrameTime() {
    return *(float*)((uintptr_t)this + 0x508);
}
float& _Script_Engine::WorldSettings::get_MaxUndilatedFrameTime() {
    return *(float*)((uintptr_t)this + 0x50c);
}
void _Script_Engine::WorldSettings::set_bHighPriorityLoading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::WorldSettings::get_bHighPriorityLoadingLocal() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 2 != 0;
}
bool _Script_Engine::WorldSettings::get_bOverrideDefaultBroadphaseSettings() {
    return (*(uint8_t*)((uintptr_t)this + 0x530 + 0)) & 1 != 0;
}
bool _Script_Engine::WorldSettings::get_bIsSuspended() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 4 != 0;
}
void _Script_Engine::WorldSettings::set_bIsSuspended(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::WorldSettings::set_bPausedFromSuspension(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::WorldSettings::get_ReplicationViewers() {
    return (void*)((uintptr_t)this + 0x520);
}
void _Script_Engine::WorldSettings::set_bOverrideDefaultBroadphaseSettings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x530 + 0);
    *(uint8_t*)((uintptr_t)this + 0x530 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::WorldSettings::get_DefaultBookmarkClass() {
    return (void*)((uintptr_t)this + 0x570);
}
void* _Script_Engine::WorldSettings::get_BookmarkArray() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Script_Engine::WorldSettings::get_LastBookmarkClass() {
    return (void*)((uintptr_t)this + 0x588);
}
_Script_CoreUObject::Class* _Script_Engine::WorldSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.WorldSettings");
    return result;
}
void _Script_Engine::WorldSettings::OnRep_WorldGravityZ() {
    return;
}
