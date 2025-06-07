#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "MotionControllerComponent.hpp"
#include "MotionTrackedDeviceFunctionLibrary.hpp"
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::IsMotionSourceTracking(int32_t PlayerIndex, void* SourceName) {
    return;
}
_Script_CoreUObject::Class* _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary");
    return result;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForComponent(_Script_HeadMountedDisplay::MotionControllerComponent* MotionControllerComponent) {
    return;
}
void _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::SetIsControllerMotionTrackingEnabledByDefault(bool enable) {
    return;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForSource(int32_t PlayerIndex, void* SourceName) {
    return;
}
void _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfDevice(int32_t PlayerIndex, void* Hand) {
    return;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, void* Hand) {
    return;
}
int32_t _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::GetMotionTrackingEnabledControllerCount() {
    return;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::IsMotionTrackedDeviceCountManagementNecessary() {
    return;
}
int32_t _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::GetMaximumMotionTrackedControllerCount() {
    return;
}
void* _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::GetActiveTrackingSystemName() {
    return;
}
void* _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::EnumerateMotionSources() {
    return;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfSource(int32_t PlayerIndex, void* SourceName) {
    return;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::EnableMotionTrackingOfDevice(int32_t PlayerIndex, void* Hand) {
    return;
}
bool _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::EnableMotionTrackingForComponent(_Script_HeadMountedDisplay::MotionControllerComponent* MotionControllerComponent) {
    return;
}
void _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfSource(int32_t PlayerIndex, void* SourceName) {
    return;
}
void _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex) {
    return;
}
void _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::DisableMotionTrackingOfAllControllers() {
    return;
}
void _Script_HeadMountedDisplay::MotionTrackedDeviceFunctionLibrary::DisableMotionTrackingForComponent(_Script_HeadMountedDisplay::MotionControllerComponent* MotionControllerComponent) {
    return;
}
