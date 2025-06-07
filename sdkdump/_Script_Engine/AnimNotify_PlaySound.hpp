#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNotify.hpp"
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNotify_PlaySound : public AnimNotify {
    private: char pad_38[0x20]; public:
    _Script_Engine::SoundBase*& get_Sound();
    float& get_VolumeMultiplier();
    float& get_PitchMultiplier();
    bool get_bFollow();
    void set_bFollow(bool value);
    void* get_AttachName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
