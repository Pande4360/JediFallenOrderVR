#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct CrowdAvoidanceConfig {
    private: char pad_0[0x1c]; public:
    float& get_VelocityBias();
    float& get_DesiredVelocityWeight();
    float& get_CurrentVelocityWeight();
    float& get_SideBiasWeight();
    float& get_ImpactTimeWeight();
    float& get_ImpactTimeRange();
    void* get_CustomPatternIdx();
    void* get_AdaptiveDivisions();
    void* get_AdaptiveRings();
    void* get_AdaptiveDepth();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
