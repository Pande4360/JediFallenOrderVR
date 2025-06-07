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
struct RsAIVODefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x58]; public:
    void* get_AlertedVOPerCharacter();
    _Script_AkAudio::AkAudioEvent*& get_AlertedVODefault();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
