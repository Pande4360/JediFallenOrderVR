#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_MovieScene\MovieSceneSection.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct MovieSceneAkAudioEventSection : public _Script_MovieScene::MovieSceneSection {
    private: char pad_e0[0xe8]; public:
    _Script_AkAudio::AkAudioEvent*& get_Event();
    bool get_RetriggerEvent();
    void set_RetriggerEvent(bool value);
    int32_t& get_ScrubTailLengthMs();
    bool get_StopAtSectionEnd();
    void set_StopAtSectionEnd(bool value);
    void* get_EventName();
    float& get_MaxSourceDuration();
    void* get_MaxDurationSourceID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c8
#pragma pack(pop)
}
