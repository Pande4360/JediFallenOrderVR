#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Color.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Controller.hpp"
#include "LatentActionInfo.hpp"
#include "UniqueNetIdRepl.hpp"
#include "Vector_NetQuantize.hpp"
#include "ViewTargetTransitionParams.hpp"
#include "..\_Script_InputCore\Key.hpp"
namespace _Script_Engine {
struct HUD;
}
namespace _Script_Engine {
struct Player;
}
namespace _Script_Engine {
struct NetConnection;
}
namespace _Script_Engine {
struct PlayerInput;
}
namespace _Script_UMG {
struct UserWidget;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct CheatManager;
}
namespace _Script_Engine {
struct TouchInterface;
}
namespace _Script_Engine {
struct InterpTrackInstDirector;
}
namespace _Script_Engine {
struct PlayerCameraManager;
}
namespace _Script_Engine {
struct InputComponent;
}
namespace _Script_Engine {
struct SpectatorPawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct HapticFeedbackEffect_Base;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct ForceFeedbackEffect;
}
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerController : public Controller {
    private: char pad_3e0[0x2f0]; public:
    _Script_Engine::Player*& get_Player();
    _Script_Engine::Pawn*& get_AcknowledgedPawn();
    _Script_Engine::InterpTrackInstDirector*& get_ControllingDirTrackInst();
    _Script_Engine::HUD*& get_MyHUD();
    _Script_Engine::PlayerCameraManager*& get_PlayerCameraManager();
    void* get_PlayerCameraManagerClass();
    bool get_bAutoManageActiveCameraTarget();
    void set_bAutoManageActiveCameraTarget(bool value);
    void* get_TargetViewRotation();
    float& get_SmoothTargetViewRotationSpeed();
    void* get_HiddenActors();
    void* get_HiddenPrimitiveComponents();
    float& get_LastSpectatorStateSynchTime();
    void* get_LastSpectatorSyncLocation();
    void* get_LastSpectatorSyncRotation();
    int32_t& get_ClientCap();
    _Script_Engine::CheatManager*& get_CheatManager();
    void* get_CheatClass();
    _Script_Engine::PlayerInput*& get_PlayerInput();
    void* get_ActiveForceFeedbackEffects();
    bool get_bPlayerIsWaiting();
    void set_bPlayerIsWaiting(bool value);
    void* get_NetPlayerIndex();
    _Script_Engine::NetConnection*& get_PendingSwapConnection();
    _Script_Engine::NetConnection*& get_NetConnection();
    float& get_InputYawScale();
    float& get_InputPitchScale();
    float& get_InputRollScale();
    bool get_bShowMouseCursor();
    void set_bShowMouseCursor(bool value);
    bool get_bEnableClickEvents();
    void set_bEnableClickEvents(bool value);
    bool get_bEnableTouchEvents();
    void set_bEnableTouchEvents(bool value);
    bool get_bEnableMouseOverEvents();
    void set_bEnableMouseOverEvents(bool value);
    bool get_bEnableTouchOverEvents();
    void set_bEnableTouchOverEvents(bool value);
    bool get_bForceFeedbackEnabled();
    void set_bForceFeedbackEnabled(bool value);
    float& get_ForceFeedbackScale();
    float& get_ForceFeedbackLargeRightScale();
    float& get_ForceFeedbackLargeLeftScale();
    float& get_ForceFeedbackSmallRightScale();
    float& get_ForceFeedbackSmallLeftScale();
    float& get_ForceFeedbackPcDualshockLargeRightScale();
    float& get_ForceFeedbackPcDualshockLargeLeftScale();
    float& get_ForceFeedbackPcDualshockSmallRightScale();
    float& get_ForceFeedbackPcDualshockSmallLeftScale();
    void* get_ClickEventKeys();
    void* get_DefaultMouseCursor();
    void* get_CurrentMouseCursor();
    void* get_DefaultClickTraceChannel();
    void* get_CurrentClickTraceChannel();
    float& get_HitResultTraceDistance();
    void* get_SeamlessTravelCount();
    void* get_LastCompletedSeamlessTravelCount();
    _Script_Engine::InputComponent*& get_InactiveStateInputComponent();
    bool get_bShouldPerformFullTickWhenPaused();
    void set_bShouldPerformFullTickWhenPaused(bool value);
    _Script_Engine::TouchInterface*& get_CurrentTouchInterface();
    _Script_Engine::SpectatorPawn*& get_SpectatorPawn();
    bool get_bIsLocalPlayerController();
    void set_bIsLocalPlayerController(bool value);
    void* get_SpawnLocation();
    static _Script_CoreUObject::Class* static_class();
    bool WasInputKeyJustReleased(_Script_InputCore::Key Key);
    bool WasInputKeyJustPressed(_Script_InputCore::Key Key);
    void ToggleSpeaking(bool bInSpeaking);
    void StopHapticEffect(void* Hand);
    void StartFire(void* FireModeNum);
    void SetVirtualJoystickVisibility(bool bVisible);
    void SetViewTargetWithBlend(_Script_Engine::Actor* NewViewTarget, float BlendTime, void* BlendFunc, float BlendExp, bool bLockOutgoing);
    void SetName(void* S);
    void SetMouseLocation(int32_t X, int32_t Y);
    void SetMouseCursorWidget(void* Cursor, _Script_UMG::UserWidget* CursorWidget);
    void SetHapticsByValue(float Frequency, float Amplitude, void* Hand);
    void SetDisableHaptics(bool bNewDisabled);
    void SetControllerLightColor(_Script_CoreUObject::Color Color);
    void SetCinematicMode(bool bInCinematicMode, bool bHidePlayer, bool bAffectsHUD, bool bAffectsMovement, bool bAffectsTurning);
    void SetAudioListenerOverride(_Script_Engine::SceneComponent* AttachToComponent, _Script_CoreUObject::Vector Location, _Script_CoreUObject::Rotator Rotation);
    void SetAudioListenerAttenuationOverride(_Script_Engine::SceneComponent* AttachToComponent, _Script_CoreUObject::Vector AttenuationLocationOVerride);
    void ServerViewSelf(_Script_Engine::ViewTargetTransitionParams TransitionParams);
    void ServerViewPrevPlayer();
    void ServerViewNextPlayer();
    void ServerVerifyViewTarget();
    void ServerUpdateMultipleLevelsVisibility(void*& LevelVisibilities);
    void ServerUpdateLevelVisibility(void* PackageName, bool bIsVisible);
    void ServerUpdateCamera(_Script_Engine::Vector_NetQuantize CamLoc, int32_t CamPitchAndYaw);
    void ServerUnmutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId);
    void ServerToggleAILogging();
    void ServerShortTimeout();
    void ServerSetSpectatorWaiting(bool bWaiting);
    void ServerSetSpectatorLocation(_Script_CoreUObject::Vector NewLoc, _Script_CoreUObject::Rotator NewRot);
    void ServerRestartPlayer();
    void ServerPause();
    void ServerNotifyLoadedWorld(void* WorldPackageName);
    void ServerMutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId);
    void ServerCheckClientPossessionReliable();
    void ServerCheckClientPossession();
    void ServerChangeName(void* S);
    void ServerCamera(void* newMode);
    void ServerAcknowledgePossession(_Script_Engine::Pawn* P);
    void SendToConsole(void* Command);
    void RestartLevel();
    void ResetAllForceFeedback();
    bool ProjectWorldLocationToScreen(_Script_CoreUObject::Vector WorldLocation, _Script_CoreUObject::Vector2D& ScreenLocation, bool bPlayerViewportRelative);
    void PlayHapticEffect(_Script_Engine::HapticFeedbackEffect_Base* HapticEffect, void* Hand, float Scale, bool bLoop);
    void PlayDynamicForceFeedback(float Intensity, float Duration, bool bAffectsLeftLarge, bool bAffectsLeftSmall, bool bAffectsRightLarge, bool bAffectsRightSmall, void* Action, _Script_Engine::LatentActionInfo LatentInfo);
    void Pause();
    void OnServerStartedVisualLogger(bool bIsLogging);
    void OnFinishedLoadWorld(void* WorldLoadType);
    void OnBeginLoadWorld(void* WorldLoadType);
    bool IsInputKeyDown(_Script_InputCore::Key Key);
    void GetViewportSize(int32_t& SizeX, int32_t& SizeY);
    _Script_Engine::SpectatorPawn* GetSpectatorPawn();
    void GetRawInputAnalogStickState(void* WhichStick, float& StickX, float& StickY);
    bool GetMousePosition(float& LocationX, float& LocationY);
    _Script_CoreUObject::Vector GetInputVectorKeyState(_Script_InputCore::Key Key);
    void GetInputTouchState(void* FingerIndex, float& LocationX, float& LocationY, bool& bIsCurrentlyPressed);
    void GetInputMouseDelta(float& DeltaX, float& DeltaY);
    void GetInputMotionState(_Script_CoreUObject::Vector& Tilt, _Script_CoreUObject::Vector& RotationRate, _Script_CoreUObject::Vector& Gravity, _Script_CoreUObject::Vector& Acceleration);
    float GetInputKeyTimeDown(_Script_InputCore::Key Key);
    void GetInputAnalogStickState(void* WhichStick, float& StickX, float& StickY);
    float GetInputAnalogKeyState(_Script_InputCore::Key Key);
    _Script_Engine::HUD* GetHUD();
    bool GetHitResultUnderFingerForObjects(void* FingerIndex, void*& ObjectTypes, bool bTraceComplex, _Script_Engine::HitResult& HitResult);
    bool GetHitResultUnderFingerByChannel(void* FingerIndex, void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult);
    bool GetHitResultUnderFinger(void* FingerIndex, void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult);
    bool GetHitResultUnderCursorForObjects(void*& ObjectTypes, bool bTraceComplex, _Script_Engine::HitResult& HitResult);
    bool GetHitResultUnderCursorByChannel(void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult);
    bool GetHitResultUnderCursor(void* TraceChannel, bool bTraceComplex, _Script_Engine::HitResult& HitResult);
    _Script_CoreUObject::Vector GetFocalLocation();
    void FOV(float NewFOV);
    void EnableCheats();
    bool DeprojectScreenPositionToWorld(float ScreenX, float ScreenY, _Script_CoreUObject::Vector& WorldLocation, _Script_CoreUObject::Vector& WorldDirection);
    bool DeprojectMousePositionToWorld(_Script_CoreUObject::Vector& WorldLocation, _Script_CoreUObject::Vector& WorldDirection);
    void ConsoleKey(_Script_InputCore::Key Key);
    void ClientWasKicked(void*& KickReason);
    void ClientVoiceHandshakeComplete();
    void ClientUnmutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId);
    void ClientTeamMessage(_Script_Engine::PlayerState* SenderPlayerState, void* S, void* Type, float MsgLifeTime);
    void ClientStopForceFeedback(_Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, void* Tag);
    void ClientStopCameraShake(void* Shake, bool bImmediately);
    void ClientStopCameraAnim(_Script_Engine::CameraAnim* AnimToStop);
    void ClientStartOnlineSession();
    void ClientSpawnCameraLensEffect(void* LensEffectEmitterClass);
    void ClientSetViewTarget(_Script_Engine::Actor* A, _Script_Engine::ViewTargetTransitionParams TransitionParams);
    void ClientSetSpectatorWaiting(bool bWaiting);
    void ClientSetHUD(void* NewHUDClass);
    void ClientSetForceMipLevelsToBeResident(_Script_Engine::MaterialInterface* Material, float ForceDuration, int32_t CinematicTextureGroups);
    void ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD);
    void ClientSetCameraMode(void* NewCamMode);
    void ClientSetCameraFade(bool bEnableFading, _Script_CoreUObject::Color FadeColor, _Script_CoreUObject::Vector2D FadeAlpha, float FadeTime, bool bFadeAudio);
    void ClientSetBlockOnAsyncLoading();
    void ClientReturnToMainMenuWithTextReason(void*& ReturnReason);
    void ClientReturnToMainMenu(void* ReturnReason);
    void ClientRetryClientRestart(_Script_Engine::Pawn* NewPawn);
    void ClientRestart(_Script_Engine::Pawn* NewPawn);
    void ClientReset();
    void ClientRepObjRef(_Script_CoreUObject::Object* Object);
    void ClientReceiveLocalizedMessage(void* Message, int32_t Switch, _Script_Engine::PlayerState* RelatedPlayerState_1, _Script_Engine::PlayerState* RelatedPlayerState_2, _Script_CoreUObject::Object* OptionalObject);
    void ClientPrestreamTextures(_Script_Engine::Actor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32_t CinematicTextureGroups);
    void ClientPlaySoundAtLocation(_Script_Engine::SoundBase* Sound, _Script_CoreUObject::Vector Location, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlaySound(_Script_Engine::SoundBase* Sound, float VolumeMultiplier, float PitchMultiplier);
    void ClientPlayForceFeedback(_Script_Engine::ForceFeedbackEffect* ForceFeedbackEffect, bool bLooping, bool bIgnoreTimeDilation, void* Tag);
    void ClientPlayCameraShake(void* Shake, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot);
    void ClientPlayCameraAnim(_Script_Engine::CameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, void* Space, _Script_CoreUObject::Rotator CustomPlaySpace);
    void ClientMutePlayer(_Script_Engine::UniqueNetIdRepl PlayerId);
    void ClientMessage(void* S, void* Type, float MsgLifeTime);
    void ClientIgnoreMoveInput(bool bIgnore);
    void ClientIgnoreLookInput(bool bIgnore);
    void ClientGotoState(void* NewState);
    void ClientGameEnded(_Script_Engine::Actor* EndGameFocus, bool bIsWinner);
    void ClientForceGarbageCollection();
    void ClientFlushLevelStreaming();
    void ClientEndOnlineSession();
    void ClientEnableNetworkVoice(bool bEnable);
    void ClientClearCameraLensEffects();
    void ClientCapBandwidth(int32_t Cap);
    void ClientAddTextureStreamingLoc(_Script_CoreUObject::Vector InLoc, float Duration, bool bOverrideLocation);
    void ClearAudioListenerOverride();
    void ClearAudioListenerAttenuationOverride();
    bool CanRestartPlayer();
    void Camera(void* newMode);
    void AddYawInput(float Val);
    void AddRollInput(float Val);
    void AddPitchInput(float Val);
    void ActivateTouchInterface(_Script_Engine::TouchInterface* NewTouchInterface);
}; // Size: 0x6d0
#pragma pack(pop)
}
