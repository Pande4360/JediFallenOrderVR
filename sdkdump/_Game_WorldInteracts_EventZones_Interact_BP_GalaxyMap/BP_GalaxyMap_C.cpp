#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis\WMC_OnMantis_C.hpp"
#include "BP_GalaxyMap_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ArrowComponent.hpp"
void* _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4a8);
}
_Script_Engine::ArrowComponent*& _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::get_Arrow() {
    return *(_Script_Engine::ArrowComponent**)((uintptr_t)this + 0x4b0);
}
void* _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::get_CamRotation() {
    return (void*)((uintptr_t)this + 0x4b8);
}
bool _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::get_bStartRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c4 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C*& _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::get_WMC_Mantis_Ref() {
    return *(_Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C**)((uintptr_t)this + 0x4c8);
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::set_bStartRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Interact/BP_GalaxyMap.BP_GalaxyMap_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::ShouldAllowInteract__OverrideMe(bool& Result) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::MAP_InteractionComplete() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::MAP_InteractionStarted() {
    return;
}
void _Game_WorldInteracts_EventZones_Interact_BP_GalaxyMap::BP_GalaxyMap_C::ExecuteUbergraph_BP_GalaxyMap(int32_t EntryPoint) {
    return;
}
