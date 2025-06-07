#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSegmentInfo {
    private: char pad_0[0x24]; public:
    int32_t& get_CurrentPosition();
    int32_t& get_PreEntryDuration();
    int32_t& get_ActiveDuration();
    int32_t& get_PostExitDuration();
    int32_t& get_RemainingLookAheadTime();
    float& get_BeatDuration();
    float& get_BarDuration();
    float& get_GridDuration();
    float& get_GridOffset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
