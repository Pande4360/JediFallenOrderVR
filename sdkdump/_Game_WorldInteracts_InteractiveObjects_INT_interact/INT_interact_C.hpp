#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_InteractiveObjects_INT_interact {
#pragma pack(push, 1)
struct INT_interact_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void InteractAnimationDone();
    void CancelToNav();
    void DroidButtonPress(bool& Handled);
    void ButtonPress();
}; // Size: 0x28
#pragma pack(pop)
}
