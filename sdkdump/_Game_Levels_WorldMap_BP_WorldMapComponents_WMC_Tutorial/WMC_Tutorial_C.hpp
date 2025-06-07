#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Game_UI_Holomap_UI_MapTutorial {
struct UI_MapTutorial_C;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveVector;
}
namespace _Game_UI_Tutorials_UI_TutorialPopUp {
struct UI_TutorialPopUp_C;
}
namespace _Game_UI_3DMap_UI_MapMenu {
struct UI_MapMenu_C;
}
namespace _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial {
#pragma pack(push, 1)
struct WMC_Tutorial_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x3b0]; public:
    void* get_UberGraphFrame();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMapHologram_Ref();
    void* get_MapSectionsExplored();
    void* get_CurrentStep();
    bool get_bTutorialActivated();
    void set_bTutorialActivated(bool value);
    void* get_StepsCompleted();
    _Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C*& get_MapTutorialUI();
    void* get_StepToMapSection();
    void* get_Steps();
    bool get_bGateChanged();
    void set_bGateChanged(bool value);
    void* get_MainTut_Step01();
    void* get_MainTut_Step02();
    void* get_MainTut_Step03();
    void* get_MainTut_Step04();
    void* get_MainTut_Step05();
    void* get_UnlockedTrait();
    void* get_TraitToFName();
    bool get_bUnlocked_();
    void set_bUnlocked_(bool value);
    void* get_TraitToFName_0();
    _Script_Engine::CurveFloat*& get_ScaleCurve();
    float& get_InterpMovement();
    _Script_Engine::CurveVector*& get_LocationCurve();
    void* get_CurrentStep_Struct();
    bool get_bTutorialLock();
    void set_bTutorialLock(bool value);
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_MainTutorialWidget();
    _Script_RsGameTechRT::RsUiWindow*& get_PreWallRunTutorialWidget();
    _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& get_WallRunAcquiredTutorialWidget();
    bool get_bZoomed();
    void set_bZoomed(bool value);
    bool get_bShowMissionObjective();
    void set_bShowMissionObjective(bool value);
    float& get_StartingZoom();
    bool get_bInteriorLevelDown();
    void set_bInteriorLevelDown(bool value);
    bool get_bInteriorLevelUp();
    void set_bInteriorLevelUp(bool value);
    bool get_bInteriorLevelFinished();
    void set_bInteriorLevelFinished(bool value);
    bool get_bHideInteriorLevel();
    void set_bHideInteriorLevel(bool value);
    bool get_bHiddenTutorialEventCheck();
    void set_bHiddenTutorialEventCheck(bool value);
    void* get_InitialLocation();
    void* get_InitialRotation();
    bool get_bMoved();
    void set_bMoved(bool value);
    bool get_bRotated();
    void set_bRotated(bool value);
    bool get_bMovementTutorialFinished();
    void set_bMovementTutorialFinished(bool value);
    bool get_bRedGreenFinished();
    void set_bRedGreenFinished(bool value);
    float& get_MoveXValue();
    float& get_MoveYValue();
    float& get_MoveTotal();
    bool get_bIsDelaying();
    void set_bIsDelaying(bool value);
    void* get_SecondaryExplored();
    bool get_bMovementTutorialStarted();
    void set_bMovementTutorialStarted(bool value);
    void* get_PreviousSectionExplored();
    _Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& get_MapMenuRef();
    bool get_bCameraFinished();
    void set_bCameraFinished(bool value);
    bool get_bTutorialCone();
    void set_bTutorialCone(bool value);
    _Script_Engine::CurveFloat*& get_RotationCurve();
    bool get_bZoomSet();
    void set_bZoomSet(bool value);
    static _Script_CoreUObject::Class* static_class();
    void InitializeElevationChangeTutorial();
    void InitializeMovementTutorial();
    void AttachSteps();
    void ReceiveBeginPlay0();
    void StartMovementTutorial();
    void DeactivateTutorial();
    void ChangeZoom();
    void SwitchGatesToGreen();
    void SetWallRunAcquiredUI();
    void InteriorLevelChanged(void* InteriorLevel);
    void ChangeMovement();
    void ChangeRotation();
    void OnTickTutorial();
    void StartElevationTutorial();
    void RedGreenTutorial();
    void MovementTutorialComplete();
    void TriggerWallrunEvent();
    void ExecuteUbergraph_WMC_Tutorial(int32_t EntryPoint);
}; // Size: 0x520
#pragma pack(pop)
}
