#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "BP_StateTransition_Elevator_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStateTransitionGatewayActor.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_Second_CallBox() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x398);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_StartsBottom_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d2 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_State_Changed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_First_ElevatorCar() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3a8);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_Second_ElevatorCar() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3a0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_State_Changed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_First_CallBox() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_TopCallBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_TopCallBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_BottomCallBox() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c2 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_BottomCallBox(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_MapSectionExplored() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c3 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::UserConstructionScript() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_MapSectionExplored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3c8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_IsActivated() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_IsActivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_StartsActivated_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_StartsActivated_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_StartsBottom_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::SetColors() {
    return;
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_TopBoxVisible_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d3 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_TopBoxVisible_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::ReceiveStateChanged0(int32_t State) {
    return;
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_BottomBoxVisible_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_BottomBoxVisible_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_EntersBottomCarOnTop_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d5 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_EntersBottomCarOnTop_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_StartsSecondState() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d6 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_InStateTwo() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d7 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_StartsSecondState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_InStateTwo(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::set_MapSectionDependent_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::get_MapSectionDependent_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d8 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/BP_StateTransition_Elevator.BP_StateTransition_Elevator_C");
    return result;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::CheckIfBottomSectionIsExplored(bool& Explored) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::ChangeElevatorVisibility() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::ReceiveMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Elevator::BP_StateTransition_Elevator_C::ExecuteUbergraph_BP_StateTransition_Elevator(int32_t EntryPoint) {
    return;
}
