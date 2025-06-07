#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AudioMixer\SynthComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioCapture {
#pragma pack(push, 1)
struct AudioCaptureComponent : public _Script_AudioMixer::SynthComponent {
    private: char pad_650[0xb0]; public:
    int32_t& get_JitterLatencyFrames();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x700
#pragma pack(pop)
}
