#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshActor;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_RsGameTechRT {
struct RsMapSectionTag;
}
namespace _Game_UI_Holomap_UI_LocalMissionObjective {
struct UI_LocalMissionObjective_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective {
#pragma pack(push, 1)
struct WMC_MissionObjective_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x2a8]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    bool get_bIsPOIMoving();
    void set_bIsPOIMoving(bool value);
    void* get_PlanetMissionObjectiveMSVs();
    void* get_MissionObjectiveMSVs();
    void* get_ObjectiveActorToPlanet();
    void* get_ActiveMissionObjectiveWidgets();
    void* get_ActiveMissionObjectiveLocations();
    bool get_bIsRefineryHuddle();
    void set_bIsRefineryHuddle(bool value);
    void* get_EndPOILocation();
    float& get_FMovementInterp();
    void* get_CurrentMissionObjectiveTags();
    bool get_bIsCineMission();
    void set_bIsCineMission(bool value);
    float& get_MapCineScale();
    void* get_vBeginLocation();
    void* get_vEndLocation();
    float& get_fDelayToMove();
    float& get_fMovementInterpSpeed();
    bool get_bPreInterpMovement();
    void set_bPreInterpMovement(bool value);
    bool get_bIsTutorial();
    void set_bIsTutorial(bool value);
    bool get_bActivateAnim();
    void set_bActivateAnim(bool value);
    _Script_Engine::CurveFloat*& get_ScaleCurve();
    bool get_bHasAutoPlayed();
    void set_bHasAutoPlayed(bool value);
    bool get_bWentToMission();
    void set_bWentToMission(bool value);
    bool get_bToShip();
    void set_bToShip(bool value);
    int32_t& get_isOnOtherPlant();
    bool get_bAutoPlayOn();
    void set_bAutoPlayOn(bool value);
    void* get_ObjectiveActorToPlanetName();
    float& get_fRotationMax();
    float& get_fReturnRotation();
    bool get_bShipMissionObjective();
    void set_bShipMissionObjective(bool value);
    bool get_bRegionToWorldMap();
    void set_bRegionToWorldMap(bool value);
    void* get_OriginTreeMapSection();
    int32_t& get_GatewayDoorMapSectionCheck();
    void* get_PlanetToShipLocation();
    void* get_ZeffoShipLocation();
    void* get_IlumShipLocation();
    void* get_DathomirShipLocation();
    void* get_KashyyykShipLocation();
    void* get_BoganoShipLocation();
    static _Script_CoreUObject::Class* static_class();
    bool CheckIfObjectiveIsGalaxy(void*& MissionObjective, void*& CurrentPlanet);
    void SetMissionObjectiveTerrainMainMeshes(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Mesh, _Script_RsGameTechRT::RsMapSectionTag& MapSectionTag);
    void SetUIMisisonObjectiveVisible_DEPRECATED();
    void MissionObjectiveWorldMapClose();
    void SetLocationForMissionObjective();
    void CollapseMissionObjectiveUI(bool RemoveFromParent_);
    void SetMissionObjectiveMeshes(bool AutoPlayChanged);
    void RunMissionObjective();
    void StartCineInterp();
    void DeleteAllMissionObjectiveUI();
    void CreateMissionObjectiveWidget(void* MissionObjectiveName, _Script_CoreUObject::Vector Location, bool IsShip, _Game_UI_Holomap_UI_LocalMissionObjective::UI_LocalMissionObjective_C*& MissionObjectiveWidget);
    void LoadLocalMisisonObjectiveUI(void* MissionObjective, void* ObjectiveName, void*& MapSectionTags, _Script_CoreUObject::Vector MissionObjectiveLocation);
    void CheckActiveMissions();
    void ReceiveBeginPlay0();
    void SetColorOfPlanetMissionObjective();
    void SetHologramScale_Event();
    void MissionObjectiveStart();
    void MissionObjectiveEnd();
    void SetMissionObjectiveScale();
    void SetUIMissionObjectiveVisible();
    void SetSingleMissionObjectiveVisible(_Script_UMG::Widget* Widget);
    void ExecuteUbergraph_WMC_MissionObjective(int32_t EntryPoint);
}; // Size: 0x418
#pragma pack(pop)
}
