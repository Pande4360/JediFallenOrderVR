#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsMissionObjectiveSystemBase.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_Enum_ST_MissionObjective {
struct ST_MissionObjective;
}
namespace _Game_Levels_WorldMap_BP_BP_MissionObjectiveSystem {
#pragma pack(push, 1)
struct BP_MissionObjectiveSystem_C : public _Script_RsGameTechRT::RsMissionObjectiveSystemBase {
    private: char pad_360[0x160]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_NewMissions();
    void* get_ActiveMissions();
    void* get_CompletedMissions();
    _Script_Engine::DataTable*& get_MissionObjectives();
    void* get_LVL_AcquiredMission();
    void* get_LastMission();
    void* get_LVL_ObjectiveComplete();
    void* get_LVL_ObjectiveCompleteAnimFinished();
    void* get_LVL_AcquiredMissionAnimFinished();
    void* get_LVL_AcquiredMissionAutoplayFinished();
    static _Script_CoreUObject::Class* static_class();
    void HandleExistingMissions();
    void GetNewMissions(bool Clear_New_, void*& New_Missions);
    void GetLastMission(bool& Is_Valid, _Game_Levels_WorldMap_Enum_ST_MissionObjective::ST_MissionObjective& Last_Mission_Objective);
    void UserConstructionScript();
    void SetMissionCompleted0(void* MissionKey, bool bNotifyPlayer);
    void SetMissionAcquired0(void* MissionKey, bool bNotifyPlayer);
    void DisplayAllMissionIDs();
    void StartNewMission(void* Mission);
    void CompleteActiveMission();
    void OnMapClosed();
    void CustomEvent_0();
    void ExecuteUbergraph_BP_MissionObjectiveSystem(int32_t EntryPoint);
    void LVL_AcquiredMissionAutoplayFinished__DelegateSignature();
    void LVL_AcquiredMissionAnimFinished__DelegateSignature();
    void LVL_ObjectiveCompleteAnimFinished__DelegateSignature();
    void LVL_ObjectiveComplete__DelegateSignature(void* Mission);
    void LVL_AcquiredMission__DelegateSignature(void* Mission_Key);
}; // Size: 0x4c0
#pragma pack(pop)
}
