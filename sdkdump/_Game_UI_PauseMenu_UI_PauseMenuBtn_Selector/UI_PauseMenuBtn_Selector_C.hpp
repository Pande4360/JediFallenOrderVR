#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuBtn_Selector {
#pragma pack(push, 1)
struct UI_PauseMenuBtn_Selector_C : public _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x490
#pragma pack(pop)
}
