#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwAbilityVictimData.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters__Shared_Abilities_NewVictimData_VD_Base {
#pragma pack(push, 1)
struct VD_Base_C : public _Script_SwGame::SwAbilityVictimData {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x468
#pragma pack(pop)
}
