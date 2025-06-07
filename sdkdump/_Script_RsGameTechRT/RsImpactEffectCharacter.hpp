#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsImpactEffectCharacter : public _Script_Engine::TableRowBase {
    private: char pad_8[0x368]; public:
    bool get_bUseDefaultSound();
    void set_bUseDefaultSound(bool value);
    bool get_bUseDefaultVFX();
    void set_bUseDefaultVFX(bool value);
    _Script_AkAudio::AkAudioEvent*& get_ImpactSound();
    void* get_ImpactVFX();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
