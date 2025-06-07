#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EyeTrackerGazeData.hpp"
void* _Script_EyeTracker::EyeTrackerGazeData::get_GazeDirection() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_EyeTracker::EyeTrackerGazeData::get_GazeOrigin() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_EyeTracker::EyeTrackerGazeData::get_FixationPoint() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_EyeTracker::EyeTrackerGazeData::get_ConfidenceValue() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_EyeTracker::EyeTrackerGazeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EyeTracker.EyeTrackerGazeData");
    return result;
}
