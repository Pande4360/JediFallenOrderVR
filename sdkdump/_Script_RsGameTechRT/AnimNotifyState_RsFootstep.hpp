#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNotifyState.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_RsGameTechRT {
struct RsCharacterDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct AnimNotifyState_RsFootstep : public _Script_Engine::AnimNotifyState {
    private: char pad_30[0x78]; public:
    void* get_FootType();
    bool get_bSpawnFootEffects();
    void set_bSpawnFootEffects(bool value);
    bool get_bLockFootPosition();
    void set_bLockFootPosition(bool value);
    bool get_bBeginAudioEnabled();
    void set_bBeginAudioEnabled(bool value);
    _Script_AkAudio::AkAudioEvent*& get_AudioOverrideEvent();
    _Script_AkAudio::AkAudioEvent*& get_FoliageAudioOverrideEvent();
    _Script_RsGameTechRT::RsCharacterDefinition*& get_EditorCharacterDefinitionOverride();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
