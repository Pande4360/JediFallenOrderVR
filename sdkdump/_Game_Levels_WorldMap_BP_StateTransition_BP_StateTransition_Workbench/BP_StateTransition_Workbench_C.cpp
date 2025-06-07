#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent\BP_StateTransition_Parent_C.hpp"
#include "BP_StateTransition_Workbench_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::get_Workbench() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::UserConstructionScript0() {
    return;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::get_NewVar_0_0() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::set_NewVar_0_0(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/BP_StateTransition_Workbench.BP_StateTransition_Workbench_C");
    return result;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::ReceiveStateChanged(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Workbench::BP_StateTransition_Workbench_C::ExecuteUbergraph_BP_StateTransition_Workbench(int32_t EntryPoint) {
    return;
}
