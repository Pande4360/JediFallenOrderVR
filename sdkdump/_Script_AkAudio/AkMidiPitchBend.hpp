#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AkMidiEventBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkMidiPitchBend : public AkMidiEventBase {
    private: char pad_2[0x6]; public:
    void* get_ValueLsb();
    void* get_ValueMsb();
    int32_t& get_FullValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
