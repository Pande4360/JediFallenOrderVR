#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsAnimationCompressionParametersForPerTrackAlgorithm {
    private: char pad_0[0x78]; public:
    float& get_MaxZeroingThreshold();
    float& get_MaxPosDiffBitwise();
    float& get_MaxAngleDiffBitwise();
    float& get_MaxScaleDiffBitwise();
    void* get_AllowedRotationFormats();
    void* get_AllowedTranslationFormats();
    void* get_AllowedScaleFormats();
    bool get_bResampleAnimation();
    void set_bResampleAnimation(bool value);
    float& get_ResampledFramerate();
    int32_t& get_MinKeysForResampling();
    bool get_bUseAdaptiveError();
    void set_bUseAdaptiveError(bool value);
    bool get_bUseOverrideForEndEffectors();
    void set_bUseOverrideForEndEffectors(bool value);
    int32_t& get_TrackHeightBias();
    float& get_ParentingDivisor();
    float& get_ParentingDivisorExponent();
    bool get_bUseAdaptiveError2();
    void set_bUseAdaptiveError2(bool value);
    float& get_RotationErrorSourceRatio();
    float& get_TranslationErrorSourceRatio();
    float& get_ScaleErrorSourceRatio();
    float& get_MaxErrorPerTrackRatio();
    float& get_PerturbationProbeSize();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
