#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_Selection_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_RegionMultiplier() {
    return *(float*)((uintptr_t)this + 0x288);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_PerRegionSecretSections() {
    return (void*)((uintptr_t)this + 0x238);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::SetCollectibleRegionColor() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_RegionMap() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_CollectibleRegionColor() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_CollectibleRegionStatus() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::get_SelectedRegion() {
    return (void*)((uintptr_t)this + 0x230);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_Selection.WMC_Selection_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::SetRegionCollectibleBool() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::ClearRegion() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::SetRegionStruct() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::SetRegionColor() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C::ExecuteUbergraph_WMC_Selection(int32_t EntryPoint) {
    return;
}
