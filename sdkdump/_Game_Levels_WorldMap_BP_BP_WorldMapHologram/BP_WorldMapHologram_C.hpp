#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTutorial\Struct_WorldMapTutorial.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_SwGame\SwWorldMapHologramBase.hpp"
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings {
struct WMC_RuntimeSettings_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic {
struct WMC_Cinematic_C;
}
namespace _Game_UI_UI_HUD_ROOT {
struct UI_HUD_ROOT_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble {
struct WMC_UITechGreeble_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan {
struct WMC_DroidScan_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial {
struct WMC_Tutorial_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes {
struct WMC_StaticMeshes_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways {
struct WMC_DoorsGateways_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapStaticMeshActor;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero {
struct WMC_Hero_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection {
struct WMC_Selection_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UI {
struct WMC_UI_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective {
struct WMC_MissionObjective_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading {
struct WMC_Loading_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis {
struct WMC_OnMantis_C;
}
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation {
struct WMC_DeathLocation_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone {
struct WMC_HologramCone_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Audio {
struct WMC_Audio_C;
}
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation {
struct WMC_MissionEventAnimation_C;
}
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_UMG {
struct WidgetComponent;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
#pragma pack(push, 1)
struct BP_WorldMapHologram_C : public _Script_SwGame::SwWorldMapHologramBase {
    private: char pad_f70[0x8f8]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_RuntimeSettings::WMC_RuntimeSettings_C*& get_WMC_RuntimeSettings();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UITechGreeble::WMC_UITechGreeble_C*& get_WMC_UITechGreeble();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C*& get_WMC_Tutorial();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_StaticMeshes::WMC_StaticMeshes_C*& get_WMC_StaticMeshes();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DroidScan::WMC_DroidScan_C*& get_WMC_DroidScan();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C*& get_WMC_Hero();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DoorsGateways::WMC_DoorsGateways_C*& get_WMC_DoorsGateways();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Selection::WMC_Selection_C*& get_WMC_Selection();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_UI::WMC_UI_C*& get_WMC_UI();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionObjective::WMC_MissionObjective_C*& get_WMC_MissionObjective();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Loading::WMC_Loading_C*& get_WMC_Loading();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C*& get_WMC_OnMantis();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_DeathLocation::WMC_DeathLocation_C*& get_WMC_DeathLocation();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_HologramCone::WMC_HologramCone_C*& get_WMC_HologramCone();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C*& get_WMC_Cinematic();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Audio::WMC_Audio_C*& get_WMC_Audio();
    _Script_Engine::ParticleSystemComponent*& get_HologramCone_Cine();
    _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C*& get_WMC_MissionEventAnimation();
    _Script_Engine::StaticMeshComponent*& get_SM_WorldMapHologram_MantisCones();
    _Script_Engine::StaticMeshComponent*& get_HolotableConeRoot();
    _Script_Engine::ParticleSystemComponent*& get_Main_HolotableCone();
    _Script_Engine::StaticMeshComponent*& get_SM_WorldMapHologram_WorldMask();
    _Script_Engine::ParticleSystemComponent*& get_HologramCone();
    _Script_Engine::StaticMeshComponent*& get_HologramConeNull();
    _Script_Engine::PointLightComponent*& get_WorldMapLight();
    _Script_UMG::WidgetComponent*& get_worldGrid();
    _Script_UMG::WidgetComponent*& get_regionGrid();
    void* get_RegionArr();
    float& get_BlurScale();
    bool get_IsGalaxy();
    void set_IsGalaxy(bool value);
    void* get_MAP_SetHologramScale();
    void* get_LevelArr();
    void* get_CurrentLevel();
    void* get_BOG();
    void* get_ZEF();
    void* get_Kas();
    void* get_dat();
    float& get_BOG_Intensity();
    float& get_ZEF_Intensity();
    float& get_KAS_Intensity();
    float& get_DAT_Intensity();
    void* get_InteriorLevels();
    bool get_BeginPlay();
    void set_BeginPlay(bool value);
    bool get_TransformMap();
    void set_TransformMap(bool value);
    void* get_PlanetToUI();
    void* get_PlanetToMat();
    void* get_PlanetToDynamicMat();
    void* get_PlanetToMissionUI();
    void* get_PlanetToMesh();
    void* get_PlanetToMissionBool();
    void* get_ObjectiveActorToStatus();
    bool get_ShowPlanetUI();
    void set_ShowPlanetUI(bool value);
    float& get_LightIntensity();
    void* get_MAP_planetChosen();
    bool get_ChangeMapToGalaxy();
    void set_ChangeMapToGalaxy(bool value);
    void* get_MAP_SetMapOnMantis();
    bool get_IsReadyToChange();
    void set_IsReadyToChange(bool value);
    void* get_MAP_NotOnMantis();
    void* get_WorldMap_Follow();
    void* get_WorldMap_Mantis();
    void* get_BlurType();
    float& get_Exposure();
    float& get_BackgroundDarkness();
    float& get_OverallEmissiveIntensity();
    float& get_Bloom();
    void* get_UI_OnMapOpen();
    void* get_BoganoName();
    void* get_ZeffoName();
    void* get_KashyyykName();
    void* get_DathomirName();
    void* get_IlumName();
    void* get_FightClubName();
    void* get_FortressName();
    bool get_PlanetChosen();
    void set_PlanetChosen(bool value);
    void* get_UI_OnHolotableOpen();
    bool get_bTimeButtonOpen();
    void set_bTimeButtonOpen(bool value);
    float& get_TimeUIButtonPressed();
    bool get_bWhileButtonPressed();
    void set_bWhileButtonPressed(bool value);
    bool get_bCheckBButton();
    void set_bCheckBButton(bool value);
    void* get_UI_PlanetLoading();
    void* get_UI_PlanetLoaded();
    void* get_UI_InteriorLevelHoverOn();
    void* get_UI_InteriorLevelHoverOff();
    void* get_CurrentInteirorLevel();
    bool get_bIsFocus();
    void set_bIsFocus(bool value);
    bool get_bIsCancel();
    void set_bIsCancel(bool value);
    bool get_bDuringWorldMapOpen();
    void set_bDuringWorldMapOpen(bool value);
    bool get_bOnMantisWorldMapOpen();
    void set_bOnMantisWorldMapOpen(bool value);
    void* get_MainMeshActors();
    void* get_AllWorldMapTags();
    bool get_WalkingOnMantis();
    void set_WalkingOnMantis(bool value);
    bool get_WalkingOffMantis();
    void set_WalkingOffMantis(bool value);
    bool get_bCameraAnimationFinished();
    void set_bCameraAnimationFinished(bool value);
    bool get_bConeCine_();
    void set_bConeCine_(bool value);
    bool get_IsRefineryHuddle();
    void set_IsRefineryHuddle(bool value);
    bool get_bIsOpening();
    void set_bIsOpening(bool value);
    void* get_PlanetToParticle();
    void* get_PlanetToParticleColor();
    float& get_BlurMovement();
    bool get_bExitMap();
    void set_bExitMap(bool value);
    bool get_IsMovingPlanet();
    void set_IsMovingPlanet(bool value);
    void* get_UI_MapEnteredCombatMode();
    void* get_UI_MapExitedCombatMode();
    void* get_TUT_WallRunTurnedGreen();
    void* get_TUT_NextStepCompleted();
    void* get_NAR_VO_LandingPad();
    void* get_NAR_VO_SavePoint();
    void* get_NAR_VO_MysteriousStructure();
    void* get_NAR_VO_CloseMap();
    void* get_NAR_VO_AfterWallRunAcquire();
    bool get_bTutorialInitiated();
    void set_bTutorialInitiated(bool value);
    void* get_TUT_LandingPadHovered();
    void* get_TUT_SavePointHovered();
    void* get_TUT_ZoomedOut();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_CloseTutorialMessage();
    void* get_TUT_ZoomedIn();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_InitialTutorialMessage();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_TutorialStepsMessage();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_MysteriousStructureMessage();
    void* get_TUT_TutorialStepsCompleted();
    void* get_TUT_StructureHovered();
    void* get_TUT_InteriorLevelDown();
    void* get_TUT_InteriorLevelUp();
    void* get_TUT_InteriorLevelFinished();
    void* get_TUT_MovementStepsCompleted();
    void* get_UI_OnMapClose();
    bool get_bInDistortionSection();
    void set_bInDistortionSection(bool value);
    void* get_DistortionMapSections();
    _Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& get_HUDRoot_Ref();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_LastChanceFortressMessage();
    void* get_MAP_RevengeDealt();
    void* get_MAP_SecretMapSectionExplored();
    void* get_MAP_MapSectionExplored();
    void* get_TUT_StartWallRunAnim();
    bool get_bInitializeMapOpen();
    void set_bInitializeMapOpen(bool value);
    void* get_UI_OnInitializeMap();
    void* get_MAP_OnRegionChange();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_AlreadySelectedMessage();
    void* get_MapSectionSelected();
    void* get_MAP_MissionObjectiveAutoPlayFinish();
    void* get_VaultMST();
    bool get_bMantisCameraAnimationFinished();
    void set_bMantisCameraAnimationFinished(bool value);
    void* get_BTN_LocalView();
    void* get_BTN_GalaxyView();
    bool get_HasLeftToGalaxy();
    void set_HasLeftToGalaxy(bool value);
    bool get_bPauseBlur();
    void set_bPauseBlur(bool value);
    void* get_NAR_VO_FortressLastWarning();
    void* get_MAP_GhostGateState();
    int32_t& get_GhostGateState();
    void* get_MAP_LevelChanged();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_GameIsNotFullyInstalledMessage();
    static _Script_CoreUObject::Class* static_class();
    void CollapsePlanetMissionObjectiveUI();
    void SetArrowVisibility(bool Hidden_);
    void AttributeTags(bool Add_);
    void SetGalaxyBrightness();
    void OnMapOpenThroughTick();
    void ToggleOnMantisTicks();
    void ToggleArrowVisibility();
    void SetShipParameters();
    void CheckReadyToChange();
    void SetLocationForAreaGlowParticlesOnGalaxy();
    void SetLocationOfMap_PlanetHop(bool ResetTransform_, _Script_CoreUObject::Vector NewLocation);
    void MoveMapToLocation(_Script_CoreUObject::Vector& NewLocaftion);
    void SetLocationOfMap(bool ResetTransform_, _Script_CoreUObject::Vector NewLocation);
    void UpdateLightPositionAndAttenuation();
    void SetUIInteriorLevel(void* InteriorLevel, int32_t TotalLevels);
    void UndoConstructionScript();
    void CheckIfSelectedMSTIsCurrentFunction(bool& SelectedIsValid);
    void PlanetUIVisibility(bool Visible_, bool Kill_);
    void SetLocationForAllPlanetUI();
    void CreateUIDynamicPlanetMaterials();
    void CreateUIForEachPlanet(_Script_RsGameTechRT::RsWorldMapStaticMeshActor* Type);
    void ClearAllArrays();
    void CheckIfInteriorIsShowable(void* InteriorLevel, bool& ShowSelection, bool& DimSelection);
    void ShowSwitchElevationLevels();
    void CheckIfNotCurrentInteriorLevel(bool& ShowSection);
    void CheckCurrent3DMapLevel();
    void SetInteriorLevelBrightness(void* InteriorLevel, float BrightnessMultiplier, bool ChangeLayer_, bool OverlayColor_);
    void GetAllInteriorLevels();
    void SetBrightnessDependentOnInteriorLevel(void* CurrentInteriorLevel);
    void TickPostProcess();
    void UI_UpdateMapSectionAndRegion();
    void SetLightParameters();
    void RampPost_Process(bool Condition, float Ramp);
    void UserConstructionScript();
    void InpActEvt_UI_Cancel_K2Node_InputActionEvent_2(_Script_InputCore::Key Key);
    void InpActEvt_UI_Accept_K2Node_InputActionEvent_1(_Script_InputCore::Key Key);
    void InpActEvt_UI_Accept_K2Node_InputActionEvent_0(_Script_InputCore::Key Key);
    void CheckBButton();
    void InpAxisEvt_MoveLeftAnalogX_K2Node_InputAxisEvent_0(float AxisValue);
    void InpAxisEvt_MoveLeftAnalogY_K2Node_InputAxisEvent_1(float AxisValue);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveWorldMapOpened0();
    void ReceiveWorldMapClosed0();
    void ReceiveMapSectionSelectionChanged0(_Script_RsGameTechRT::RsMapSectionTag& NewMapSection);
    void ResetBlinkingStatus();
    void CreateUIWidgets();
    void WorldMapOnBeginPlay();
    void ReceiveWorldMapLevelChanged0(void*& WorldMapName);
    void Create_PlanetUIWidgets();
    void ReceiveInteriorLevelChanged0(void* NewInteriorLevel);
    void Cine_OnStart();
    void Cine_SetCinematicAndHologramLocation(_Script_CoreUObject::Vector Cine_Hologram_Location, void* Cinematic);
    void Cine_SetNewFocusLocation();
    void Cine_OnEnd();
    void ReceiveInteriorLevelHoverBegin0(void* InteriorLevel);
    void ReceiveInteriorLevelHoverEnd0(void* InteriorLevel);
    void ExitToGalaxyView();
    void EnterLocalView();
    void Post_Delay_Event(void* Camera_Mode);
    void CollapseUI();
    void Audio_OpenMapOnHolotableInteract();
    void SetupCameraEvents();
    void GetInteriorLevels();
    void ReceiveRegionSelectionChanged0(void*& RegionName);
    void CreateCloseTutorialMessage();
    void CreateInitialTutorialMessage();
    void CreateTutorialStepsMessage();
    void CreateMysteriousStructureMessage();
    void CreateLastChanceFortress();
    void OnTickRuntimeSettings(bool OnRegionSelect);
    void ReceiveRuntimeSettingsChanged0();
    void OnRevengeDealt();
    void RemoveDeathLocationWhenInMapSection();
    void ReceiveSecretMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void ReceiveMapSectionExplored0(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    void CreateAlreadySelected();
    void OnGameStateChange(void* NewState, void* PrevState);
    void RampBlur();
    void SetGhostGateState(int32_t State);
    void SetMissionObjectiveLocationAndVisibility();
    void CreateGameIsNotFullyInstalledMessage();
    void ExecuteUbergraph_BP_WorldMapHologram(int32_t EntryPoint);
    void MAP_LevelChanged__DelegateSignature();
    void MAP_GhostGateState__DelegateSignature(int32_t State);
    void NAR_VO_FortressLastWarning__DelegateSignature();
    void BTN_GalaxyView__DelegateSignature();
    void BTN_LocalView__DelegateSignature();
    void MAP_MissionObjectiveAutoPlayFinish__DelegateSignature();
    void MAP_OnRegionChange__DelegateSignature();
    void UI_OnInitializeMap__DelegateSignature();
    void TUT_StartWallRunAnim__DelegateSignature();
    void MAP_MapSectionExplored__DelegateSignature(_Script_RsGameTechRT::RsMapSectionTag Map_Section);
    void MAP_SecretMapSectionExplored__DelegateSignature(_Script_RsGameTechRT::RsMapSectionTag Secret_Map_Section);
    void MAP_RevengeDealt__DelegateSignature();
    void UI_OnMapClose__DelegateSignature();
    void TUT_MovementStepsCompleted__DelegateSignature();
    void TUT_InteriorLevelFinished__DelegateSignature();
    void TUT_InteriorLevelUp__DelegateSignature();
    void TUT_InteriorLevelDown__DelegateSignature();
    void TUT_StructureHovered__DelegateSignature();
    void TUT_TutorialStepsCompleted__DelegateSignature();
    void TUT_ZoomedIn__DelegateSignature();
    void TUT_ZoomedOut__DelegateSignature();
    void TUT_SavePointHovered__DelegateSignature();
    void TUT_LandingPadHovered__DelegateSignature();
    void NAR_VO_AfterWallRunAcquire__DelegateSignature();
    void NAR_VO_CloseMap__DelegateSignature();
    void NAR_VO_MysteriousStructure__DelegateSignature();
    void NAR_VO_SavePoint__DelegateSignature();
    void NAR_VO_LandingPad__DelegateSignature();
    void TUT_NextStepCompleted__DelegateSignature(_Game_Levels_WorldMap_BP_WorldMapStructs_Struct_WorldMapTutorial::Struct_WorldMapTutorial StepCompleted);
    void TUT_WallRunTurnedGreen__DelegateSignature();
    void UI_MapExitedCombatMode__DelegateSignature();
    void UI_MapEnteredCombatMode__DelegateSignature();
    void UI_InteriorLevelHoverOff__DelegateSignature();
    void UI_InteriorLevelHoverOn__DelegateSignature(void* TargetInteriorLevel, void* CurrentInteriorLevel);
    void UI_PlanetLoaded__DelegateSignature();
    void UI_PlanetLoading__DelegateSignature();
    void UI_OnHolotableOpen__DelegateSignature(void* Region);
    void UI_OnMapOpen__DelegateSignature();
    void MAP_NotOnMantis__DelegateSignature();
    void MAP_SetMapOnMantis__DelegateSignature(_Script_CoreUObject::Vector MantisLoc, bool BeginPlay_);
    void MAP_planetChosen__DelegateSignature(void* Planet);
    void MAP_SetHologramScale__DelegateSignature();
}; // Size: 0x1868
#pragma pack(pop)
}
