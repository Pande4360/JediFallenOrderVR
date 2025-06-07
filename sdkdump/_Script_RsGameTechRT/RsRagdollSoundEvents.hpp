#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsRagdollSoundEvents : public _Script_Engine::DataAsset {
    private: char pad_30[0x40]; public:
    bool get_AudioEventsDisabled();
    void set_AudioEventsDisabled(bool value);
    _Script_AkAudio::AkAudioEvent*& get_ImpactEvent();
    _Script_AkAudio::AkAudioEvent*& get_RollingLoop();
    _Script_AkAudio::AkAudioEvent*& get_RollingStop();
    void* get_BonesToPlayCollisionSounds();
    void* get_BonesExcludedFromPlayingCollisionSounds();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
