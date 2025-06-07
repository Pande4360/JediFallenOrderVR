#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Game_WorldInteracts_Doors_INT_Door {
#pragma pack(push, 1)
struct INT_Door_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void GetDoorUnlockButtonLocation(_Script_CoreUObject::Vector& WorldLocation);
    void AnimNotify_PlayDoorUnlockSFX();
}; // Size: 0x28
#pragma pack(pop)
}
