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
struct SwTelekinesisFXVictimData {
    private: char pad_0[0x10]; public:
    _Script_AkAudio::AkAudioEvent*& get_ForceTelekinesisLoopAudio();
    _Script_AkAudio::AkAudioEvent*& get_ForceTelekinesisLoopStopAudio();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
