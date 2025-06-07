#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_HeadMountedDisplay {
struct MotionControllerComponent;
}
namespace _Script_HeadMountedDisplay {
#pragma pack(push, 1)
struct MotionTrackedDeviceFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetIsControllerMotionTrackingEnabledByDefault(bool enable);
    bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, void* SourceName);
    bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, void* Hand);
    bool IsMotionTrackingEnabledForComponent(_Script_HeadMountedDisplay::MotionControllerComponent* MotionControllerComponent);
    bool IsMotionTrackedDeviceCountManagementNecessary();
    bool IsMotionSourceTracking(int32_t PlayerIndex, void* SourceName);
    int32_t GetMotionTrackingEnabledControllerCount();
    int32_t GetMaximumMotionTrackedControllerCount();
    void* GetActiveTrackingSystemName();
    void* EnumerateMotionSources();
    bool EnableMotionTrackingOfSource(int32_t PlayerIndex, void* SourceName);
    bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, void* Hand);
    bool EnableMotionTrackingForComponent(_Script_HeadMountedDisplay::MotionControllerComponent* MotionControllerComponent);
    void DisableMotionTrackingOfSource(int32_t PlayerIndex, void* SourceName);
    void DisableMotionTrackingOfDevice(int32_t PlayerIndex, void* Hand);
    void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex);
    void DisableMotionTrackingOfAllControllers();
    void DisableMotionTrackingForComponent(_Script_HeadMountedDisplay::MotionControllerComponent* MotionControllerComponent);
}; // Size: 0x28
#pragma pack(pop)
}
