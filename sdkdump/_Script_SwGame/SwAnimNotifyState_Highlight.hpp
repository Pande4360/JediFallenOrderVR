#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwAnimNotifyState_Highlight : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x70]; public:
    void* get_HighlightType();
    _Script_Engine::CurveFloat*& get_BlendCurve();
    bool get_bShouldPlayAudio();
    void set_bShouldPlayAudio(bool value);
    _Script_AkAudio::AkAudioEvent*& get_AudioStart();
    _Script_AkAudio::AkAudioEvent*& get_AudioEnd();
    void* get_RequiredTagQuery();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
