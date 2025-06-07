#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_DoorsGateways_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings\WMC_RuntimeSettings_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\MeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapGatewayActor.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayActor.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshActor.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_GatewayFinished_OneWayArr() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_NeighboringSections() {
    return (void*)((uintptr_t)this + 0x188);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bDroidOvercharge() {
    return (*(uint8_t*)((uintptr_t)this + 0x388 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bForceTelekinesis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x387 + 0);
    *(uint8_t*)((uintptr_t)this + 0x387 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsWorldMapGatewayActor*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_GatewayActor() {
    return *(_Script_RsGameTechRT::RsWorldMapGatewayActor**)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_GatewayToUnlockedStatus() {
    return (void*)((uintptr_t)this + 0x390);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bClimbingClaws() {
    return (*(uint8_t*)((uintptr_t)this + 0x381 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_ForcePushArr() {
    return (void*)((uintptr_t)this + 0x1c0);
}
int32_t& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_GatewayIntStatus() {
    return *(int32_t*)((uintptr_t)this + 0x198);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_GatewayDoorsArr() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Finished_ForcePushArr() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_ForcePullArr() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Finished_ForcePullArr() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_ForceTeleArr() {
    return (void*)((uintptr_t)this + 0x200);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::ExecuteUbergraph_WMC_DoorsGateways(int32_t EntryPoint) {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_DoorTypeToEnum() {
    return (void*)((uintptr_t)this + 0x3e0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bDiving() {
    return (*(uint8_t*)((uintptr_t)this + 0x383 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Finished_ForceTeleArr() {
    return (void*)((uintptr_t)this + 0x210);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_ForceSlowArr() {
    return (void*)((uintptr_t)this + 0x220);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x384 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Finished_ForceSlowArr() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bDoubleJump(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38b + 0);
    *(uint8_t*)((uintptr_t)this + 0x38b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_GrappleArr() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_DivingArr() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_BoganoDoNotShow() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_DroidOverchargeArr() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_ZeffoDoNotShow() {
    return (void*)((uintptr_t)this + 0x480);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bForcePush() {
    return (*(uint8_t*)((uintptr_t)this + 0x385 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Finished_DroidOverchargeArr() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_DroidZiplineArr() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_ClimbingClawArr() {
    return (void*)((uintptr_t)this + 0x290);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_POIArr() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_SavePointArr() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_DroidHackArr() {
    return (void*)((uintptr_t)this + 0x2c0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bClimbingClaws(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x381 + 0);
    *(uint8_t*)((uintptr_t)this + 0x381 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Finished_DroidHackArr() {
    return (void*)((uintptr_t)this + 0x2d0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x386 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_ShortcutArr() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_WallRun_DoorsArr() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_WallRun_Finished_DoorsArr() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_DoubleJump_DoorsArr() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_DoubleJump_Finished_DoorsArr() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_TerrainMesh_Arr() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Elevator() {
    return (void*)((uintptr_t)this + 0x340);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Elevator_Finished() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Shortcut_Finished() {
    return (void*)((uintptr_t)this + 0x360);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_Gateway_Tram() {
    return (void*)((uintptr_t)this + 0x370);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bWallRun() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bWallRun(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bGrapple() {
    return (*(uint8_t*)((uintptr_t)this + 0x382 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bGrapple(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x382 + 0);
    *(uint8_t*)((uintptr_t)this + 0x382 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bDiving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x383 + 0);
    *(uint8_t*)((uintptr_t)this + 0x383 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bDroidHack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38a + 0);
    *(uint8_t*)((uintptr_t)this + 0x38a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x384 + 0);
    *(uint8_t*)((uintptr_t)this + 0x384 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bForcePush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x385 + 0);
    *(uint8_t*)((uintptr_t)this + 0x385 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x386 + 0);
    *(uint8_t*)((uintptr_t)this + 0x386 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bForceTelekinesis() {
    return (*(uint8_t*)((uintptr_t)this + 0x387 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bDroidOvercharge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x388 + 0);
    *(uint8_t*)((uintptr_t)this + 0x388 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::set_bDroidZipline(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x389 + 0);
    *(uint8_t*)((uintptr_t)this + 0x389 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bDroidZipline() {
    return (*(uint8_t*)((uintptr_t)this + 0x389 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bDroidHack() {
    return (*(uint8_t*)((uintptr_t)this + 0x38a + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_bDoubleJump() {
    return (*(uint8_t*)((uintptr_t)this + 0x38b + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_DoorToUI() {
    return (void*)((uintptr_t)this + 0x430);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_KashyyykDoNotShow() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_NeighboringSectionsTags() {
    return (void*)((uintptr_t)this + 0x4c8);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings::WMC_RuntimeSettings_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_RuntimeSettings_Ref() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings::WMC_RuntimeSettings_C**)((uintptr_t)this + 0x4d8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_IlumDoNotShow() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_FortressDoNotShow() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_FightClubDoNotShow() {
    return (void*)((uintptr_t)this + 0x510);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_DathomirDoNotShow() {
    return (void*)((uintptr_t)this + 0x528);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::get_EnumToUnlockedStatus() {
    return (void*)((uintptr_t)this + 0x540);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_DoorsGateways.WMC_DoorsGateways_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetAbilityFogOfWarGateways(void*& SpecificDoorArray, bool DoorTypeUnlocked) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckDoNotShowPerSection(_Script_RsGameTechRT::RsMapSectionTag Section, bool& IsDoNotShow) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckDoNotShow(_Script_RsGameTechRT::RsMapSectionTag One, _Script_RsGameTechRT::RsMapSectionTag Two, bool& Continue_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetTram() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetTransitionActors(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, _Script_CoreUObject::LinearColor TraversedColor, bool AbilityCheck, bool Traversed_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckHiddenTraversal(_Script_RsGameTechRT::RsWorldMapGatewayActor* Gateway, bool& Traversal, bool& IsVisible) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetDoorsUnlockedToggleVisibility(void*& Array, bool UnlockableState) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetNonTraversedOneWayOvercharge(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, bool AbilityCheck) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetTraversedOneWayOvercharge(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* TraversedActor, _Script_CoreUObject::LinearColor TraversedColor, _Script_CoreUObject::LinearColor LockedColor, bool Check) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetGatewayDoors(void*& Array) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetNonTraversedWithChecks(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, bool Check) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetForceRopes(void*& Array, bool UnlockableState, bool IsOneWay_, bool Print_, bool Shortcut_, bool StayOnMap_, bool IsActivated) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetOneWayDoorUnlocked(void*& Array, bool UnlockableState, bool IsOneWay_, bool Print_, bool Shortcut_, bool StayOnMap_, bool IsActivated) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetNonTraversedOneWay(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* OneWayActor, _Script_CoreUObject::LinearColor UnlockedColor, _Script_CoreUObject::LinearColor Locked, bool TopCheck, bool BottomCheck) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetTraversedOneWay(_Script_RsGameTechRT::RsWorldMapStateTransitionGatewayActor* TraversedActor, _Script_CoreUObject::LinearColor TraversedColor, _Script_CoreUObject::LinearColor LockedColor, bool Check) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetVectorOnMaterials(_Script_Engine::MeshComponent* MeshComponent, _Script_CoreUObject::LinearColor Color) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::OneWayGateways() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckIfSavePointIsVisible(_Script_RsGameTechRT::RsWorldMapGatewayActor* SavePoint, bool& SavePointVisible_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::ClearAllDoorGatewayArrays() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetGatewayAndUnlockedStatus() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::ChangeDoorVisibility(bool Collapsed_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckForAdjacentSections(_Script_RsGameTechRT::RsWorldMapGatewayActor* Gateway) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckUnlockablePerDoorType(bool UnlockableOnMapOpen) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckIfDoorIsTemplate(_Script_RsGameTechRT::RsWorldMapGatewayActor* PossibleHiddenDoor) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckIfBothConnectionsAreExplored(_Script_RsGameTechRT::RsWorldMapGatewayActor* CurrentGateway, bool& BothConnected_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetLocationForDoorUI(_Script_RsGameTechRT::RsWorldMapGatewayActor* DoorActor, bool OnWorldMapOn) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CreateUIForEachType(_Script_RsGameTechRT::RsWorldMapGatewayActor* Type, bool CreateUICheckArea) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckArrayUnlockable(void*& Array, bool IsUnlocked, bool CheckDoorOnOpen, bool Gateways_, bool Shortcut_, bool Activated_, bool StayOnMap_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckandSetLoadouts() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetDoorsUnlocked(void*& Array, bool UnlockableState, bool IsOneWay_, bool Print_, bool Shortcut_, bool StayOnMap_, bool IsActivated) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::CheckAllArraysOfDoors() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::AssignMeshesToArrays(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Mesh) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::AssignGatewaysAndDoors(_Script_RsGameTechRT::RsWorldMapGatewayActor* CurrentGateway) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetMultiplierForAllDoors() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::OnTickDoorClassification() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::RunSecondaryTicks() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C::SetFogOfWarGateways() {
    return;
}
