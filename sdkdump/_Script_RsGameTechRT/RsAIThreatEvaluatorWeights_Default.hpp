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
struct RsAIThreatEvaluatorWeights_Default {
    private: char pad_0[0xc]; public:
    float& get_TheirAwareness();
    float& get_MyAlignment();
    float& get_Proximity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
