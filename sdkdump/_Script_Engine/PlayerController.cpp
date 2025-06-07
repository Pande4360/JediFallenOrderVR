#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
#include "CameraAnim.hpp"
#include "CheatManager.hpp"
#include "Controller.hpp"
#include "ForceFeedbackEffect.hpp"
#include "HUD.hpp"
#include "HapticFeedbackEffect_Base.hpp"
#include "HitResult.hpp"
#include "InputComponent.hpp"
#include "InterpTrackInstDirector.hpp"
#include "LatentActionInfo.hpp"
#include "MaterialInterface.hpp"
#include "NetConnection.hpp"
#include "Pawn.hpp"
#include "Player.hpp"
#include "PlayerCameraManager.hpp"
#include "PlayerController.hpp"
#include "PlayerInput.hpp"
#include "PlayerState.hpp"
#include "SceneComponent.hpp"
#include "SoundBase.hpp"
#include "SpectatorPawn.hpp"
#include "TouchInterface.hpp"
#include "UniqueNetIdRepl.hpp"
#include "Vector_NetQuantize.hpp"
#include "ViewTargetTransitionParams.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Script_Engine::PlayerController::get_PlayerCameraManagerClass() {
    return (void*)((uintptr_t)this + 0x408);
}
void _Script_Engine::PlayerController::set_bEnableMouseOverEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_Engine::Player*& _Script_Engine::PlayerController::get_Player() {
    return *(_Script_Engine::Player**)((uintptr_t)this + 0x3e0);
}
bool _Script_Engine::PlayerController::get_bEnableTouchEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 4 != 0;
}
_Script_Engine::Pawn*& _Script_Engine::PlayerController::get_AcknowledgedPawn() {
    return *(_Script_Engine::Pawn**)((uintptr_t)this + 0x3e8);
}
_Script_Engine::PlayerCameraManager*& _Script_Engine::PlayerController::get_PlayerCameraManager() {
    return *(_Script_Engine::PlayerCameraManager**)((uintptr_t)this + 0x400);
}
void* _Script_Engine::PlayerController::get_DefaultClickTraceChannel() {
    return (void*)((uintptr_t)this + 0x5ba);
}
_Script_Engine::InterpTrackInstDirector*& _Script_Engine::PlayerController::get_ControllingDirTrackInst() {
    return *(_Script_Engine::InterpTrackInstDirector**)((uintptr_t)this + 0x3f0);
}
_Script_Engine::HUD*& _Script_Engine::PlayerController::get_MyHUD() {
    return *(_Script_Engine::HUD**)((uintptr_t)this + 0x3f8);
}
bool _Script_Engine::PlayerController::get_bAutoManageActiveCameraTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x410 + 0)) & 1 != 0;
}
void _Script_Engine::PlayerController::set_bPlayerIsWaiting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PlayerController::set_bAutoManageActiveCameraTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x410 + 0);
    *(uint8_t*)((uintptr_t)this + 0x410 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::PlayerController::get_ForceFeedbackPcDualshockLargeLeftScale() {
    return *(float*)((uintptr_t)this + 0x59c);
}
void* _Script_Engine::PlayerController::get_TargetViewRotation() {
    return (void*)((uintptr_t)this + 0x414);
}
float& _Script_Engine::PlayerController::get_InputPitchScale() {
    return *(float*)((uintptr_t)this + 0x578);
}
void _Script_Engine::PlayerController::ClientClearCameraLensEffects() {
    return;
}
float& _Script_Engine::PlayerController::get_SmoothTargetViewRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x42c);
}
void _Script_Engine::PlayerController::ClientForceGarbageCollection() {
    return;
}
void _Script_Engine::PlayerController::PlayHapticEffect(_Script_Engine::HapticFeedbackEffect_Base* HapticEffect, void* Hand, float Scale, bool bLoop) {
    return;
}
void* _Script_Engine::PlayerController::get_HiddenActors() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Script_Engine::PlayerController::get_CurrentClickTraceChannel() {
    return (void*)((uintptr_t)this + 0x5bb);
}
void _Script_Engine::PlayerController::set_bShowMouseCursor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PlayerController::get_HiddenPrimitiveComponents() {
    return (void*)((uintptr_t)this + 0x448);
}
float& _Script_Engine::PlayerController::get_LastSpectatorStateSynchTime() {
    return *(float*)((uintptr_t)this + 0x45c);
}
void _Script_Engine::PlayerController::ClientIgnoreLookInput(bool bIgnore) {
    return;
}
bool _Script_Engine::PlayerController::get_bForceFeedbackEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 32 != 0;
}
void* _Script_Engine::PlayerController::get_LastSpectatorSyncLocation() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_Engine::PlayerController::get_DefaultMouseCursor() {
    return (void*)((uintptr_t)this + 0x5b8);
}
void* _Script_Engine::PlayerController::get_LastSpectatorSyncRotation() {
    return (void*)((uintptr_t)this + 0x46c);
}
void* _Script_Engine::PlayerController::get_ActiveForceFeedbackEffects() {
    return (void*)((uintptr_t)this + 0x498);
}
int32_t& _Script_Engine::PlayerController::get_ClientCap() {
    return *(int32_t*)((uintptr_t)this + 0x478);
}
_Script_Engine::CheatManager*& _Script_Engine::PlayerController::get_CheatManager() {
    return *(_Script_Engine::CheatManager**)((uintptr_t)this + 0x480);
}
void* _Script_Engine::PlayerController::get_CheatClass() {
    return (void*)((uintptr_t)this + 0x488);
}
_Script_Engine::PlayerInput*& _Script_Engine::PlayerController::get_PlayerInput() {
    return *(_Script_Engine::PlayerInput**)((uintptr_t)this + 0x490);
}
bool _Script_Engine::PlayerController::get_bPlayerIsWaiting() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 16 != 0;
}
void _Script_Engine::PlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD) {
    return;
}
void* _Script_Engine::PlayerController::get_LastCompletedSeamlessTravelCount() {
    return (void*)((uintptr_t)this + 0x5c2);
}
void* _Script_Engine::PlayerController::get_NetPlayerIndex() {
    return (void*)((uintptr_t)this + 0x51c);
}
float& _Script_Engine::PlayerController::get_ForceFeedbackPcDualshockLargeRightScale() {
    return *(float*)((uintptr_t)this + 0x598);
}
_Script_Engine::NetConnection*& _Script_Engine::PlayerController::get_PendingSwapConnection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x558);
}
_Script_Engine::NetConnection*& _Script_Engine::PlayerController::get_NetConnection() {
    return *(_Script_Engine::NetConnection**)((uintptr_t)this + 0x560);
}
bool _Script_Engine::PlayerController::get_bShouldPerformFullTickWhenPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x640 + 0)) & 4 != 0;
}
bool _Script_Engine::PlayerController::CanRestartPlayer() {
    return;
}
float& _Script_Engine::PlayerController::get_InputYawScale() {
    return *(float*)((uintptr_t)this + 0x574);
}
bool _Script_Engine::PlayerController::get_bIsLocalPlayerController() {
    return (*(uint8_t*)((uintptr_t)this + 0x6bc + 0)) & 1 != 0;
}
float& _Script_Engine::PlayerController::get_ForceFeedbackSmallRightScale() {
    return *(float*)((uintptr_t)this + 0x590);
}
float& _Script_Engine::PlayerController::get_InputRollScale() {
    return *(float*)((uintptr_t)this + 0x57c);
}
bool _Script_Engine::PlayerController::get_bShowMouseCursor() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 1 != 0;
}
float& _Script_Engine::PlayerController::get_ForceFeedbackLargeRightScale() {
    return *(float*)((uintptr_t)this + 0x588);
}
bool _Script_Engine::PlayerController::get_bEnableClickEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 2 != 0;
}
void _Script_Engine::PlayerController::set_bEnableClickEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::PlayerController::set_bEnableTouchEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::PlayerController::get_ForceFeedbackSmallLeftScale() {
    return *(float*)((uintptr_t)this + 0x594);
}
bool _Script_Engine::PlayerController::get_bEnableMouseOverEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 8 != 0;
}
bool _Script_Engine::PlayerController::get_bEnableTouchOverEvents() {
    return (*(uint8_t*)((uintptr_t)this + 0x580 + 0)) & 16 != 0;
}
void _Script_Engine::PlayerController::set_bEnableTouchOverEvents(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::PlayerController::set_bForceFeedbackEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x580 + 0);
    *(uint8_t*)((uintptr_t)this + 0x580 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::PlayerController::ClientReturnToMainMenu(void* ReturnReason) {
    return;
}
float& _Script_Engine::PlayerController::get_ForceFeedbackScale() {
    return *(float*)((uintptr_t)this + 0x584);
}
float& _Script_Engine::PlayerController::get_ForceFeedbackLargeLeftScale() {
    return *(float*)((uintptr_t)this + 0x58c);
}
float& _Script_Engine::PlayerController::get_ForceFeedbackPcDualshockSmallRightScale() {
    return *(float*)((uintptr_t)this + 0x5a0);
}
_Script_Engine::SpectatorPawn*& _Script_Engine::PlayerController::get_SpectatorPawn() {
    return *(_Script_Engine::SpectatorPawn**)((uintptr_t)this + 0x6b0);
}
float& _Script_Engine::PlayerController::get_ForceFeedbackPcDualshockSmallLeftScale() {
    return *(float*)((uintptr_t)this + 0x5a4);
}
void _Script_Engine::PlayerController::ClientSpawnCameraLensEffect(void* LensEffectEmitterClass) {
    return;
}
void* _Script_Engine::PlayerController::get_ClickEventKeys() {
    return (void*)((uintptr_t)this + 0x5a8);
}
float& _Script_Engine::PlayerController::get_HitResultTraceDistance() {
    return *(float*)((uintptr_t)this + 0x5bc);
}
void* _Script_Engine::PlayerController::get_CurrentMouseCursor() {
    return (void*)((uintptr_t)this + 0x5b9);
}
void* _Script_Engine::PlayerController::get_SeamlessTravelCount() {
    return (void*)((uintptr_t)this + 0x5c0);
}
_Script_Engine::InputComponent*& _Script_Engine::PlayerController::get_InactiveStateInputComponent() {
    return *(_Script_Engine::InputComponent**)((uintptr_t)this + 0x638);
}
void _Script_Engine::PlayerController::set_bShouldPerformFullTickWhenPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x640 + 0);
    *(uint8_t*)((uintptr_t)this + 0x640 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::TouchInterface*& _Script_Engine::PlayerController::get_CurrentTouchInterface() {
    return *(_Script_Engine::TouchInterface**)((uintptr_t)this + 0x658);
}
void _Script_Engine::PlayerController::set_bIsLocalPlayerController(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x6bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::PlayerController::get_SpawnLocation() {
    return (void*)((uintptr_t)this + 0x6c0);
}
_Script_CoreUObject::Class* _Script_Engine::PlayerController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.PlayerController");
    return result;
}
void _Script_Engine::PlayerController::ClientFlushLevelStreaming() {
    return;
}
bool _Script_Engine::PlayerController::WasInputKeyJustReleased(_Script_InputCore::Key Key) {
    return;
}
bool _Script_Engine::PlayerController::WasInputKeyJustPressed(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::PlayerController::ToggleSpeaking(bool bInSpeaking) {
    return;
}
void _Script_Engine::PlayerController::StopHapticEffect(void* Hand) {
    return;
}
void _Script_Engine::PlayerController::StartFire(void* FireModeNum) {
    return;
}
void _Script_Engine::PlayerController::SetVirtualJoystickVisibility(bool bVisible) {
    return;
}
void _Script_Engine::PlayerController::SetViewTargetWithBlend(_Script_Engine::Actor* NewViewTarget, float BlendTime, void* BlendFunc, float BlendExp, bool bLockOutgoing) {
    return;
}
void _Script_Engine::PlayerController::SetName(void* S) {
    return;
}
void _Script_Engine::PlayerController::SetMouseLocation(int32_t X, int32_t Y) {
    return;
}
void _Script_Engine::PlayerController::SetMouseCursorWidget(void* Cursor, _Script_UMG::UserWidget* CursorWidget) {
    return;
}
void _Script_Engine::PlayerController::SetHapticsByValue(float Frequency, float Amplitude, void* Hand) {
    return;
}
void _Script_Engine::PlayerController::SetDisableHaptics(bool bNewDisabled) {
    return;
}
void _Script_Engine::PlayerController::ClientMutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId) {
    return;
}
void _Script_Engine::PlayerController::SetControllerLightColor(_Script_CoreUObject::Color Color) {
    return;
}
void _Script_Engine::PlayerController::SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning) {
    return;
}
void _Script_Engine::PlayerController::SetAudioListenerOverride(_Script_Engine::SceneComponent* AttachToComponent, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation) {
    return;
}
void _Script_Engine::PlayerController::SetAudioListenerAttenuationOverride(_Script_Engine::SceneComponent* AttachToComponent, _Script_CoreUObject::Vector AttenuationLocationOVerride) {
    return;
}
void _Script_Engine::PlayerController::AddYawInput(float Val) {
    return;
}
void _Script_Engine::PlayerController::ServerViewSelf(_Script_Engine::ViewTargetTransitionParams TransitionParams) {
    return;
}
void _Script_Engine::PlayerController::ClientSetBlockOnAsyncLoading() {
    return;
}
void _Script_Engine::PlayerController::ServerViewPrevPlayer() {
    return;
}
void _Script_Engine::PlayerController::ServerViewNextPlayer() {
    return;
}
void _Script_Engine::PlayerController::ServerVerifyViewTarget() {
    return;
}
void _Script_Engine::PlayerController::ServerUpdateMultipleLevelsVisibility(void*& LevelVisibilities) {
    return;
}
void _Script_Engine::PlayerController::ServerUpdateLevelVisibility(void* PackageName, bool bIsVisible) {
    return;
}
void _Script_Engine::PlayerController::ServerUpdateCamera(_Script_Engine::Vector_NetQuantize CamLoc, int32_t CamPitchAndYaw) {
    return;
}
void _Script_Engine::PlayerController::ClientPlayCameraAnim(_Script_Engine::CameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, void* Space, _Script_CoreUObject::Rotator CustomPlaySpace) {
    return;
}
void _Script_Engine::PlayerController::ServerUnmutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId) {
    return;
}
void _Script_Engine::PlayerController::ServerToggleAILogging() {
    return;
}
void _Script_Engine::PlayerController::ServerShortTimeout() {
    return;
}
void _Script_Engine::PlayerController::ServerSetSpectatorWaiting(bool bWaiting) {
    return;
}
void _Script_Engine::PlayerController::ServerSetSpectatorLocation(_Script_CoreUObject::Vector NewLoc, _Script_CoreUObject::Rotator NewRot) {
    return;
}
void _Script_Engine::PlayerController::ServerRestartPlayer() {
    return;
}
void _Script_Engine::PlayerController::ServerPause() {
    return;
}
void _Script_Engine::PlayerController::ServerNotifyLoadedWorld(void* WorldPackageName) {
    return;
}
void _Script_Engine::PlayerController::ServerMutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId) {
    return;
}
void _Script_Engine::PlayerController::ServerCheckClientPossessionReliable() {
    return;
}
void _Script_Engine::PlayerController::ServerCheckClientPossession() {
    return;
}
void _Script_Engine::PlayerController::ServerChangeName(void* S) {
    return;
}
void _Script_Engine::PlayerController::ServerCamera(void* newMode) {
    return;
}
void _Script_Engine::PlayerController::ServerAcknowledgePossession(_Script_Engine::Pawn* P) {
    return;
}
void _Script_Engine::PlayerController::SendToConsole(void* Command) {
    return;
}
void _Script_Engine::PlayerController::RestartLevel() {
    return;
}
void _Script_Engine::PlayerController::ResetAllForceFeedback() {
    return;
}
bool _Script_Engine::PlayerController::ProjectWorldLocationToScreen(_Script_CoreUObject::Vector WorldLocation, _Script_CoreUObject::Vector2D& ScreenLocation, bool bPlayerViewportRelative) {
    return;
}
void _Script_Engine::PlayerController::PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, void* Action, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
void _Script_Engine::PlayerController::Pause() {
    return;
}
void _Script_Engine::PlayerController::OnServerStartedVisualLogger(bool bIsLogging) {
    return;
}
void _Script_Engine::PlayerController::OnFinishedLoadWorld(void* WorldLoadType) {
    return;
}
void _Script_Engine::PlayerController::OnBeginLoadWorld(void* WorldLoadType) {
    return;
}
bool _Script_Engine::PlayerController::IsInputKeyDown(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::PlayerController::GetViewportSize(int32_t& SizeX, int32_t& SizeY) {
    return;
}
_Script_Engine::SpectatorPawn* _Script_Engine::PlayerController::GetSpectatorPawn() {
    return;
}
void _Script_Engine::PlayerController::GetRawInputAnalogStickState(void* WhichStick, float& StickX, float& StickY) {
    return;
}
bool _Script_Engine::PlayerController::GetMousePosition(float& LocationX, float& LocationY) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PlayerController::GetInputVectorKeyState(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::PlayerController::GetInputTouchState(void* FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed) {
    return;
}
void _Script_Engine::PlayerController::GetInputMouseDelta(float& DeltaX, float& DeltaY) {
    return;
}
void _Script_Engine::PlayerController::GetInputMotionState(_Script_CoreUObject::Vector& Tilt, _Script_CoreUObject::Vector& RotationRate, _Script_CoreUObject::Vector& Gravity, _Script_CoreUObject::Vector& Acceleration) {
    return;
}
float _Script_Engine::PlayerController::GetInputKeyTimeDown(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::PlayerController::GetInputAnalogStickState(void* WhichStick, float& StickX, float& StickY) {
    return;
}
float _Script_Engine::PlayerController::GetInputAnalogKeyState(_Script_InputCore::Key Key) {
    return;
}
_Script_Engine::HUD* _Script_Engine::PlayerController::GetHUD() {
    return;
}
bool _Script_Engine::PlayerController::GetHitResultUnderFingerForObjects(void* FingerIndex, void*& ObjectTypes, bool bTraceComplex, _Script_Engine::HitResult& HitResult) {
    return;
}
bool _Script_Engine::PlayerController::GetHitResultUnderFingerByChannel(void* FingerIndex, void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult) {
    return;
}
bool _Script_Engine::PlayerController::GetHitResultUnderFinger(void* FingerIndex, void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult) {
    return;
}
bool _Script_Engine::PlayerController::GetHitResultUnderCursorForObjects(void*& ObjectTypes, bool bTraceComplex, _Script_Engine::HitResult& HitResult) {
    return;
}
bool _Script_Engine::PlayerController::GetHitResultUnderCursorByChannel(void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult) {
    return;
}
void _Script_Engine::PlayerController::ClientPrestreamTextures(_Script_Engine::Actor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups) {
    return;
}
bool _Script_Engine::PlayerController::GetHitResultUnderCursor(void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::PlayerController::GetFocalLocation() {
    return;
}
void _Script_Engine::PlayerController::FOV(float NewFOV) {
    return;
}
void _Script_Engine::PlayerController::EnableCheats() {
    return;
}
bool _Script_Engine::PlayerController::DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, _Script_CoreUObject::Vector& WorldLocation, _Script_CoreUObject::Vector& WorldDirection) {
    return;
}
bool _Script_Engine::PlayerController::DeprojectMousePositionToWorld(_Script_CoreUObject::Vector& WorldLocation, _Script_CoreUObject::Vector& WorldDirection) {
    return;
}
void _Script_Engine::PlayerController::ConsoleKey(_Script_InputCore::Key Key) {
    return;
}
void _Script_Engine::PlayerController::ClientWasKicked(void*& KickReason) {
    return;
}
void _Script_Engine::PlayerController::ClientVoiceHandshakeComplete() {
    return;
}
void _Script_Engine::PlayerController::ClientUnmutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId) {
    return;
}
void _Script_Engine::PlayerController::ClientTeamMessage(_Script_Engine::PlayerState* SenderPlayerState, void* S, void* Type, float MsgLifeTime) {
    return;
}
void _Script_Engine::PlayerController::ClientAddTextureStreamingLoc(_Script_CoreUObject::Vector InLoc, float Duration, bool bOverrideLocation) {
    return;
}
void _Script_Engine::PlayerController::ClientStopForceFeedback(_Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, void* Tag) {
    return;
}
void _Script_Engine::PlayerController::ClientStopCameraShake(void* Shake, bool bImmediately) {
    return;
}
void _Script_Engine::PlayerController::ClientStopCameraAnim(_Script_Engine::CameraAnim* AnimToStop) {
    return;
}
void _Script_Engine::PlayerController::ClientStartOnlineSession() {
    return;
}
void _Script_Engine::PlayerController::ClientSetViewTarget(_Script_Engine::Actor* A, _Script_Engine::ViewTargetTransitionParams TransitionParams) {
    return;
}
void _Script_Engine::PlayerController::ClientSetSpectatorWaiting(bool bWaiting) {
    return;
}
void _Script_Engine::PlayerController::ClientSetHUD(void* NewHUDClass) {
    return;
}
void _Script_Engine::PlayerController::ClientSetForceMipLevelsToBeResident(_Script_Engine::MaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups) {
    return;
}
void _Script_Engine::PlayerController::ClientSetCameraMode(void* NewCamMode) {
    return;
}
void _Script_Engine::PlayerController::ClientSetCameraFade(bool bEnableFading, _Script_CoreUObject::Color FadeColor, _Script_CoreUObject::Vector2D FadeAlpha, float FadeTime, bool bFadeAudio) {
    return;
}
void _Script_Engine::PlayerController::ClientReturnToMainMenuWithTextReason(void*& ReturnReason) {
    return;
}
void _Script_Engine::PlayerController::ClientRetryClientRestart(_Script_Engine::Pawn* NewPawn) {
    return;
}
void _Script_Engine::PlayerController::ClientRestart(_Script_Engine::Pawn* NewPawn) {
    return;
}
void _Script_Engine::PlayerController::ClientReset() {
    return;
}
void _Script_Engine::PlayerController::ClientRepObjRef(_Script_CoreUObject::Object* Object) {
    return;
}
void _Script_Engine::PlayerController::ClientReceiveLocalizedMessage(void* Message, int32_t Switch, _Script_Engine::PlayerState* RelatedPlayerState_1, _Script_Engine::PlayerState* RelatedPlayerState_2, _Script_CoreUObject::Object* OptionalObject) {
    return;
}
void _Script_Engine::PlayerController::ClientPlaySoundAtLocation(_Script_Engine::SoundBase* Sound, _Script_CoreUObject::Vector Location, float VolumeMultiplier, float PitchMultiplier) {
    return;
}
void _Script_Engine::PlayerController::ClientPlaySound(_Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier) {
    return;
}
void _Script_Engine::PlayerController::ClientPlayForceFeedback(_Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, void* Tag) {
    return;
}
void _Script_Engine::PlayerController::ClientPlayCameraShake(void* Shake, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot) {
    return;
}
void _Script_Engine::PlayerController::ClientMessage(void* S, void* Type, float MsgLifeTime) {
    return;
}
void _Script_Engine::PlayerController::ClientIgnoreMoveInput(bool bIgnore) {
    return;
}
void _Script_Engine::PlayerController::ClientGotoState(void* NewState) {
    return;
}
void _Script_Engine::PlayerController::ClientGameEnded(_Script_Engine::Actor* EndGameFocus, bool bIsWinner) {
    return;
}
void _Script_Engine::PlayerController::ClientEndOnlineSession() {
    return;
}
void _Script_Engine::PlayerController::ClientEnableNetworkVoice(bool bEnable) {
    return;
}
void _Script_Engine::PlayerController::ClientCapBandwidth(int32_t Cap) {
    return;
}
void _Script_Engine::PlayerController::ClearAudioListenerOverride() {
    return;
}
void _Script_Engine::PlayerController::ClearAudioListenerAttenuationOverride() {
    return;
}
void _Script_Engine::PlayerController::Camera(void* newMode) {
    return;
}
void _Script_Engine::PlayerController::AddRollInput(float Val) {
    return;
}
void _Script_Engine::PlayerController::AddPitchInput(float Val) {
    return;
}
void _Script_Engine::PlayerController::ActivateTouchInterface(_Script_Engine::TouchInterface* NewTouchInterface) {
    return;
}
