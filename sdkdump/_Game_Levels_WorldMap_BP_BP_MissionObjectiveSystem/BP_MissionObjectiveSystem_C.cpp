#include "..\FUObjectArray.hpp"
#include "BP_MissionObjectiveSystem_C.hpp"
#include "..\_Game_Levels_WorldMap_Enum_ST_MissionObjective\ST_MissionObjective.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMissionObjectiveSystemBase.hpp"
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_CompletedMissions() {
    return (void*)((uintptr_t)this + 0x410);
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::HandleExistingMissions() {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::GetNewMissions(bool Clear_New_, void*& New_Missions) {
    return;
}
_Script_Engine::SceneComponent*& _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_LastMission() {
    return (void*)((uintptr_t)this + 0x478);
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::StartNewMission(void* Mission) {
    return;
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_NewMissions() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_ActiveMissions() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_Engine::DataTable*& _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_MissionObjectives() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x460);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_LVL_AcquiredMission() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_LVL_AcquiredMissionAutoplayFinished() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_LVL_ObjectiveComplete() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_LVL_ObjectiveCompleteAnimFinished() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::get_LVL_AcquiredMissionAnimFinished() {
    return (void*)((uintptr_t)this + 0x4a0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_MissionObjectiveSystem.BP_MissionObjectiveSystem_C");
    return result;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::GetLastMission(bool& Is_Valid, _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective& Last_Mission_Objective) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::UserConstructionScript() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::SetMissionCompleted0(void* MissionKey, bool bNotifyPlayer) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::SetMissionAcquired0(void* MissionKey, bool bNotifyPlayer) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::DisplayAllMissionIDs() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::CompleteActiveMission() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::OnMapClosed() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::CustomEvent_0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::ExecuteUbergraph_BP_MissionObjectiveSystem(int32_t EntryPoint) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::LVL_AcquiredMissionAutoplayFinished__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::LVL_AcquiredMissionAnimFinished__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::LVL_ObjectiveCompleteAnimFinished__DelegateSignature() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::LVL_ObjectiveComplete__DelegateSignature(void* Mission) {
    return;
}
void _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem::BP_MissionObjectiveSystem_C::LVL_AcquiredMission__DelegateSignature(void* Mission_Key) {
    return;
}
