#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_EngineSettings {
#pragma pack(push, 1)
struct GameNetworkManagerSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    int32_t& get_MinDynamicBandwidth();
    int32_t& get_MaxDynamicBandwidth();
    int32_t& get_TotalNetBandwidth();
    int32_t& get_BadPingThreshold();
    bool get_bIsStandbyCheckingEnabled();
    void set_bIsStandbyCheckingEnabled(bool value);
    float& get_StandbyRxCheatTime();
    float& get_StandbyTxCheatTime();
    float& get_PercentMissingForRxStandby();
    float& get_PercentMissingForTxStandby();
    float& get_PercentForBadPing();
    float& get_JoinInProgressStandbyWaitTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
