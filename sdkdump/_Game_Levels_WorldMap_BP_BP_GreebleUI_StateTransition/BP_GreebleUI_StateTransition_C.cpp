#include "..\FUObjectArray.hpp"
#include "BP_GreebleUI_StateTransition_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_Greeble_Parent\BP_Greeble_Parent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::set_FromChildActor_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::get_IsConnectedToSTA() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x398);
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::set_IsConnectedToSTA(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::get_ConnectedSTA() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::set_StateChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::get_StateChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::get_FromChildActor_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_GreebleUI_StateTransition.BP_GreebleUI_StateTransition_C");
    return result;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::AddToArray() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C::ExecuteUbergraph_BP_GreebleUI_StateTransition(int32_t EntryPoint) {
    return;
}
