#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Narrative_Interactables_BP_DroidScan\BP_DroidScan_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Narrative_Interactables_BP_DroidMemory {
#pragma pack(push, 1)
struct BP_DroidMemory_C : public _Game_Narrative_Interactables_BP_DroidScan::BP_DroidScan_C {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x710
#pragma pack(pop)
}
