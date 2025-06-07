#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_LevelSequence\LevelSequenceDirector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid {
struct BP_BuddyDroid_C;
}
namespace _Game_Cinematics_Bogano_CIN_BOG_300_DathomirDiscovered_BOG_300_DathomirDiscovered_020 {
#pragma pack(push, 1)
struct SequenceDirector_C : public _Script_LevelSequence::LevelSequenceDirector {
    static _Script_CoreUObject::Class* static_class();
    void Call_CIN_HologramFX_0(_Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid::BP_BuddyDroid_C* Target);
}; // Size: 0x30
#pragma pack(pop)
}
