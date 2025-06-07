#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition\BP_GreebleUI_StateTransition_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent\BP_StateTransition_Parent_C.hpp"
#include "BP_StateTransition_SavePoint_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/BP_StateTransition_SavePoint.BP_StateTransition_SavePoint_C");
    return result;
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::get_SavePoint() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::get_bStateChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c8 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::get_GreebleUI() {
    return *(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C**)((uintptr_t)this + 0x3c0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::set_bStateChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::ReceiveStateChanged(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_SavePoint::BP_StateTransition_SavePoint_C::ExecuteUbergraph_BP_StateTransition_SavePoint(int32_t EntryPoint) {
    return;
}
