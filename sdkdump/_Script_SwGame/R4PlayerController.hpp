#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerController.hpp"
namespace _Script_SwGame {
struct SwHighlightManager;
}
namespace _Script_RsGameTechRT {
struct RsPostProcessSettingsDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PostProcessSettings;
}
namespace _Script_RsGameTechRT {
struct RsCameraModeSetDefinition;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_RsGameTechRT {
struct RsSplineCameraOrigin;
}
namespace _Script_RsGameTechRT {
struct RsSplineCameraDefinition;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4PlayerController : public _Script_RsGameTechRT::RsPlayerController {
    private: char pad_3610[0x100]; public:
    _Script_SwGame::SwHighlightManager*& get_HighlightManager();
    void* get_OnPlayerLoginChanged();
    void* get_OnAnyPlayerLoginChanged();
    void* get_CustomDeathHandler();
    void* get_SpawnTransform();
    void* get_PostDeathWidgetClass();
    void* get_OnWidgetAddedEvent();
    void* get_OnPlayerResapwnedEvent();
    void* get_PhotoModeControllerClass();
    void* get_SoftCheatClass();
    static _Script_CoreUObject::Class* static_class();
    void UpdatePostProcessEffect(_Script_RsGameTechRT::RsPostProcessSettingsDefinition* PostProcessDefinition, _Script_Engine::PostProcessSettings& UpdatedSettings);
    void TogglePhotomode();
    void ShowButton(_Script_InputCore::Key Button, bool Pulsing);
    void ShowAction(void* Action, bool Pulsing);
    void SetUseLatestSignedInUser(bool UseLatestSignedInUser);
    void SetSpawnTransform(_Script_CoreUObject::Transform& SpawnTrans);
    void SetCustomDeathHandler(void* NewDeathHandler);
    void SetCameraShakeScale(void* Shake, float TargetScale, float ScaleSmoothTime);
    void SetCameraRotation(_Script_CoreUObject::Rotator CameraRotation, bool bRestartCameraMode, float OverrideBlendTimeOnRestart, bool bAllowNonzeroRoll, bool bResetLookInputTime);
    void SetCameraFocusLocation(_Script_CoreUObject::Vector InFocusLocation);
    void SetCameraFocusDirection(_Script_CoreUObject::Vector InFocusDirection);
    void SetCameraFocusActor(_Script_Engine::Actor* InFocusActor, void* FocusSocket, bool bRestartCameraMode, float RestartBlendTimeOverride, void* ForCameraMode);
    void SetCameraDynamicOffsetCS(_Script_CoreUObject::Vector DynamicOffset, _Script_CoreUObject::Rotator DynamicRotationOffset, float OffsetTransitionTime);
    void ResetPawnsToCollideWithCamera();
    void RemovePostProcessEffect(_Script_RsGameTechRT::RsPostProcessSettingsDefinition* PostProcessDefinition, float TransitionOutTime);
    void RemovePawnToCollideWithCamera(_Script_Engine::Pawn* PawnToRemove);
    void RemoveCameraModeSet(_Script_RsGameTechRT::RsCameraModeSetDefinition* ModeSetDefinition);
    void RemoveAllPostProcessEffects();
    void ReenableCameraAutoUpdateOfViewTargetRotation();
    void PhotomodeRightButtonReleased();
    void PhotomodeRightButtonPressed();
    void PhotomodeLeftButtonReleased();
    void PhotomodeLeftButtonPressed();
    void OnPlayerDied(_Script_Engine::Actor* DeathActor);
    void OnLoginChanged(int32_t LocalUserNum);
    void HideButton();
    void HideAction();
    _Script_CoreUObject::Transform GetSpawnTransform();
    _Script_InputCore::Key GetKeyForAction(void* Action);
    _Script_CoreUObject::Vector GetCameraFocusDirection();
    _Script_Engine::Actor* GetActiveSplineCameraOrigin();
    _Script_RsGameTechRT::RsSplineCameraDefinition* GetActiveSplineCameraDefinition();
    void EndSplineCamera(float OverrideBlendTime, _Script_RsGameTechRT::RsSplineCameraDefinition* OptionalSplineCameraToEnd, bool bMaintainBlendOutTimeUntilFinished);
    void DisableCameraAutoUpdateOfViewTargetRotation();
    void ClearCameraFocusActor(void* ForCameraMode);
    void CameraMode_Set(void* ModeName, float BlendTimeOverride, int32_t Priority);
    void CameraMode_Restart(float BlendTimeOverride);
    void CameraMode_Reset(float BlendTime);
    void CameraMode_Push(void* ModeName, float BlendTimeOverride, int32_t Priority);
    void CameraMode_Pop(void* ModeName, float BlendTimeOverride);
    void* CameraMode_Get();
    void ButtonMashSucceed(_Script_InputCore::Key Button);
    void ButtonMashStarted(_Script_InputCore::Key Button);
    void ButtonMashFailed(_Script_InputCore::Key Button);
    void ButtonMashEnded(_Script_InputCore::Key Button);
    void ButtonMashButtonPressed(_Script_InputCore::Key Button);
    void BeginSplineCamera(_Script_RsGameTechRT::RsSplineCameraDefinition* SplineCameraDefinition, void* OverrideModeName, float OverrideBlendTime, void* InitializationMethod);
    void BeginAttachedSplineCamera(_Script_RsGameTechRT::RsSplineCameraOrigin* SplineCameraOrigin, void* OverrideModeName, float OverrideBlendTime, void* InitializationMethod);
    void AddPostProcessEffect(_Script_RsGameTechRT::RsPostProcessSettingsDefinition* PostProcessDefinition, float BlendWeight, float TransitionInTime);
    void AddPawnToCollideWithCamera(_Script_Engine::Pawn* PawnToAdd);
    void AddCameraModeSet(_Script_RsGameTechRT::RsCameraModeSetDefinition* ModeSetDefinition);
}; // Size: 0x3710
#pragma pack(pop)
}
