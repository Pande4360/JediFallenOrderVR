#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReverbEffect : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    float& get_Density();
    float& get_Diffusion();
    float& get_Gain();
    float& get_GainHF();
    float& get_DecayTime();
    float& get_DecayHFRatio();
    float& get_ReflectionsGain();
    float& get_ReflectionsDelay();
    float& get_LateGain();
    float& get_LateDelay();
    float& get_AirAbsorptionGainHF();
    float& get_RoomRolloffFactor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
