#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBendingMetalDoorOcillationParameters {
    private: char pad_0[0x10]; public:
    float& get_OscillationAmplitude();
    float& get_OscillationSpeed();
    float& get_OscillationLength();
    float& get_StartOscillationWhenMovementSpeedIsBelow();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
