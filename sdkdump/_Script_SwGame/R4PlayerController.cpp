#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Pawn.hpp"
#include "..\_Script_Engine\PostProcessSettings.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsCameraModeSetDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerController.hpp"
#include "..\_Script_RsGameTechRT\RsPostProcessSettingsDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsSplineCameraDefinition.hpp"
#include "..\_Script_RsGameTechRT\RsSplineCameraOrigin.hpp"
#include "R4PlayerController.hpp"
#include "SwHighlightManager.hpp"
void _Script_SwGame::R4PlayerController::ResetPawnsToCollideWithCamera() {
    return;
}
_Script_SwGame::SwHighlightManager*& _Script_SwGame::R4PlayerController::get_HighlightManager() {
    return *(_Script_SwGame::SwHighlightManager**)((uintptr_t)this + 0x3608);
}
void* _Script_SwGame::R4PlayerController::get_OnPlayerLoginChanged() {
    return (void*)((uintptr_t)this + 0x3610);
}
void _Script_SwGame::R4PlayerController::RemovePawnToCollideWithCamera(_Script_Engine::Pawn* PawnToRemove) {
    return;
}
void* _Script_SwGame::R4PlayerController::get_OnAnyPlayerLoginChanged() {
    return (void*)((uintptr_t)this + 0x3620);
}
void* _Script_SwGame::R4PlayerController::get_PostDeathWidgetClass() {
    return (void*)((uintptr_t)this + 0x36a0);
}
void _Script_SwGame::R4PlayerController::BeginSplineCamera(_Script_RsGameTechRT::RsSplineCameraDefinition* SplineCameraDefinition, void* OverrideModeName, float OverrideBlendTime, void* InitializationMethod) {
    return;
}
void* _Script_SwGame::R4PlayerController::get_CustomDeathHandler() {
    return (void*)((uintptr_t)this + 0x3630);
}
void* _Script_SwGame::R4PlayerController::get_OnPlayerResapwnedEvent() {
    return (void*)((uintptr_t)this + 0x36b8);
}
void _Script_SwGame::R4PlayerController::HideButton() {
    return;
}
void* _Script_SwGame::R4PlayerController::get_SpawnTransform() {
    return (void*)((uintptr_t)this + 0x3670);
}
void* _Script_SwGame::R4PlayerController::get_OnWidgetAddedEvent() {
    return (void*)((uintptr_t)this + 0x36a8);
}
void _Script_SwGame::R4PlayerController::HideAction() {
    return;
}
void* _Script_SwGame::R4PlayerController::get_PhotoModeControllerClass() {
    return (void*)((uintptr_t)this + 0x36c8);
}
void* _Script_SwGame::R4PlayerController::get_SoftCheatClass() {
    return (void*)((uintptr_t)this + 0x36d0);
}
_Script_CoreUObject::Class* _Script_SwGame::R4PlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4PlayerController");
    return result;
}
void _Script_SwGame::R4PlayerController::UpdatePostProcessEffect(_Script_RsGameTechRT::RsPostProcessSettingsDefinition* PostProcessDefinition, _Script_Engine::PostProcessSettings& UpdatedSettings) {
    return;
}
void _Script_SwGame::R4PlayerController::TogglePhotomode() {
    return;
}
void _Script_SwGame::R4PlayerController::PhotomodeLeftButtonPressed() {
    return;
}
void _Script_SwGame::R4PlayerController::ShowButton(_Script_InputCore::Key Button, bool Pulsing) {
    return;
}
void _Script_SwGame::R4PlayerController::ButtonMashFailed(_Script_InputCore::Key Button) {
    return;
}
void _Script_SwGame::R4PlayerController::ShowAction(void* Action, bool Pulsing) {
    return;
}
void _Script_SwGame::R4PlayerController::SetUseLatestSignedInUser(bool UseLatestSignedInUser) {
    return;
}
_Script_Engine::Actor* _Script_SwGame::R4PlayerController::GetActiveSplineCameraOrigin() {
    return;
}
void _Script_SwGame::R4PlayerController::SetSpawnTransform(_Script_CoreUObject::Transform& SpawnTrans) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCustomDeathHandler(void* NewDeathHandler) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCameraShakeScale(void* Shake, float TargetScale, float ScaleSmoothTime) {
    return;
}
void _Script_SwGame::R4PlayerController::CameraMode_Restart(float BlendTimeOverride) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCameraRotation(_Script_CoreUObject::Rotator CameraRotation, bool bRestartCameraMode, float OverrideBlendTimeOnRestart, bool bAllowNonzeroRoll, bool bResetLookInputTime) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCameraFocusLocation(_Script_CoreUObject::Vector InFocusLocation) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCameraFocusDirection(_Script_CoreUObject::Vector InFocusDirection) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCameraFocusActor(_Script_Engine::Actor* InFocusActor, void* FocusSocket, bool bRestartCameraMode, float RestartBlendTimeOverride, void* ForCameraMode) {
    return;
}
void _Script_SwGame::R4PlayerController::SetCameraDynamicOffsetCS(_Script_CoreUObject::Vector DynamicOffset, _Script_CoreUObject::Rotator DynamicRotationOffset, float OffsetTransitionTime) {
    return;
}
void _Script_SwGame::R4PlayerController::RemovePostProcessEffect(_Script_RsGameTechRT::RsPostProcessSettingsDefinition* PostProcessDefinition, float TransitionOutTime) {
    return;
}
void* _Script_SwGame::R4PlayerController::CameraMode_Get() {
    return;
}
void _Script_SwGame::R4PlayerController::RemoveCameraModeSet(_Script_RsGameTechRT::RsCameraModeSetDefinition* ModeSetDefinition) {
    return;
}
void _Script_SwGame::R4PlayerController::AddPawnToCollideWithCamera(_Script_Engine::Pawn* PawnToAdd) {
    return;
}
void _Script_SwGame::R4PlayerController::RemoveAllPostProcessEffects() {
    return;
}
void _Script_SwGame::R4PlayerController::OnPlayerDied(_Script_Engine::Actor* DeathActor) {
    return;
}
void _Script_SwGame::R4PlayerController::ReenableCameraAutoUpdateOfViewTargetRotation() {
    return;
}
void _Script_SwGame::R4PlayerController::PhotomodeRightButtonReleased() {
    return;
}
void _Script_SwGame::R4PlayerController::PhotomodeRightButtonPressed() {
    return;
}
void _Script_SwGame::R4PlayerController::PhotomodeLeftButtonReleased() {
    return;
}
void _Script_SwGame::R4PlayerController::OnLoginChanged(int32_t LocalUserNum) {
    return;
}
_Script_CoreUObject::Transform _Script_SwGame::R4PlayerController::GetSpawnTransform() {
    return;
}
_Script_InputCore::Key _Script_SwGame::R4PlayerController::GetKeyForAction(void* Action) {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::R4PlayerController::GetCameraFocusDirection() {
    return;
}
_Script_RsGameTechRT::RsSplineCameraDefinition* _Script_SwGame::R4PlayerController::GetActiveSplineCameraDefinition() {
    return;
}
void _Script_SwGame::R4PlayerController::EndSplineCamera(float OverrideBlendTime, _Script_RsGameTechRT::RsSplineCameraDefinition* OptionalSplineCameraToEnd, bool bMaintainBlendOutTimeUntilFinished) {
    return;
}
void _Script_SwGame::R4PlayerController::DisableCameraAutoUpdateOfViewTargetRotation() {
    return;
}
void _Script_SwGame::R4PlayerController::ClearCameraFocusActor(void* ForCameraMode) {
    return;
}
void _Script_SwGame::R4PlayerController::CameraMode_Set(void* ModeName, float BlendTimeOverride, int32_t Priority) {
    return;
}
void _Script_SwGame::R4PlayerController::CameraMode_Reset(float BlendTime) {
    return;
}
void _Script_SwGame::R4PlayerController::CameraMode_Push(void* ModeName, float BlendTimeOverride, int32_t Priority) {
    return;
}
void _Script_SwGame::R4PlayerController::CameraMode_Pop(void* ModeName, float BlendTimeOverride) {
    return;
}
void _Script_SwGame::R4PlayerController::ButtonMashSucceed(_Script_InputCore::Key Button) {
    return;
}
void _Script_SwGame::R4PlayerController::ButtonMashStarted(_Script_InputCore::Key Button) {
    return;
}
void _Script_SwGame::R4PlayerController::ButtonMashEnded(_Script_InputCore::Key Button) {
    return;
}
void _Script_SwGame::R4PlayerController::ButtonMashButtonPressed(_Script_InputCore::Key Button) {
    return;
}
void _Script_SwGame::R4PlayerController::BeginAttachedSplineCamera(_Script_RsGameTechRT::RsSplineCameraOrigin* SplineCameraOrigin, void* OverrideModeName, float OverrideBlendTime, void* InitializationMethod) {
    return;
}
void _Script_SwGame::R4PlayerController::AddPostProcessEffect(_Script_RsGameTechRT::RsPostProcessSettingsDefinition* PostProcessDefinition, float BlendWeight, float TransitionInTime) {
    return;
}
void _Script_SwGame::R4PlayerController::AddCameraModeSet(_Script_RsGameTechRT::RsCameraModeSetDefinition* ModeSetDefinition) {
    return;
}
