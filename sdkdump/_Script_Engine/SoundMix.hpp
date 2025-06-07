#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundMix : public _Script_CoreUObject::Object {
    private: char pad_28[0x60]; public:
    bool get_bApplyEQ();
    void set_bApplyEQ(bool value);
    float& get_EQPriority();
    void* get_EQSettings();
    void* get_SoundClassEffects();
    float& get_InitialDelay();
    float& get_FadeInTime();
    float& get_Duration();
    float& get_FadeOutTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
