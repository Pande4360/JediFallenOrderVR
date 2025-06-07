#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_Tutorial_C.hpp"
#include "..\_Game_UI_3DMap_UI_MapMenu\UI_MapMenu_C.hpp"
#include "..\_Game_UI_Holomap_UI_MapTutorial\UI_MapTutorial_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\CurveVector.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_StepsCompleted() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::ChangeRotation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bTutorialActivated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MapSectionsExplored() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_CurrentStep() {
    return (void*)((uintptr_t)this + 0x190);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bTutorialActivated() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::AttachSteps() {
    return;
}
_Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MapTutorialUI() {
    return *(_Game_UI_Holomap_UI_MapTutorial::UI_MapTutorial_C**)((uintptr_t)this + 0x1b0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_StepToMapSection() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::ExecuteUbergraph_WMC_Tutorial(int32_t EntryPoint) {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bRedGreenFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b3 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_Steps() {
    return (void*)((uintptr_t)this + 0x208);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bGateChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bGateChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bMoved() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b0 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MainTut_Step01() {
    return (void*)((uintptr_t)this + 0x220);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bMovementTutorialFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b2 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_PreviousSectionExplored() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MainTut_Step02() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MainTut_Step03() {
    return (void*)((uintptr_t)this + 0x2a0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MainTut_Step04() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MainTut_Step05() {
    return (void*)((uintptr_t)this + 0x320);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bInteriorLevelDown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x490 + 0);
    *(uint8_t*)((uintptr_t)this + 0x490 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_UnlockedTrait() {
    return (void*)((uintptr_t)this + 0x360);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MainTutorialWidget() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x470);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::OnTickTutorial() {
    return;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_TraitToFName() {
    return (void*)((uintptr_t)this + 0x368);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bUnlocked_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bUnlocked_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bIsDelaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_TraitToFName_0() {
    return (void*)((uintptr_t)this + 0x3c0);
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_ScaleCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x410);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_InterpMovement() {
    return *(float*)((uintptr_t)this + 0x418);
}
_Script_Engine::CurveVector*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_LocationCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0x420);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_CurrentStep_Struct() {
    return (void*)((uintptr_t)this + 0x428);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bTutorialLock() {
    return (*(uint8_t*)((uintptr_t)this + 0x468 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bTutorialLock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x468 + 0);
    *(uint8_t*)((uintptr_t)this + 0x468 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsUiWindow*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_PreWallRunTutorialWidget() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x478);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_WallRunAcquiredTutorialWidget() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x480);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MoveYValue() {
    return *(float*)((uintptr_t)this + 0x4b8);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bZoomed() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bZoomed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bShowMissionObjective() {
    return (*(uint8_t*)((uintptr_t)this + 0x489 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bShowMissionObjective(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bRotated() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b1 + 0)) & 1 != 0;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_StartingZoom() {
    return *(float*)((uintptr_t)this + 0x48c);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bInteriorLevelDown() {
    return (*(uint8_t*)((uintptr_t)this + 0x490 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bInteriorLevelUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x491 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bInteriorLevelUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x491 + 0);
    *(uint8_t*)((uintptr_t)this + 0x491 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bMovementTutorialStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bInteriorLevelFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x492 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bInteriorLevelFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x492 + 0);
    *(uint8_t*)((uintptr_t)this + 0x492 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bHideInteriorLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x493 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bHideInteriorLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x493 + 0);
    *(uint8_t*)((uintptr_t)this + 0x493 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bHiddenTutorialEventCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x494 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bHiddenTutorialEventCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x494 + 0);
    *(uint8_t*)((uintptr_t)this + 0x494 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bIsDelaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_InitialLocation() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_InitialRotation() {
    return (void*)((uintptr_t)this + 0x4a4);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bMoved(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bRotated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bMovementTutorialFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bRedGreenFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MoveXValue() {
    return *(float*)((uintptr_t)this + 0x4b4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MoveTotal() {
    return *(float*)((uintptr_t)this + 0x4bc);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_SecondaryExplored() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bMovementTutorialStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_MapMenuRef() {
    return *(_Game_UI_3DMap_UI_MapMenu::UI_MapMenu_C**)((uintptr_t)this + 0x500);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bCameraFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x508 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bCameraFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x508 + 0);
    *(uint8_t*)((uintptr_t)this + 0x508 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bTutorialCone() {
    return (*(uint8_t*)((uintptr_t)this + 0x509 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bTutorialCone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x509 + 0);
    *(uint8_t*)((uintptr_t)this + 0x509 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_RotationCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x510);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::get_bZoomSet() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::set_bZoomSet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_Tutorial.WMC_Tutorial_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::InitializeElevationChangeTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::InitializeMovementTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::StartMovementTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::DeactivateTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::ChangeZoom() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::SwitchGatesToGreen() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::SetWallRunAcquiredUI() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::InteriorLevelChanged(void* InteriorLevel) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::ChangeMovement() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::StartElevationTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::RedGreenTutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::MovementTutorialComplete() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Tutorial::WMC_Tutorial_C::TriggerWallrunEvent() {
    return;
}
