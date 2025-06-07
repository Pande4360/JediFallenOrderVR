#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectDynamicsProcessorSettings {
    private: char pad_0[0x28]; public:
    void* get_DynamicsProcessorType();
    void* get_PeakMode();
    float& get_LookAheadMsec();
    float& get_AttackTimeMsec();
    float& get_ReleaseTimeMsec();
    float& get_ThresholdDb();
    float& get_Ratio();
    float& get_KneeBandwidthDb();
    float& get_InputGainDb();
    float& get_OutputGainDb();
    bool get_bChannelLinked();
    void set_bChannelLinked(bool value);
    bool get_bAnalogMode();
    void set_bAnalogMode(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
