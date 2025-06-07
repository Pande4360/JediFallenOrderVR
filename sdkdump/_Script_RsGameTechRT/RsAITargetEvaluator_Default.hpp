#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAITargetEvaluator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAITargetEvaluator_Default : public RsAITargetEvaluator {
    private: char pad_28[0x28]; public:
    void* get_TargetScoringWeights();
    float& get_InnerTargetingDistance();
    float& get_OuterTargetingDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
