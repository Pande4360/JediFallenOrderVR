#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct MinimalViewInfo;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CameraComponent : public SceneComponent {
    private: char pad_2d0[0x590]; public:
    float& get_FieldOfView();
    float& get_OrthoWidth();
    float& get_OrthoNearClipPlane();
    float& get_OrthoFarClipPlane();
    float& get_AspectRatio();
    void* get_OffCenterProjectionOffset();
    bool get_bConstrainAspectRatio();
    void set_bConstrainAspectRatio(bool value);
    bool get_bUseFieldOfViewForLOD();
    void set_bUseFieldOfViewForLOD(bool value);
    bool get_bLockToHmd();
    void set_bLockToHmd(bool value);
    bool get_bUsePawnControlRotation();
    void set_bUsePawnControlRotation(bool value);
    void* get_ProjectionMode();
    float& get_PostProcessBlendWeight();
    void* get_PostProcessSettings();
    static _Script_CoreUObject::Class* static_class();
    void SetUseFieldOfViewForLOD(bool bInUseFieldOfViewForLOD);
    void SetProjectionMode(void* InProjectionMode);
    void SetPostProcessBlendWeight(float InPostProcessBlendWeight);
    void SetOrthoWidth(float InOrthoWidth);
    void SetOrthoNearClipPlane(float InOrthoNearClipPlane);
    void SetOrthoFarClipPlane(float InOrthoFarClipPlane);
    void SetOffCenterProjectionOffset(_Script_CoreUObject::Vector2D InOffCenterProjectionOffset);
    void SetFieldOfView(float InFieldOfView);
    void SetConstraintAspectRatio(bool bInConstrainAspectRatio);
    void SetAspectRatio(float InAspectRatio);
    void RemoveBlendable(void* InBlendableObject);
    void GetCameraView(float DeltaTime, _Script_Engine::MinimalViewInfo& DesiredView);
    void AddOrUpdateBlendable(void* InBlendableObject, float InWeight);
}; // Size: 0x860
#pragma pack(pop)
}
