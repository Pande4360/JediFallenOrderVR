#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid\BP_BuddyDroid_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerController\BP_SwPlayerController_C.hpp"
#include "HC_WorldMap_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_SwGame\SwWorldMapHologramSettings.hpp"
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::CollectableAcquired(void* CollectableType, void*& WorldName, void*& RegionName) {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_Hero_Ref() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_ShowMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C*& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_Droid_Ref() {
    return *(_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C**)((uintptr_t)this + 0x190);
}
_Script_SwGame::SwWorldMapHologramSettings*& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_HolomapSettings() {
    return *(_Script_SwGame::SwWorldMapHologramSettings**)((uintptr_t)this + 0x1b0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x198);
}
_Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C*& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_R4PlayerController() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerController::BP_SwPlayerController_C**)((uintptr_t)this + 0x1a0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::set_ShowMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_TutorialInitiated() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::set_TutorialInitiated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_TutorialFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::set_TutorialFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_CurrentCollectables() {
    return *(int32_t*)((uintptr_t)this + 0x1bc);
}
int32_t& _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_TotalCollectables() {
    return *(int32_t*)((uintptr_t)this + 0x1c0);
}
void* _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_CurrentPlanet() {
    return (void*)((uintptr_t)this + 0x1c4);
}
bool _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_BD_1BusyDebounce() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c5 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::set_BD_1BusyDebounce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::InitializeComponent() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::get_bMantisTriggerEntered() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c6 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::set_bMantisTriggerEntered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/General/HC_WorldMap.HC_WorldMap_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::CountTotalCollectables(void* WorldName, int32_t& current, int32_t& Total) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::OnCameraModeCompleted_WorldMapFollow() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::ToggleWorldMap() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::TurnOffMap() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::CameraModeCompleted_WorldMapFollow(void* CameraModeName) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::Map_Section_Explored(_Script_RsGameTechRT::RsMapSectionTag Map_Section) {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::BD_1IsBusyCheck() {
    return;
}
void _Game_Characters_Hero_Logic_Components_General_HC_WorldMap::HC_WorldMap_C::ExecuteUbergraph_HC_WorldMap(int32_t EntryPoint) {
    return;
}
