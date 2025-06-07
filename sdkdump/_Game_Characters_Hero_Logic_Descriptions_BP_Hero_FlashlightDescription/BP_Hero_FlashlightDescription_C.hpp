#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription\BP_Hero_BlockDescription_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Descriptions_BP_Hero_FlashlightDescription {
#pragma pack(push, 1)
struct BP_Hero_FlashlightDescription_C : public _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
