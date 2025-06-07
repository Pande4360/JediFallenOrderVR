#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\Texture.hpp"
#include "HeadMountedDisplayFunctionLibrary.hpp"
#include "XRDeviceId.hpp"
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.HeadMountedDisplayFunctionLibrary");
    return result;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::SetClippingPlanes(float Near, float Far) {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::EnableHMD(bool bEnable) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::UpdateExternalTrackingHMDPosition(_Script_CoreUObject::Transform& ExternalTrackingTransform) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::SetTrackingOrigin(void* origin) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::SetWorldToMetersScale(_Script_CoreUObject::Object* WorldContext, float NewScale) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::SetSpectatorScreenModeTexturePlusEyeLayout(_Script_CoreUObject::Vector2D EyeRectMin, _Script_CoreUObject::Vector2D EyeRectMax, _Script_CoreUObject::Vector2D TextureRectMin, _Script_CoreUObject::Vector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetPositionalTrackingCameraParameters(_Script_CoreUObject::Vector& CameraOrigin, _Script_CoreUObject::Rotator& CameraRotation, float& HFOV, float& VFOV, float& CameraDistance, float& NearPlane, float& FarPlane) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::SetSpectatorScreenTexture(_Script_Engine::Texture* InTexture) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::SetSpectatorScreenMode(void* Mode) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::EnableLowPersistenceMode(bool bEnable) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition(float Yaw, void* Options) {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::IsSpectatorScreenModeControllable() {
    return;
}
void* _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetHMDWornState() {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::IsInLowPersistenceMode() {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled() {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected() {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::IsDeviceTracking(_Script_HeadMountedDisplay::XRDeviceId& XRDeviceId) {
    return;
}
bool _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::HasValidTrackingPosition() {
    return;
}
float _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetWorldToMetersScale(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetVRFocusState(bool& bUseFocus, bool& bHasFocus) {
    return;
}
_Script_CoreUObject::Transform _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetTrackingToWorldTransform(_Script_CoreUObject::Object* WorldContext) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetTrackingSensorParameters(_Script_CoreUObject::Vector& origin, _Script_CoreUObject::Rotator& Rotation, float& LeftFOV, float& RightFOV, float& TopFOV, float& BottomFOV, float& Distance, float& NearPlane, float& FarPlane, bool& IsActive, int32_t Index) {
    return;
}
void* _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetTrackingOrigin() {
    return;
}
float _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetScreenPercentage() {
    return;
}
float _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetPixelDensity() {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(_Script_CoreUObject::Rotator& DeviceRotation, _Script_CoreUObject::Vector& DevicePosition) {
    return;
}
int32_t _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetNumOfTrackingSensors() {
    return;
}
void* _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetHMDDeviceName() {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetDeviceWorldPose(_Script_CoreUObject::Object* WorldContext, _Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool& bIsTracked, _Script_CoreUObject::Rotator& Orientation, bool& bHasPositionalTracking, _Script_CoreUObject::Vector& Position) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::GetDevicePose(_Script_HeadMountedDisplay::XRDeviceId& XRDeviceId, bool& bIsTracked, _Script_CoreUObject::Rotator& Orientation, bool& bHasPositionalTracking, _Script_CoreUObject::Vector& Position) {
    return;
}
void* _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::EnumerateTrackedDevices(void* SystemId, void* DeviceType) {
    return;
}
void _Script_HeadMountedDisplay::HeadMountedDisplayFunctionLibrary::CalibrateExternalTrackingToHMD(_Script_CoreUObject::Transform& ExternalTrackingTransform) {
    return;
}
