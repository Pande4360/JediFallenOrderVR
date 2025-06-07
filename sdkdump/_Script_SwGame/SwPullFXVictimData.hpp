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
struct SwPullFXVictimData {
    private: char pad_0[0x20]; public:
    _Script_AkAudio::AkAudioEvent*& get_ForcePullEnterStartEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullEnterStopEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullVOEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullFoleyEvent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
