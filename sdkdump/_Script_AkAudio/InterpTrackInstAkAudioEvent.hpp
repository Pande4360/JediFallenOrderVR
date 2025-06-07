#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\InterpTrackInst.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct InterpTrackInstAkAudioEvent : public _Script_Engine::InterpTrackInst {
    private: char pad_28[0x8]; public:
    float& get_LastUpdatePosition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
