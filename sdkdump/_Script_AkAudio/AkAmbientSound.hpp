#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkAmbientSound : public _Script_Engine::Actor {
    private: char pad_360[0x40]; public:
    _Script_AkAudio::AkAudioEvent*& get_AkAudioEvent();
    _Script_AkAudio::AkComponent*& get_AkComponent();
    bool get_StopWhenOwnerIsDestroyed();
    void set_StopWhenOwnerIsDestroyed(bool value);
    bool get_AutoPost();
    void set_AutoPost(bool value);
    static _Script_CoreUObject::Class* static_class();
    void StopAmbientSound();
    void StartAmbientSound();
}; // Size: 0x3a0
#pragma pack(pop)
}
