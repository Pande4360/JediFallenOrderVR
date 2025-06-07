#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectEQBand {
    private: char pad_0[0x10]; public:
    float& get_Frequency();
    float& get_Bandwidth();
    float& get_GainDb();
    bool get_bEnabled();
    void set_bEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
