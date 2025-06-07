#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleBeamBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleBeamNoise : public ParticleModuleBeamBase {
    private: char pad_30[0x188]; public:
    bool get_bLowFreq_Enabled();
    void set_bLowFreq_Enabled(bool value);
    int32_t& get_Frequency();
    int32_t& get_Frequency_LowRange();
    void* get_NoiseRange();
    void* get_NoiseRangeScale();
    bool get_bNRScaleEmitterTime();
    void set_bNRScaleEmitterTime(bool value);
    void* get_NoiseSpeed();
    bool get_bSmooth();
    void set_bSmooth(bool value);
    float& get_NoiseLockRadius();
    bool get_bNoiseLock();
    void set_bNoiseLock(bool value);
    bool get_bOscillate();
    void set_bOscillate(bool value);
    float& get_NoiseLockTime();
    float& get_NoiseTension();
    bool get_bUseNoiseTangents();
    void set_bUseNoiseTangents(bool value);
    void* get_NoiseTangentStrength();
    int32_t& get_NoiseTessellation();
    bool get_bTargetNoise();
    void set_bTargetNoise(bool value);
    float& get_FrequencyDistance();
    bool get_bApplyNoiseScale();
    void set_bApplyNoiseScale(bool value);
    void* get_NoiseScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
