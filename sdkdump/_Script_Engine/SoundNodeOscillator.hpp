#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeOscillator : public SoundNode {
    private: char pad_38[0x28]; public:
    bool get_bModulateVolume();
    void set_bModulateVolume(bool value);
    bool get_bModulatePitch();
    void set_bModulatePitch(bool value);
    float& get_AmplitudeMin();
    float& get_AmplitudeMax();
    float& get_FrequencyMin();
    float& get_FrequencyMax();
    float& get_OffsetMin();
    float& get_OffsetMax();
    float& get_CenterMin();
    float& get_CenterMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
