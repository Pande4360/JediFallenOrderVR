#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SwBTTask_PlayCombatStateAnimation.hpp"
namespace _Script_SwGame {
struct SwDefenseState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwBTTask_PlayDefenseAnimation : public SwBTTask_PlayCombatStateAnimation {
    private: char pad_c8[0x8]; public:
    _Script_SwGame::SwDefenseState*& get_DefenseTemplate();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
