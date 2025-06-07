#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrack.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackParticleReplay : public InterpTrack {
    private: char pad_70[0x10]; public:
    void* get_TrackKeys();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
