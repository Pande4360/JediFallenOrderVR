#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_EyeTracker {
struct EyeTrackerGazeData;
}
namespace _Script_EyeTracker {
struct EyeTrackerStereoGazeData;
}
namespace _Script_EyeTracker {
#pragma pack(push, 1)
struct EyeTrackerFunctionLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void SetEyeTrackedPlayer(_Script_Engine::PlayerController* PlayerController);
    bool IsStereoGazeDataAvailable();
    bool IsEyeTrackerConnected();
    bool GetStereoGazeData(_Script_EyeTracker::EyeTrackerStereoGazeData& OutGazeData);
    bool GetGazeData(_Script_EyeTracker::EyeTrackerGazeData& OutGazeData);
}; // Size: 0x28
#pragma pack(pop)
}
