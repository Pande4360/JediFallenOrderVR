#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Texture;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_HeadMountedDisplay {
struct XRDeviceId;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct HeadMountedDisplayFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UpdateExternalTrackingHMDPosition(_Script_CoreUObject::Transform& ExternalTrackingTransform);
    void SetWorldToMetersScale(_Script_CoreUObject::Object* WorldContext, float NewScale);
    void SetTrackingOrigin(void* origin);
    void SetSpectatorScreenTexture(_Script_Engine::Texture* InTexture);
    void SetSpectatorScreenModeTexturePlusEyeLayout(_Script_CoreUObject::Vector2D EyeRectMin, _Script_CoreUObject::Vector2D EyeRectMax, _Script_CoreUObject::Vector2D TextureRectMin, _Script_CoreUObject::Vector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha);
    void SetSpectatorScreenMode(void* Mode);
    void SetClippingPlanes(float Near, float Far);
    void ResetOrientationAndPosition(float Yaw, void* Options);
    bool IsSpectatorScreenModeControllable();
    bool IsInLowPersistenceMode();
    bool IsHeadMountedDisplayEnabled();
    bool IsHeadMountedDisplayConnected();
    bool IsDeviceTracking(_Script_HeadMountedDisplay::XRDeviceId& XRDeviceId);
    bool HasValidTrackingPosition();
    float GetWorldToMetersScale(_Script_CoreUObject::Object* WorldContext);
    void GetVRFocusState(bool& bUseFocus, bool& bHasFocus);
    _Script_CoreUObject::Transform GetTrackingToWorldTransform(_Script_CoreUObject::Object* WorldContext);
    void GetTrackingSensorParameters(_Script_CoreUObject::Vector& origin, _Script_CoreUObject::Rotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index);
    void* GetTrackingOrigin();
    float GetScreenPercentage();
    void GetPositionalTrackingCameraParameters(_Script_CoreUObject::Vector& CameraOrigin, _Script_CoreUObject::Rotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane);
    float GetPixelDensity();
    void GetOrientationAndPosition(_Script_CoreUObject::Rotator& DeviceRotation, _Script_CoreUObject::Vector& DevicePosition);
    int32_t GetNumOfTrackingSensors();
    void* GetHMDWornState();
    void* GetHMDDeviceName();
    void GetDeviceWorldPose(_Script_CoreUObject::Object* WorldContext, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool& bIsTracked, _Script_CoreUObject::Rotator& Orientation, bool& bHasPositionalTracking, _Script_CoreUObject::Vector& Position);
    void GetDevicePose(_Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool& bIsTracked, _Script_CoreUObject::Rotator& Orientation, bool& bHasPositionalTracking, _Script_CoreUObject::Vector& Position);
    void* EnumerateTrackedDevices(void* SystemId, void* DeviceType);
    void EnableLowPersistenceMode(bool bEnable);
    bool EnableHMD(bool bEnable);
    void CalibrateExternalTrackingToHMD(_Script_CoreUObject::Transform& ExternalTrackingTransform);
}; // Size: 0x28
#pragma pack(pop)
}
