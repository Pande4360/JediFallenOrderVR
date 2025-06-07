#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_GreebleUI\BP_GreebleUI_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition\BP_GreebleUI_StateTransition_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_UITechGreeble_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_DistanceGreebleUITurnsOff() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleBP() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleUItoBP_STA() {
    return (void*)((uintptr_t)this + 0x390);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_WolrdMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetDoorWidgets() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleUItoBP() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleBPToPlanet() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleUItoBP_Cine() {
    return (void*)((uintptr_t)this + 0x238);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_MissionEnumToMissionName() {
    return (void*)((uintptr_t)this + 0x288);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_HUD_Ref() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x2d8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleUItoDoor() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleUItoDoorUnlocked() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleBP_STA() {
    return (void*)((uintptr_t)this + 0x380);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_GreebleBPSTAToPlanet() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::get_MinBoundMargin() {
    return (void*)((uintptr_t)this + 0x430);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_UITechGreeble.WMC_UITechGreeble_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetGreebleSTAState(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C*& BP) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetSTAGreebleToLocation(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C*& STAActor, void*& TMap) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetPerSTA(bool StateChanged_, bool AlwaysOn, bool IsUnlockable, bool ChangeColors_, _Script_RsGameTechRT::RsUiWindow* GreebleUI, _Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C* GreebleBP) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetSTAState(_Script_CoreUObject::Object* RsUiWindow, bool IsUnlockable) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetGreebleType_STA(_Game_Levels_WorldMap_BP_BP_GreebleUI_StateTransition::BP_GreebleUI_StateTransition_C* GreebleBP) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetGreebleDoorState(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C*& BP) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetInitialDoorUI(_Script_UMG::UserWidget* CurrentWidget) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetMissionObjectiveUIGreeble(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C* Actor, bool& IsObjectiveActive) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetGreebleToLocation(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C*& Actor, void*& TMap, bool ForceLocation) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetGreebleType(_Game_Levels_WorldMap_BP_BP_GreebleUI::BP_GreebleUI_C* GreebleBP) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::GetAllActorsOGreebles() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetLocationForGreeble() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::TurnOffDoorWidgets() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::CheckIfGreebleIsUnlocked() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::SetLocationThroughTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::CollapseAllUITechGreeble() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C::ExecuteUbergraph_WMC_UITechGreeble(int32_t EntryPoint) {
    return;
}
