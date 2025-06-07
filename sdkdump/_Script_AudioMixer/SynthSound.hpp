#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundWaveProcedural.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SynthSound : public _Script_Engine::SoundWaveProcedural {
    private: char pad_260[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x280
#pragma pack(pop)
}
