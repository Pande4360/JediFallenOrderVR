#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SoundNode.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SoundNodeModulator : public SoundNode {
    private: char pad_38[0x10]; public:
    float& get_PitchMin();
    float& get_PitchMax();
    float& get_VolumeMin();
    float& get_VolumeMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
