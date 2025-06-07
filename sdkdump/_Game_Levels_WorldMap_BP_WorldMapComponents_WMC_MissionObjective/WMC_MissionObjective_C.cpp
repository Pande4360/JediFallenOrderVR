#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_MissionObjective_C.hpp"
#include "..\_Game_UI_Holomap_UI_LocalMissionObjective\UI_LocalMissionObjective_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshActor.hpp"
#include "..\_Script_UMG\Widget.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_BoganoShipLocation() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_MissionObjectiveMSVs() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::MissionObjectiveWorldMapClose() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_PlanetMissionObjectiveMSVs() {
    return (void*)((uintptr_t)this + 0x188);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_OriginTreeMapSection() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bIsPOIMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_ActiveMissionObjectiveWidgets() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bShipMissionObjective(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bIsPOIMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_KashyyykShipLocation() {
    return (void*)((uintptr_t)this + 0x3fc);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_ObjectiveActorToPlanet() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bAutoPlayOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x300 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_ActiveMissionObjectiveLocations() {
    return (void*)((uintptr_t)this + 0x248);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetUIMisisonObjectiveVisible_DEPRECATED() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bIsRefineryHuddle() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bIsRefineryHuddle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_EndPOILocation() {
    return (void*)((uintptr_t)this + 0x29c);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_FMovementInterp() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_CurrentMissionObjectiveTags() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_MissionObjective.WMC_MissionObjective_C");
    return result;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bIsCineMission() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_ObjectiveActorToPlanetName() {
    return (void*)((uintptr_t)this + 0x308);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bIsCineMission(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_MapCineScale() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_vBeginLocation() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bRegionToWorldMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x361 + 0);
    *(uint8_t*)((uintptr_t)this + 0x361 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_vEndLocation() {
    return (void*)((uintptr_t)this + 0x2d4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_fDelayToMove() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetMissionObjectiveScale() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_fMovementInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bPreInterpMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_ScaleCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x2f0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bPreInterpMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::MissionObjectiveEnd() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bIsTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bIsTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bActivateAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bActivateAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bHasAutoPlayed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f8 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bHasAutoPlayed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_ZeffoShipLocation() {
    return (void*)((uintptr_t)this + 0x3d8);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bWentToMission() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f9 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bWentToMission(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bToShip() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fa + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bToShip(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fa + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fa + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_isOnOtherPlant() {
    return *(int32_t*)((uintptr_t)this + 0x2fc);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::set_bAutoPlayOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x300 + 0);
    *(uint8_t*)((uintptr_t)this + 0x300 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_fRotationMax() {
    return *(float*)((uintptr_t)this + 0x358);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_fReturnRotation() {
    return *(float*)((uintptr_t)this + 0x35c);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::CheckIfObjectiveIsGalaxy(void*& MissionObjective, void*& CurrentPlanet) {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bShipMissionObjective() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_bRegionToWorldMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x361 + 0)) & 1 != 0;
}
int32_t& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_GatewayDoorMapSectionCheck() {
    return *(int32_t*)((uintptr_t)this + 0x380);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_PlanetToShipLocation() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_IlumShipLocation() {
    return (void*)((uintptr_t)this + 0x3e4);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::get_DathomirShipLocation() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetMissionObjectiveTerrainMainMeshes(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Mesh, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetLocationForMissionObjective() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::CollapseMissionObjectiveUI(bool RemoveFromParent_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetMissionObjectiveMeshes(bool AutoPlayChanged) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::RunMissionObjective() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::StartCineInterp() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::DeleteAllMissionObjectiveUI() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::CreateMissionObjectiveWidget(void* MissionObjectiveName, _Script_CoreUObject::Vector Location, bool IsShip, _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C*& MissionObjectiveWidget) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::LoadLocalMisisonObjectiveUI(void* MissionObjective, void* ObjectiveName, void*& MapSectionTags, _Script_CoreUObject::Vector MissionObjectiveLocation) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::CheckActiveMissions() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetColorOfPlanetMissionObjective() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetHologramScale_Event() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::MissionObjectiveStart() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetUIMissionObjectiveVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::SetSingleMissionObjectiveVisible(_Script_UMG::Widget* Widget) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C::ExecuteUbergraph_WMC_MissionObjective(int32_t EntryPoint) {
    return;
}
