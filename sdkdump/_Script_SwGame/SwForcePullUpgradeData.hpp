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
struct SwForcePullUpgradeData {
    private: char pad_0[0x28]; public:
    void* get_EffectType();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullCastCharacterEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullCastCharacterStopEvent();
    _Script_AkAudio::AkAudioEvent*& get_ForcePullYankCharacterEvent();
    bool get_bShouldUseYankBubbleOnYank();
    void set_bShouldUseYankBubbleOnYank(bool value);
    bool get_bShouldUseYankBubbleOnTractorBeam();
    void set_bShouldUseYankBubbleOnTractorBeam(bool value);
    float& get_BubbleRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
