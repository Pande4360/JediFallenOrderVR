#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwPushFXVictimData {
    private: char pad_0[0x30]; public:
    _Script_AkAudio::AkAudioEvent*& get_ForcePushSoundEffectOverride();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushFoley();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushVO();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushOverridenSoundEffectOverride();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushOverridenFoley();
    _Script_AkAudio::AkAudioEvent*& get_ForcePushOverridenVO();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
