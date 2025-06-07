#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DialogueSoundWaveProxy : public SoundBase {
    private: char pad_a8[0x20]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
