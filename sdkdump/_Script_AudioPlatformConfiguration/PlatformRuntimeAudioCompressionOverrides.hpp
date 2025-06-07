#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioPlatformConfiguration {
#pragma pack(push, 1)
struct PlatformRuntimeAudioCompressionOverrides {
    private: char pad_0[0x10]; public:
    bool get_bOverrideCompressionTimes();
    void set_bOverrideCompressionTimes(bool value);
    float& get_DurationThreshold();
    int32_t& get_MaxNumRandomBranches();
    int32_t& get_SoundCueQualityIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
