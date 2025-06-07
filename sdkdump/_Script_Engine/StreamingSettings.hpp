#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct StreamingSettings : public DeveloperSettings {
    private: char pad_38[0x38]; public:
    bool get_AsyncLoadingThreadEnabled();
    void set_AsyncLoadingThreadEnabled(bool value);
    bool get_WarnIfTimeLimitExceeded();
    void set_WarnIfTimeLimitExceeded(bool value);
    float& get_TimeLimitExceededMultiplier();
    float& get_TimeLimitExceededMinTime();
    int32_t& get_MinBulkDataSizeForAsyncLoading();
    bool get_UseBackgroundLevelStreaming();
    void set_UseBackgroundLevelStreaming(bool value);
    bool get_AsyncLoadingUseFullTimeLimit();
    void set_AsyncLoadingUseFullTimeLimit(bool value);
    float& get_AsyncLoadingTimeLimit();
    float& get_PriorityAsyncLoadingExtraTime();
    float& get_LevelStreamingActorsUpdateTimeLimit();
    float& get_PriorityLevelStreamingActorsUpdateExtraTime();
    int32_t& get_LevelStreamingComponentsRegistrationGranularity();
    float& get_LevelStreamingUnregisterComponentsTimeLimit();
    int32_t& get_LevelStreamingComponentsUnregistrationGranularity();
    bool get_EventDrivenLoaderEnabled();
    void set_EventDrivenLoaderEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
