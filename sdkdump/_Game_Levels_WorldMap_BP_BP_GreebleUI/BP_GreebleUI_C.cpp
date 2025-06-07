#include "..\FUObjectArray.hpp"
#include "BP_GreebleUI_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_Greeble_Parent\BP_Greeble_Parent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x398);
}
bool _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_IsCinematicGreeble_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_MapSection() {
    return (void*)((uintptr_t)this + 0x3a0);
}
void* _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_MissionObjective() {
    return (void*)((uintptr_t)this + 0x3ba);
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::set_IsCinematicGreeble_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_IsMissionObjective() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b9 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::set_IsMissionObjective(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_IsConnectedToDoor() {
    return (*(uint8_t*)((uintptr_t)this + 0x3bb + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::set_IsConnectedToDoor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3bb + 0);
    *(uint8_t*)((uintptr_t)this + 0x3bb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_ConnectedDoor() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::get_Greeble_Location() {
    return (void*)((uintptr_t)this + 0x3e8);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_GreebleUI.BP_GreebleUI_C");
    return result;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::AddToArray() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C::ExecuteUbergraph_BP_GreebleUI(int32_t EntryPoint) {
    return;
}
