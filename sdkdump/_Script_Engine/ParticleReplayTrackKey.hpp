#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleReplayTrackKey {
    private: char pad_0[0xc]; public:
    float& get_Time();
    float& get_Duration();
    int32_t& get_ClipIDNumber();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc
#pragma pack(pop)
}
