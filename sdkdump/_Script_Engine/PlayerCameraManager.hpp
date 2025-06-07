#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct CameraShake;
}
namespace _Script_Engine {
struct CameraModifier_CameraShake;
}
namespace _Script_Engine {
struct CameraAnim;
}
namespace _Script_Engine {
struct CameraAnimInst;
}
namespace _Script_Engine {
struct CameraActor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CameraModifier;
}
namespace _Script_Engine {
struct EmitterCameraLensEffectBase;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerCameraManager : public Actor {
    private: char pad_360[0x2270]; public:
    _Script_Engine::PlayerController*& get_PCOwner();
    _Script_Engine::SceneComponent*& get_TransformComponent();
    float& get_DefaultFOV();
    float& get_DefaultOrthoWidth();
    float& get_DefaultAspectRatio();
    void* get_CameraCache();
    void* get_LastFrameCameraCache();
    void* get_ViewTarget();
    void* get_PendingViewTarget();
    void* get_CameraCachePrivate();
    void* get_LastFrameCameraCachePrivate();
    void* get_ModifierList();
    void* get_DefaultModifiers();
    float& get_FreeCamDistance();
    void* get_FreeCamOffset();
    void* get_ViewTargetOffset();
    void* get_CameraLensEffects();
    _Script_Engine::CameraModifier_CameraShake*& get_CachedCameraShakeMod();
    _Script_Engine::CameraAnimInst*& get_AnimInstPool();
    void* get_PostProcessBlendCache();
    void* get_ActiveAnims();
    void* get_FreeAnims();
    _Script_Engine::CameraActor*& get_AnimCameraActor();
    bool get_bIsOrthographic();
    void set_bIsOrthographic(bool value);
    bool get_bDefaultConstrainAspectRatio();
    void set_bDefaultConstrainAspectRatio(bool value);
    bool get_bClientSimulatingViewTarget();
    void set_bClientSimulatingViewTarget(bool value);
    bool get_bUseClientSideCameraUpdates();
    void set_bUseClientSideCameraUpdates(bool value);
    bool get_bGameCameraCutThisFrame();
    void set_bGameCameraCutThisFrame(bool value);
    float& get_ViewPitchMin();
    float& get_ViewPitchMax();
    float& get_ViewYawMin();
    float& get_ViewYawMax();
    float& get_ViewRollMin();
    float& get_ViewRollMax();
    static _Script_CoreUObject::Class* static_class();
    void StopCameraWipe();
    void StopCameraShake(_Script_Engine::CameraShake* ShakeInstance, bool bImmediately);
    void StopCameraFade();
    void StopCameraAnimInst(_Script_Engine::CameraAnimInst* AnimInst, bool bImmediate);
    void StopAllInstancesOfCameraShake(void* Shake, bool bImmediately);
    void StopAllInstancesOfCameraAnim(_Script_Engine::CameraAnim* Anim, bool bImmediate);
    void StopAllCameraShakes(bool bImmediately);
    void StopAllCameraAnims(bool bImmediate);
    void StartCameraFade(float FromAlpha, float ToAlpha, float Duration, _Script_CoreUObject::LinearColor Color, bool bShouldFadeAudio, bool bHoldWhenFinished);
    void SetManualCameraWipe(float InWipeAmount, float InFadeDirection);
    void SetManualCameraFade(float InFadeAmount, _Script_CoreUObject::LinearColor Color, bool bInFadeAudio);
    bool RemoveCameraModifier(_Script_Engine::CameraModifier* ModifierToRemove);
    void RemoveCameraLensEffect(_Script_Engine::EmitterCameraLensEffectBase* Emitter);
    _Script_Engine::CameraShake* PlayCameraShake(void* ShakeClass, float Scale, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot);
    _Script_Engine::CameraAnimInst* PlayCameraAnim(_Script_Engine::CameraAnim* Anim, float Rate, float Scale, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, float Duration, void* PlaySpace, _Script_CoreUObject::Rotator UserPlaySpaceRot);
    void PhotographyCameraModify(_Script_CoreUObject::Vector NewCameraLocation, _Script_CoreUObject::Vector PreviousCameraLocation, _Script_CoreUObject::Vector OriginalCameraLocation, _Script_CoreUObject::Vector& ResultCameraLocation);
    void OnPhotographySessionStart();
    void OnPhotographySessionEnd();
    void OnPhotographyMultiPartCaptureStart();
    void OnPhotographyMultiPartCaptureEnd();
    _Script_Engine::PlayerController* GetOwningPlayerController();
    float GetFOVAngle();
    _Script_CoreUObject::Rotator GetCameraRotation();
    _Script_CoreUObject::Vector GetCameraLocation();
    _Script_Engine::CameraModifier* FindCameraModifierByClass(void* ModifierClass);
    void ClearCameraLensEffects();
    bool BlueprintUpdateCamera(_Script_Engine::Actor* CameraTarget, _Script_CoreUObject::Vector& NewCameraLocation, _Script_CoreUObject::Rotator& NewCameraRotation, float& NewCameraFOV);
    _Script_Engine::CameraModifier* AddNewCameraModifier(void* ModifierClass);
    _Script_Engine::EmitterCameraLensEffectBase* AddCameraLensEffect(void* LensEffectEmitterClass);
}; // Size: 0x25d0
#pragma pack(pop)
}
