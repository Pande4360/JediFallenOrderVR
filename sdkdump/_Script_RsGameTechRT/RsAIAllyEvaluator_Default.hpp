#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAIAllyEvaluator.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIAllyEvaluator_Default : public RsAIAllyEvaluator {
    private: char pad_28[0x18]; public:
    void* get_AllyScoringWeights();
    float& get_InnerAllyDistance();
    float& get_OuterAllyDistance();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
