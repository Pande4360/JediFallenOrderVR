#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "BP_StateTransition_Overcharge_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent\BP_StateTransition_Parent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_ControlledAsset() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::set_IsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_OverchargePanel() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_State_Changed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::set_State_Changed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3c8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_IsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c1 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::get_ForceAbility() {
    return (void*)((uintptr_t)this + 0x3d0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/BP_StateTransition_Overcharge.BP_StateTransition_Overcharge_C");
    return result;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::CheckIfLocked() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::SetColors() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::ReceiveStateChanged(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Overcharge::BP_StateTransition_Overcharge_C::ExecuteUbergraph_BP_StateTransition_Overcharge(int32_t EntryPoint) {
    return;
}
