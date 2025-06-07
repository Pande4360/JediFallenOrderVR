#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAITargetEvaluatorWeights_Default {
    private: char pad_0[0x1c]; public:
    float& get_MyAwareness();
    float& get_TheirThreat();
    float& get_Proximity();
    float& get_Validity();
    float& get_CurrentTarget();
    float& get_LastAttacker();
    float& get_Player();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
