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
struct AnimUpdateRateParameters {
    private: char pad_0[0x90]; public:
    void* get_ShiftBucket();
    bool get_bInterpolateSkippedFrames();
    void set_bInterpolateSkippedFrames(bool value);
    bool get_bShouldUseLodMap();
    void set_bShouldUseLodMap(bool value);
    bool get_bShouldUseMinLod();
    void set_bShouldUseMinLod(bool value);
    bool get_bSkipUpdate();
    void set_bSkipUpdate(bool value);
    bool get_bSkipEvaluation();
    void set_bSkipEvaluation(bool value);
    int32_t& get_UpdateRate();
    int32_t& get_EvaluationRate();
    float& get_TickedPoseOffestTime();
    float& get_AdditionalTime();
    int32_t& get_BaseNonRenderedUpdateRate();
    int32_t& get_MaxEvalRateForInterpolation();
    float& get_InterpolateSkippedFramesDistanceFactorThreshold();
    void* get_BaseVisibleDistanceFactorThesholds();
    void* get_LODToFrameSkipMap();
    int32_t& get_SkippedUpdateFrames();
    int32_t& get_SkippedEvalFrames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
