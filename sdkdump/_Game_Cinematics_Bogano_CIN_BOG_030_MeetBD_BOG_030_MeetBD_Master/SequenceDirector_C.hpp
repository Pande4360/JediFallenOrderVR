#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LevelSequence\LevelSequenceDirector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Cinematics_Bogano_CIN_BOG_030_MeetBD_BOG_030_MeetBD_Master {
#pragma pack(push, 1)
struct SequenceDirector_C : public _Script_LevelSequence::LevelSequenceDirector {
    static _Script_CoreUObject::Class* static_class();
    void Music_Start();
    void Rumble_Medium();
}; // Size: 0x30
#pragma pack(pop)
}
