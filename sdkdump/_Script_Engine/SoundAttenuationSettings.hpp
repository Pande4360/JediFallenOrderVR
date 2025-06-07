#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BaseAttenuationSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundAttenuationSettings : public BaseAttenuationSettings {
    private: char pad_a0[0x208]; public:
    bool get_bAttenuate();
    void set_bAttenuate(bool value);
    bool get_bSpatialize();
    void set_bSpatialize(bool value);
    bool get_bAttenuateWithLPF();
    void set_bAttenuateWithLPF(bool value);
    bool get_bEnableListenerFocus();
    void set_bEnableListenerFocus(bool value);
    bool get_bEnableFocusInterpolation();
    void set_bEnableFocusInterpolation(bool value);
    bool get_bEnableOcclusion();
    void set_bEnableOcclusion(bool value);
    bool get_bUseComplexCollisionForOcclusion();
    void set_bUseComplexCollisionForOcclusion(bool value);
    bool get_bEnableReverbSend();
    void set_bEnableReverbSend(bool value);
    bool get_bApplyNormalizationToStereoSounds();
    void set_bApplyNormalizationToStereoSounds(bool value);
    bool get_bEnableLogFrequencyScaling();
    void set_bEnableLogFrequencyScaling(bool value);
    void* get_SpatializationAlgorithm();
    void* get_AbsorptionMethod();
    void* get_OcclusionTraceChannel();
    void* get_ReverbSendMethod();
    float& get_OmniRadius();
    float& get_StereoSpread();
    float& get_LPFRadiusMin();
    float& get_LPFRadiusMax();
    void* get_CustomLowpassAirAbsorptionCurve();
    void* get_CustomHighpassAirAbsorptionCurve();
    float& get_LPFFrequencyAtMin();
    float& get_LPFFrequencyAtMax();
    float& get_HPFFrequencyAtMin();
    float& get_HPFFrequencyAtMax();
    float& get_FocusAzimuth();
    float& get_NonFocusAzimuth();
    float& get_FocusDistanceScale();
    float& get_NonFocusDistanceScale();
    float& get_FocusPriorityScale();
    float& get_NonFocusPriorityScale();
    float& get_FocusVolumeAttenuation();
    float& get_NonFocusVolumeAttenuation();
    float& get_FocusAttackInterpSpeed();
    float& get_FocusReleaseInterpSpeed();
    float& get_OcclusionLowPassFilterFrequency();
    float& get_OcclusionVolumeAttenuation();
    float& get_OcclusionInterpolationTime();
    float& get_ReverbWetLevelMin();
    float& get_ReverbWetLevelMax();
    float& get_ReverbDistanceMin();
    float& get_ReverbDistanceMax();
    float& get_ManualReverbSendLevel();
    void* get_CustomReverbSendCurve();
    void* get_PluginSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2a8
#pragma pack(pop)
}
