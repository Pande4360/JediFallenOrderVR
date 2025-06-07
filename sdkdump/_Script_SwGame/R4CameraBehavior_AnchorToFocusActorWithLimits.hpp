#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_AnchorToFocusActorWithLimits : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x30]; public:
    float& get_FocusPercentageAtZero();
    float& get_FocusPercentageAtMaxDist();
    float& get_MaxDistanceToFocus();
    float& get_MaxHeightToFocus();
    float& get_FocusTimeOut();
    float& get_FocusTimeOutDead();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    float& get_BlendPercent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
