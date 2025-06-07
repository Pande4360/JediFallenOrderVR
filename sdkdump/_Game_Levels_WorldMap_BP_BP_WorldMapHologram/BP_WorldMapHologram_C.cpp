#include "..\FUObjectArray.hpp"
#include "BP_WorldMapHologram_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Audio\WMC_Audio_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic\WMC_Cinematic_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation\WMC_DeathLocation_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways\WMC_DoorsGateways_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan\WMC_DroidScan_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero\WMC_Hero_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone\WMC_HologramCone_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading\WMC_Loading_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation\WMC_MissionEventAnimation_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective\WMC_MissionObjective_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis\WMC_OnMantis_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings\WMC_RuntimeSettings_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection\WMC_Selection_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes\WMC_StaticMeshes_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial\WMC_Tutorial_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UI\WMC_UI_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble\WMC_UITechGreeble_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTutorial\Struct_WorldMapTutorial.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\PointLightComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshActor.hpp"
#include "..\_Script_SwGame\SwWorldMapHologramBase.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_ShowPlanetUI(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_StaticMeshes() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C**)((uintptr_t)this + 0xf90);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_PlanetLoaded() {
    return (void*)((uintptr_t)this + 0x14a0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_CurrentLevel() {
    return (void*)((uintptr_t)this + 0x1108);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0xf70);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_UITechGreeble() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C**)((uintptr_t)this + 0xf80);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings::WMC_RuntimeSettings_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_RuntimeSettings() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings::WMC_RuntimeSettings_C**)((uintptr_t)this + 0xf78);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_HologramCone() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1028);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_Tutorial() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C**)((uintptr_t)this + 0xf88);
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_HolotableConeRoot() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x1010);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_DroidScan() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C**)((uintptr_t)this + 0xf98);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_SetHologramScale() {
    return (void*)((uintptr_t)this + 0x10a8);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_Hero() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C**)((uintptr_t)this + 0xfa0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_IsReadyToChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x13e0 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_DoorsGateways() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C**)((uintptr_t)this + 0xfa8);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetMissionObjectiveLocationAndVisibility() {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TransformMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x1179 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_Selection() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C**)((uintptr_t)this + 0xfb0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TickPostProcess() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_IsReadyToChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetGhostGateState(int32_t State) {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bInitializeMapOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x1788 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UI::WMC_UI_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_UI() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UI::WMC_UI_C**)((uintptr_t)this + 0xfb8);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bIsOpening(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150d + 0);
    *(uint8_t*)((uintptr_t)this + 0x150d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_MissionObjective() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C**)((uintptr_t)this + 0xfc0);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_Loading() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C**)((uintptr_t)this + 0xfc8);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_OnMantis() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C**)((uintptr_t)this + 0xfd0);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_DeathLocation() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C**)((uintptr_t)this + 0xfd8);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_WallRunTurnedGreen__DelegateSignature() {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_ChangeMapToGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x13c8 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_MapExitedCombatMode__DelegateSignature() {
    return;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_HologramCone() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C**)((uintptr_t)this + 0xfe0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_SecretMapSectionExplored__DelegateSignature(_Script_RsGameTechRT::RsMapSectionTag Secret_Map_Section) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bExitMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToMesh() {
    return (void*)((uintptr_t)this + 0x12c0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveSecretMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_Cinematic() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C**)((uintptr_t)this + 0xfe8);
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Audio::WMC_Audio_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_Audio() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Audio::WMC_Audio_C**)((uintptr_t)this + 0xff0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateTutorialStepsMessage() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_RegionArr() {
    return (void*)((uintptr_t)this + 0x1050);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_HologramCone_Cine() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0xff8);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_WorldMapHologram.BP_WorldMapHologram_C");
    return result;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WMC_MissionEventAnimation() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C**)((uintptr_t)this + 0x1000);
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_SM_WorldMapHologram_MantisCones() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x1008);
}
_Script_Engine::ParticleSystemComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_Main_HolotableCone() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1018);
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_SM_WorldMapHologram_WorldMask() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x1020);
}
_Script_Engine::StaticMeshComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_HologramConeNull() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x1030);
}
_Script_Engine::PointLightComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WorldMapLight() {
    return *(_Script_Engine::PointLightComponent**)((uintptr_t)this + 0x1038);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_planetChosen__DelegateSignature(void* Planet) {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bDuringWorldMapOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x14d3 + 0)) & 1 != 0;
}
_Script_UMG::WidgetComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_worldGrid() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x1040);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_OnMapClose__DelegateSignature() {
    return;
}
_Script_UMG::WidgetComponent*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_regionGrid() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x1048);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BlurScale() {
    return *(float*)((uintptr_t)this + 0x10a0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_IsGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x10a4 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_IsGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_InteriorLevelHoverOff() {
    return (void*)((uintptr_t)this + 0x14c0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_LevelArr() {
    return (void*)((uintptr_t)this + 0x10b8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_ObjectiveActorToStatus() {
    return (void*)((uintptr_t)this + 0x1360);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_OnRegionChange__DelegateSignature() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BOG() {
    return (void*)((uintptr_t)this + 0x1118);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_UpdateMapSectionAndRegion() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_ChangeMapToGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x13c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x13c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_ZEF() {
    return (void*)((uintptr_t)this + 0x1128);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::RemoveDeathLocationWhenInMapSection() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToMissionUI() {
    return (void*)((uintptr_t)this + 0x1270);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_Kas() {
    return (void*)((uintptr_t)this + 0x1138);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_InteriorLevelUp__DelegateSignature() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_dat() {
    return (void*)((uintptr_t)this + 0x1148);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BOG_Intensity() {
    return *(float*)((uintptr_t)this + 0x1158);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::OnRevengeDealt() {
    return;
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_ZEF_Intensity() {
    return *(float*)((uintptr_t)this + 0x115c);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_OnMapOpen__DelegateSignature() {
    return;
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_KAS_Intensity() {
    return *(float*)((uintptr_t)this + 0x1160);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_DAT_Intensity() {
    return *(float*)((uintptr_t)this + 0x1164);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_InteriorLevels() {
    return (void*)((uintptr_t)this + 0x1168);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BeginPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x1178 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_BeginPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1178 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1178 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_TransformMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1179 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1179 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateLastChanceFortress() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToUI() {
    return (void*)((uintptr_t)this + 0x1180);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToMat() {
    return (void*)((uintptr_t)this + 0x11d0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToDynamicMat() {
    return (void*)((uintptr_t)this + 0x1220);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_InteriorLevelHoverOff__DelegateSignature() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToMissionBool() {
    return (void*)((uintptr_t)this + 0x1310);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_ShowPlanetUI() {
    return (*(uint8_t*)((uintptr_t)this + 0x13b0 + 0)) & 1 != 0;
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_LightIntensity() {
    return *(float*)((uintptr_t)this + 0x13b4);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_planetChosen() {
    return (void*)((uintptr_t)this + 0x13b8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_MapSectionExplored() {
    return (void*)((uintptr_t)this + 0x1768);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_SetMapOnMantis() {
    return (void*)((uintptr_t)this + 0x13d0);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_InitialTutorialMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x1698);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_NotOnMantis() {
    return (void*)((uintptr_t)this + 0x13e8);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TutorialStepsMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x16a0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WorldMap_Follow() {
    return (void*)((uintptr_t)this + 0x13f8);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bPauseBlur(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1821 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1821 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WorldMap_Mantis() {
    return (void*)((uintptr_t)this + 0x1400);
}
int32_t& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_GhostGateState() {
    return *(int32_t*)((uintptr_t)this + 0x1848);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BlurType() {
    return (void*)((uintptr_t)this + 0x1408);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_Exposure() {
    return *(float*)((uintptr_t)this + 0x140c);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BackgroundDarkness() {
    return *(float*)((uintptr_t)this + 0x1410);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_OverallEmissiveIntensity() {
    return *(float*)((uintptr_t)this + 0x1414);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_Bloom() {
    return *(float*)((uintptr_t)this + 0x1418);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BTN_LocalView() {
    return (void*)((uintptr_t)this + 0x1800);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_OnMapOpen() {
    return (void*)((uintptr_t)this + 0x1420);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_IsRefineryHuddle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150c + 0);
    *(uint8_t*)((uintptr_t)this + 0x150c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BoganoName() {
    return (void*)((uintptr_t)this + 0x1430);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_ZeffoName() {
    return (void*)((uintptr_t)this + 0x1438);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::NAR_VO_AfterWallRunAcquire__DelegateSignature() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_KashyyykName() {
    return (void*)((uintptr_t)this + 0x1440);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_MissionObjectiveAutoPlayFinish__DelegateSignature() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_DathomirName() {
    return (void*)((uintptr_t)this + 0x1448);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CheckIfSelectedMSTIsCurrentFunction(bool& SelectedIsValid) {
    return;
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_AlreadySelectedMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x17b0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_IlumName() {
    return (void*)((uintptr_t)this + 0x1450);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_FightClubName() {
    return (void*)((uintptr_t)this + 0x1458);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_FortressName() {
    return (void*)((uintptr_t)this + 0x1460);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetChosen() {
    return (*(uint8_t*)((uintptr_t)this + 0x1468 + 0)) & 1 != 0;
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_GameIsNotFullyInstalledMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x1860);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_PlanetChosen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1468 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1468 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_OnHolotableOpen() {
    return (void*)((uintptr_t)this + 0x1470);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bTimeButtonOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x1480 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bTimeButtonOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CollapsePlanetMissionObjectiveUI() {
    return;
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TimeUIButtonPressed() {
    return *(float*)((uintptr_t)this + 0x1484);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bWhileButtonPressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x1488 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bWhileButtonPressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Post_Delay_Event(void* Camera_Mode) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetLocationOfMap_PlanetHop(bool ResetTransform_, _Script_CoreUObject::Vector NewLocation) {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bCheckBButton() {
    return (*(uint8_t*)((uintptr_t)this + 0x1489 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_InteriorLevelUp() {
    return (void*)((uintptr_t)this + 0x16e0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bCheckBButton(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_PlanetLoading() {
    return (void*)((uintptr_t)this + 0x1490);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::AttributeTags(bool Add_) {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_InteriorLevelHoverOn() {
    return (void*)((uintptr_t)this + 0x14b0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::OnMapOpenThroughTick() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_CurrentInteirorLevel() {
    return (void*)((uintptr_t)this + 0x14d0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ToggleArrowVisibility() {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bIsFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x14d1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bInDistortionSection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1720 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1720 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bIsFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bIsCancel() {
    return (*(uint8_t*)((uintptr_t)this + 0x14d2 + 0)) & 1 != 0;
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_LastChanceFortressMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x1740);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bIsCancel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14d2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CheckReadyToChange() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bDuringWorldMapOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14d3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14d3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bOnMantisWorldMapOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x14d4 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_MissionObjectiveAutoPlayFinish() {
    return (void*)((uintptr_t)this + 0x17d0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bOnMantisWorldMapOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MainMeshActors() {
    return (void*)((uintptr_t)this + 0x14d8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_AllWorldMapTags() {
    return (void*)((uintptr_t)this + 0x14e8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BTN_GalaxyView() {
    return (void*)((uintptr_t)this + 0x1810);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WalkingOnMantis() {
    return (*(uint8_t*)((uintptr_t)this + 0x1508 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_NAR_VO_CloseMap() {
    return (void*)((uintptr_t)this + 0x1628);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_WalkingOnMantis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1508 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1508 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ResetBlinkingStatus() {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_WalkingOffMantis() {
    return (*(uint8_t*)((uintptr_t)this + 0x1509 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_WalkingOffMantis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1509 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1509 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bCameraAnimationFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x150a + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bCameraAnimationFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150a + 0);
    *(uint8_t*)((uintptr_t)this + 0x150a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bConeCine_() {
    return (*(uint8_t*)((uintptr_t)this + 0x150b + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bConeCine_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x150b + 0);
    *(uint8_t*)((uintptr_t)this + 0x150b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_IsRefineryHuddle() {
    return (*(uint8_t*)((uintptr_t)this + 0x150c + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetupCameraEvents() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveInteriorLevelChanged0(void* NewInteriorLevel) {
    return;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bIsOpening() {
    return (*(uint8_t*)((uintptr_t)this + 0x150d + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToParticle() {
    return (void*)((uintptr_t)this + 0x1510);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_PlanetToParticleColor() {
    return (void*)((uintptr_t)this + 0x1560);
}
float& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_BlurMovement() {
    return *(float*)((uintptr_t)this + 0x15b0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bExitMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x15b4 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_IsMovingPlanet() {
    return (*(uint8_t*)((uintptr_t)this + 0x15b5 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_IsMovingPlanet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x15b5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x15b5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_MapEnteredCombatMode() {
    return (void*)((uintptr_t)this + 0x15b8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_MapExitedCombatMode() {
    return (void*)((uintptr_t)this + 0x15c8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_WallRunTurnedGreen() {
    return (void*)((uintptr_t)this + 0x15d8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_NextStepCompleted() {
    return (void*)((uintptr_t)this + 0x15e8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_NAR_VO_LandingPad() {
    return (void*)((uintptr_t)this + 0x15f8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_NAR_VO_SavePoint() {
    return (void*)((uintptr_t)this + 0x1608);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_NAR_VO_MysteriousStructure() {
    return (void*)((uintptr_t)this + 0x1618);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_NAR_VO_AfterWallRunAcquire() {
    return (void*)((uintptr_t)this + 0x1638);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bTutorialInitiated() {
    return (*(uint8_t*)((uintptr_t)this + 0x1648 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_MapSectionExplored__DelegateSignature(_Script_RsGameTechRT::RsMapSectionTag Map_Section) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bTutorialInitiated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1648 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1648 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_LandingPadHovered() {
    return (void*)((uintptr_t)this + 0x1650);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_SavePointHovered() {
    return (void*)((uintptr_t)this + 0x1660);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_ZoomedOut() {
    return (void*)((uintptr_t)this + 0x1670);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_CloseTutorialMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x1680);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_ZoomedIn() {
    return (void*)((uintptr_t)this + 0x1688);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MysteriousStructureMessage() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x16a8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_TutorialStepsCompleted() {
    return (void*)((uintptr_t)this + 0x16b0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_StructureHovered() {
    return (void*)((uintptr_t)this + 0x16c0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_InteriorLevelDown() {
    return (void*)((uintptr_t)this + 0x16d0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_InteriorLevelFinished() {
    return (void*)((uintptr_t)this + 0x16f0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_MovementStepsCompleted() {
    return (void*)((uintptr_t)this + 0x1700);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_InteriorLevelFinished__DelegateSignature() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_OnMapClose() {
    return (void*)((uintptr_t)this + 0x1710);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bInDistortionSection() {
    return (*(uint8_t*)((uintptr_t)this + 0x1720 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_DistortionMapSections() {
    return (void*)((uintptr_t)this + 0x1728);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_HUDRoot_Ref() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x1738);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_RevengeDealt() {
    return (void*)((uintptr_t)this + 0x1748);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_SecretMapSectionExplored() {
    return (void*)((uintptr_t)this + 0x1758);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_TUT_StartWallRunAnim() {
    return (void*)((uintptr_t)this + 0x1778);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bInitializeMapOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1788 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1788 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_UI_OnInitializeMap() {
    return (void*)((uintptr_t)this + 0x1790);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_OnRegionChange() {
    return (void*)((uintptr_t)this + 0x17a0);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MapSectionSelected() {
    return (void*)((uintptr_t)this + 0x17b8);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_VaultMST() {
    return (void*)((uintptr_t)this + 0x17e0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bMantisCameraAnimationFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x17f8 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_bMantisCameraAnimationFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x17f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x17f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_HasLeftToGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x1820 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::set_HasLeftToGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1820 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1820 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_bPauseBlur() {
    return (*(uint8_t*)((uintptr_t)this + 0x1821 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_NAR_VO_FortressLastWarning() {
    return (void*)((uintptr_t)this + 0x1828);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_OnHolotableOpen__DelegateSignature(void* Region) {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_GhostGateState() {
    return (void*)((uintptr_t)this + 0x1838);
}
void* _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::get_MAP_LevelChanged() {
    return (void*)((uintptr_t)this + 0x1850);
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetArrowVisibility(bool Hidden_) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetGalaxyBrightness() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ToggleOnMantisTicks() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetShipParameters() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetLocationForAreaGlowParticlesOnGalaxy() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MoveMapToLocation(_Script_CoreUObject::Vector& NewLocaftion) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetLocationOfMap(bool ResetTransform_, _Script_CoreUObject::Vector NewLocation) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UpdateLightPositionAndAttenuation() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetUIInteriorLevel(void* InteriorLevel, int32_t TotalLevels) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_SavePointHovered__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UndoConstructionScript() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::PlanetUIVisibility(bool Visible_, bool Kill_) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetLocationForAllPlanetUI() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateUIDynamicPlanetMaterials() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateUIForEachPlanet(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Type) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ClearAllArrays() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CheckIfInteriorIsShowable(void* InteriorLevel, bool& ShowSelection, bool& DimSelection) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ShowSwitchElevationLevels() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CheckIfNotCurrentInteriorLevel(bool& ShowSection) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CheckCurrent3DMapLevel() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateCloseTutorialMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetInteriorLevelBrightness(void* InteriorLevel, float BrightnessMultiplier, bool ChangeLayer_, bool OverlayColor_) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::GetAllInteriorLevels() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetBrightnessDependentOnInteriorLevel(void* CurrentInteriorLevel) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::SetLightParameters() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::RampPost_Process(bool Condition, float Ramp) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UserConstructionScript() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::InpActEvt_UI_Cancel_K2Node_InputActionEvent_2(_Script_InputCore::Key Key) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::InpActEvt_UI_Accept_K2Node_InputActionEvent_1(_Script_InputCore::Key Key) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::InpActEvt_UI_Accept_K2Node_InputActionEvent_0(_Script_InputCore::Key Key) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CheckBButton() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_SetMapOnMantis__DelegateSignature(_Script_CoreUObject::Vector MantisLoc, bool BeginPlay_) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::InpAxisEvt_MoveLeftAnalogX_K2Node_InputAxisEvent_0(float AxisValue) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::InpAxisEvt_MoveLeftAnalogY_K2Node_InputAxisEvent_1(float AxisValue) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveWorldMapOpened0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveWorldMapClosed0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveMapSectionSelectionChanged0(_Script_RsGameTechRT::RsMapSectionTag& NewMapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateUIWidgets() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::WorldMapOnBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveWorldMapLevelChanged0(void*& WorldMapName) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Create_PlanetUIWidgets() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::NAR_VO_LandingPad__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Cine_OnStart() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Cine_SetCinematicAndHologramLocation(_Script_CoreUObject::Vector Cine_Hologram_Location, void* Cinematic) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Cine_SetNewFocusLocation() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Cine_OnEnd() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveInteriorLevelHoverBegin0(void* InteriorLevel) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_MovementStepsCompleted__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveInteriorLevelHoverEnd0(void* InteriorLevel) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ExitToGalaxyView() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::EnterLocalView() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CollapseUI() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::Audio_OpenMapOnHolotableInteract() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::GetInteriorLevels() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveRegionSelectionChanged0(void*& RegionName) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateInitialTutorialMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_OnInitializeMap__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateMysteriousStructureMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::OnTickRuntimeSettings(bool OnRegionSelect) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveRuntimeSettingsChanged0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ReceiveMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateAlreadySelected() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::OnGameStateChange(void* NewState, void* PrevState) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::RampBlur() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::CreateGameIsNotFullyInstalledMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::ExecuteUbergraph_BP_WorldMapHologram(int32_t EntryPoint) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_LevelChanged__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_GhostGateState__DelegateSignature(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::NAR_VO_FortressLastWarning__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::BTN_GalaxyView__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::BTN_LocalView__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_StartWallRunAnim__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_RevengeDealt__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_InteriorLevelDown__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_StructureHovered__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_TutorialStepsCompleted__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_ZoomedIn__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_ZoomedOut__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_LandingPadHovered__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::NAR_VO_CloseMap__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::NAR_VO_MysteriousStructure__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::NAR_VO_SavePoint__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::TUT_NextStepCompleted__DelegateSignature(_Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTutorial::Struct_WorldMapTutorial StepCompleted) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_MapEnteredCombatMode__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_InteriorLevelHoverOn__DelegateSignature(void* TargetInteriorLevel, void* CurrentInteriorLevel) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_PlanetLoaded__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::UI_PlanetLoading__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_NotOnMantis__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C::MAP_SetHologramScale__DelegateSignature() {
    return;
}
