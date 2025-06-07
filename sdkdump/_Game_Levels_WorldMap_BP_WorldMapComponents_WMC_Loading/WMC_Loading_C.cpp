#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_Loading_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsBitfield_HeroLoadoutFlags.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_BOG_Name() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_WorldPlanetsToPlanet() {
    return (void*)((uintptr_t)this + 0x278);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::CheckIfGalaxy() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::Transform_Immediate_Planet() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_bInterpToPlanet() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c9 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::TransformInterpTick_Player() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PlanetInterpValue() {
    return *(float*)((uintptr_t)this + 0x3cc);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_WorldNames() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PlanetToNameDict() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PlanetsUnlockedArr() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PlayerPlanet() {
    return (void*)((uintptr_t)this + 0x270);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_ToCenter_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_MapAreaArr() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_GalaxyArr() {
    return (void*)((uintptr_t)this + 0x318);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_ToCenter_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_CurrentPlanetEnum() {
    return (void*)((uintptr_t)this + 0x368);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetPlanetUnlockedInGalaxy() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_ChangeMapToGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x369 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_ChangeMapToGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x369 + 0);
    *(uint8_t*)((uintptr_t)this + 0x369 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetLocationToNur() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_KAS_Name() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_ZEF_Name() {
    return (void*)((uintptr_t)this + 0x378);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::GalaxyMapPrep() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::ReceiveBeginPlay0() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_DAT_Name() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_UFC_Name() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::LoadNewPlanet(_Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags OldFlags, _Script_RsGameTechRT::RsBitfield_HeroLoadoutFlags NewFlags) {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_FORT_Name() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::TurnOffShipOnOtherPlanets() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_ILUM_Name() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_GXY_Name() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_GalaxySetLocationEnum() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetLocationToSelectionPlayer_Interp() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PreviouslySelectedPlanetEnum() {
    return (void*)((uintptr_t)this + 0x3b1);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_MovementLerpFloat() {
    return *(float*)((uintptr_t)this + 0x3b4);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_WorldMap_PlanetEnum() {
    return (void*)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_bFightClubCine() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetPlanetForTravel() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_bFightClubCine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_bInterpToPlanet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_bInterpToPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_bInterpToPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PlayerInterpValue() {
    return *(float*)((uintptr_t)this + 0x3d4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_PlanetInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_StartLerpTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_StartLerpTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::get_bImmediate_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::set_bImmediate_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_Loading.WMC_Loading_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::TransformInterpTick_Planet() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetLocationToSelection_Timeline(bool OnStart, _Script_CoreUObject::Vector Beginning, bool& Interp) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetLocationToSelectionPlanet_Interp(bool ToCenter_, bool Immediate_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::TurnOffArrowOnOtherPlanets() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetLocationToSelection(bool ToGalaxy_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::GetCurrentLevel() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::CheckIfInHyperspace() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetGalaxyPlanetRegionsExplored() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetToLocalMap(bool OnOpen_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetToGalaxyMap(bool BeginPlay_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::InitializeLocalMap() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::InitializeGalaxyMap() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::SetPlanetEnum() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::OnLevelChanged() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::DelayTransformInterp() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C::ExecuteUbergraph_WMC_Loading(int32_t EntryPoint) {
    return;
}
