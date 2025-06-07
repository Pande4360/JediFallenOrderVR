#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EyeTrackerStereoGazeData.hpp"
void* _Script_EyeTracker::EyeTrackerStereoGazeData::get_LeftEyeOrigin() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_EyeTracker::EyeTrackerStereoGazeData::get_ConfidenceValue() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_EyeTracker::EyeTrackerStereoGazeData::get_FixationPoint() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_EyeTracker::EyeTrackerStereoGazeData::get_LeftEyeDirection() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_EyeTracker::EyeTrackerStereoGazeData::get_RightEyeOrigin() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_EyeTracker::EyeTrackerStereoGazeData::get_RightEyeDirection() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_EyeTracker::EyeTrackerStereoGazeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EyeTracker.EyeTrackerStereoGazeData");
    return result;
}
