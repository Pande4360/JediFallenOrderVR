#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIAwarenessStateDefinition_Ambient : public _Script_Engine::DataAsset {
    private: char pad_30[0x58]; public:
    float& get_WanderRange();
    float& get_FrequencyMin();
    float& get_FrequencyMax();
    void* get_FidgetAnimation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
