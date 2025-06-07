#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_DeathLocation_C.hpp"
#include "..\_Game_UI_Holomap_UI_DeathLocation\UI_DeathLocation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapGatewayActor.hpp"
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::UpdateDeathLocationOnDeath() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Game_UI_Holomap_UI_DeathLocation::UI_DeathLocation_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_DeathUI() {
    return *(_Game_UI_Holomap_UI_DeathLocation::UI_DeathLocation_C**)((uintptr_t)this + 0x180);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
_Script_RsGameTechRT::RsWorldMapGatewayActor*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_DeathLocationPOI() {
    return *(_Script_RsGameTechRT::RsWorldMapGatewayActor**)((uintptr_t)this + 0x1a0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_DeathVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::set_DeathVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_DeathLocation() {
    return (void*)((uintptr_t)this + 0x18c);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_DeathPlanet() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_RsGameTechRT::RsWorldMapGatewayActor*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_NewVar_0() {
    return *(_Script_RsGameTechRT::RsWorldMapGatewayActor**)((uintptr_t)this + 0x1a8);
}
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::get_PlayerState_Ref() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x1b0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_DeathLocation.WMC_DeathLocation_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::RemoveDeathLocationOnClose() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::RemoveDeathLocationFromParent() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::SetDeathLocation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::DeathPOIVisibility() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::UpdateDeathLocation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::CreateDeathLocation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C::ExecuteUbergraph_WMC_DeathLocation(int32_t EntryPoint) {
    return;
}
