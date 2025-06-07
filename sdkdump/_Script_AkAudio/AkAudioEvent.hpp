#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_AkAudio {
struct AkAudioBank;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkAudioEvent : public _Script_CoreUObject::Object {
    private: char pad_28[0x1c8]; public:
    _Script_AkAudio::AkAudioBank*& get_RequiredBank();
    float& get_MaxAttenuationRadius();
    bool get_IsInfinite();
    void set_IsInfinite(bool value);
    float& get_MinimumDuration();
    float& get_MaximumDuration();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1f0
#pragma pack(pop)
}
