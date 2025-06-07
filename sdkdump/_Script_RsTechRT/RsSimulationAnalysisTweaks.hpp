#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsSimulationAnalysisTweaks {
    private: char pad_0[0x20]; public:
    int32_t& get_SimulatedStates();
    void* get_SimulatedScratchpad();
    float& get_ExtrapolateTime();
    float& get_ExtrapolateTimeStep();
    int32_t& get_ExtrapolateStates();
    void* get_ExtrapolateScratchpad();
    int32_t& get_ExtrapolatedHistoryCount();
    float& get_ExtrapolatedHistoryDelay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
