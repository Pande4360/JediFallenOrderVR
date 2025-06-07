#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DamageType.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Damage_DMG_DownStab {
#pragma pack(push, 1)
struct DMG_DownStab_C : public _Script_Engine::DamageType {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
