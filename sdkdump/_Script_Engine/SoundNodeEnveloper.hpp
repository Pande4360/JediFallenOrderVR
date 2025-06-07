#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_Engine {
struct DistributionFloatConstantCurve;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeEnveloper : public SoundNode {
    private: char pad_38[0x128]; public:
    float& get_LoopStart();
    float& get_LoopEnd();
    float& get_DurationAfterLoop();
    int32_t& get_LoopCount();
    bool get_bLoopIndefinitely();
    void set_bLoopIndefinitely(bool value);
    bool get_bLoop();
    void set_bLoop(bool value);
    _Script_Engine::DistributionFloatConstantCurve*& get_VolumeInterpCurve();
    _Script_Engine::DistributionFloatConstantCurve*& get_PitchInterpCurve();
    void* get_VolumeCurve();
    void* get_PitchCurve();
    float& get_PitchMin();
    float& get_PitchMax();
    float& get_VolumeMin();
    float& get_VolumeMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
