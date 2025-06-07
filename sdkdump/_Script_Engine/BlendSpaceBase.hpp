#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimationAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BlendSpaceBase : public AnimationAsset {
    private: char pad_80[0xc8]; public:
    bool get_bRotationBlendInMeshSpace();
    void set_bRotationBlendInMeshSpace(bool value);
    float& get_AnimLength();
    void* get_InterpolationParam();
    float& get_TargetWeightInterpolationSpeedPerSec();
    void* get_NotifyTriggerMode();
    void* get_PerBoneBlend();
    int32_t& get_SampleIndexWithMarkers();
    void* get_SampleData();
    void* get_GridSamples();
    void* get_BlendParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
