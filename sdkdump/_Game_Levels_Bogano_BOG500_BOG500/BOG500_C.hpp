#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\LevelScriptActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Levels_Bogano_BOG500_BOG500 {
#pragma pack(push, 1)
struct BOG500_C : public _Script_Engine::LevelScriptActor {
    private: char pad_368[0x10]; public:
    float& get_tunnelWaitTime();
    void* get_TunnelFailTimer();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x378
#pragma pack(pop)
}
