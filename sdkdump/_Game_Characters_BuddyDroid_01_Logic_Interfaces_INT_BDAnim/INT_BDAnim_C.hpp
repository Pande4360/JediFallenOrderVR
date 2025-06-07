#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_Interfaces_INT_BDAnim {
#pragma pack(push, 1)
struct INT_BDAnim_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetMonkeyBeamTransition(void* TransitionType);
}; // Size: 0x28
#pragma pack(pop)
}
