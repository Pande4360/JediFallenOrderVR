#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\PlayerController.hpp"
#include "EyeTrackerFunctionLibrary.hpp"
#include "EyeTrackerGazeData.hpp"
#include "EyeTrackerStereoGazeData.hpp"
void _Script_EyeTracker::EyeTrackerFunctionLibrary::SetEyeTrackedPlayer(_Script_Engine::PlayerController* PlayerController) {
    return;
}
_Script_CoreUObject::Class* _Script_EyeTracker::EyeTrackerFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EyeTracker.EyeTrackerFunctionLibrary");
    return result;
}
bool _Script_EyeTracker::EyeTrackerFunctionLibrary::IsStereoGazeDataAvailable() {
    return;
}
bool _Script_EyeTracker::EyeTrackerFunctionLibrary::IsEyeTrackerConnected() {
    return;
}
bool _Script_EyeTracker::EyeTrackerFunctionLibrary::GetStereoGazeData(_Script_EyeTracker::EyeTrackerStereoGazeData& OutGazeData) {
    return;
}
bool _Script_EyeTracker::EyeTrackerFunctionLibrary::GetGazeData(_Script_EyeTracker::EyeTrackerGazeData& OutGazeData) {
    return;
}
