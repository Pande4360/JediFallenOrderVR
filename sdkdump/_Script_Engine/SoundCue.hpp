#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundBase.hpp"
namespace _Script_Engine {
struct SoundNode;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundCue : public SoundBase {
    private: char pad_a8[0x2d8]; public:
    bool get_bOverrideAttenuation();
    void set_bOverrideAttenuation(bool value);
    bool get_bExcludeFromRandomNodeBranchCulling();
    void set_bExcludeFromRandomNodeBranchCulling(bool value);
    _Script_Engine::SoundNode*& get_FirstNode();
    float& get_VolumeMultiplier();
    float& get_PitchMultiplier();
    void* get_AttenuationOverrides();
    float& get_SubtitlePriority();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
