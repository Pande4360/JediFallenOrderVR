#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SoundClass;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundClassAdjuster {
    private: char pad_0[0x18]; public:
    _Script_Engine::SoundClass*& get_SoundClassObject();
    float& get_VolumeAdjuster();
    float& get_PitchAdjuster();
    bool get_bApplyToChildren();
    void set_bApplyToChildren(bool value);
    float& get_VoiceCenterChannelVolumeAdjuster();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
