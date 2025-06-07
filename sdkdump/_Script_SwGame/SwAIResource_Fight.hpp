#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsAIResource.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAIResource_Fight : public _Script_RsGameTechRT::RsAIResource {
    private: char pad_108[0x4a8]; public:
    float& get_GlobalLockoutTimeAfterBlockByAttacker();
    float& get_GlobalLockoutTimeAfterVictimSync();
    float& get_MaxTimeSinceLastAttacked();
    float& get_DelayAfterBeingSlowedToReleaseResource();
    float& get_MaxQueueTime();
    float& get_StealRampUpTime();
    float& get_StealRampDownTime();
    float& get_StealRampDownThreshold();
    float& get_StealLockoutTimeAfterRelease();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x5b0
#pragma pack(pop)
}
