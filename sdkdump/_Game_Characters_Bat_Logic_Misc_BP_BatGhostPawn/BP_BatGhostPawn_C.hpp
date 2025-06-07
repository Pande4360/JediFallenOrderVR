#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_ATST00_Misc_BP_GhostPawn\BP_GhostPawn_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Bat_Logic_Misc_BP_BatGhostPawn {
#pragma pack(push, 1)
struct BP_BatGhostPawn_C : public _Game_Characters_ATST00_Misc_BP_GhostPawn::BP_GhostPawn_C {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
