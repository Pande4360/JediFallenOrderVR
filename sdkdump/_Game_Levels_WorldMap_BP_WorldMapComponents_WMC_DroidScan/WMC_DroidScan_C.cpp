#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_DroidScan_C.hpp"
#include "..\_Game_UI_Holomap_UI_CriticalPath\UI_CriticalPath_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::ReceiveBeginPlay0() {
    return;
}
_Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::get_UI_CriticalPath() {
    return *(_Game_UI_Holomap_UI_CriticalPath::UI_CriticalPath_C**)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::get_CritPathUI_ToIdentifier() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::get_ScanLocationAverage() {
    return (void*)((uintptr_t)this + 0x1d8);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_DroidScan.WMC_DroidScan_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::AddDroidScanIconToMap(_Script_CoreUObject::Vector UIScanLocation, void* ScanIdentifier, void* Planet) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::OnTickDroidScan() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::OnClose() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::Remove(void* Scan_Identifier) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C::ExecuteUbergraph_WMC_DroidScan(int32_t EntryPoint) {
    return;
}
