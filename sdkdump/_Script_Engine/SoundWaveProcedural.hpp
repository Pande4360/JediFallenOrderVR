#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundWave.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundWaveProcedural : public SoundWave {
    private: char pad_208[0x58]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x260
#pragma pack(pop)
}
