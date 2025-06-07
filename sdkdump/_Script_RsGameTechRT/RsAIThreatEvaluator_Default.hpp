#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIThreatEvaluator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIThreatEvaluator_Default : public RsAIThreatEvaluator {
    private: char pad_28[0x18]; public:
    void* get_ThreatScoringWeights();
    float& get_InnerThreatDistance();
    float& get_OuterThreatDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
