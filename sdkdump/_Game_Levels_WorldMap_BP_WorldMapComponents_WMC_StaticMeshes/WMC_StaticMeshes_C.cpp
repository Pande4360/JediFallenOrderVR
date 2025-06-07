#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_StaticMeshes_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshActor.hpp"
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::ClearAllMeshArrays() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_TerrainMeshArr() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshActor*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_ShipActor() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshActor**)((uintptr_t)this + 0x1b0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::ClassifyStaticMeshes() {
    return;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_TerrainMeshActors() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_MainMeshActors() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_StaticMeshes.WMC_StaticMeshes_C");
    return result;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::get_ZipelineLineActors() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::SetTerrainMeshParameters() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::GetShipActor() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::AssignMeshToArrays(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* L_CurrentMesh) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::SetTerrainMesh(bool OnMapOpen) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::ShowAllExploredMeshes() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::SetTerrainMeshesToCorrectColor(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Actor) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C::ExecuteUbergraph_WMC_StaticMeshes(int32_t EntryPoint) {
    return;
}
