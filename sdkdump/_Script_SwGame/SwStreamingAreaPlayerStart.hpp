#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\RsStreamingAreaPlayerStart.hpp"
namespace _Script_SwGame {
struct SwPlayerLoadoutOverrideData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwStreamingAreaPlayerStart : public _Script_Engine::RsStreamingAreaPlayerStart {
    private: char pad_3d0[0x8]; public:
    _Script_SwGame::SwPlayerLoadoutOverrideData*& get_LoadoutData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d8
#pragma pack(pop)
}
