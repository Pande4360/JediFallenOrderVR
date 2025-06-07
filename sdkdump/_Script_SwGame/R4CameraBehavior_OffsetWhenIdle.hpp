#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "R4CameraBehavior_Offset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_OffsetWhenIdle : public R4CameraBehavior_Offset {
    private: char pad_88[0x28]; public:
    float& get_DelayBeforeApplyingOffsets();
    float& get_EaseInTime();
    float& get_TrackingPercentageIn();
    float& get_TrackingTimeIn();
    float& get_EaseOutTime();
    float& get_TrackingPercentageOut();
    float& get_TrackingTimeOut();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
