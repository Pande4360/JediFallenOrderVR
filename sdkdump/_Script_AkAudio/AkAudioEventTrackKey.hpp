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
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkAudioEventTrackKey {
    private: char pad_0[0x20]; public:
    float& get_Time();
    _Script_AkAudio::AkAudioEvent*& get_AkAudioEvent();
    void* get_EventName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
