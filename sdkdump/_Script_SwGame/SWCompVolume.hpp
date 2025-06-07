#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Volume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SWCompVolume : public _Script_Engine::Volume {
    private: char pad_398[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
