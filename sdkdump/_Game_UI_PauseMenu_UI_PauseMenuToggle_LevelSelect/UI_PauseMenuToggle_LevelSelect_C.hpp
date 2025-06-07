#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_PauseMenu_UI_PauseMenuToggle_LevelSelect {
#pragma pack(push, 1)
struct UI_PauseMenuToggle_LevelSelect_C : public _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C {
    private: char pad_490[0x8]; public:
    void* get_UberGraphFrame();
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct0(bool IsDesignTime);
    void ExecuteUbergraph_UI_PauseMenuToggle_LevelSelect(int32_t EntryPoint);
}; // Size: 0x498
#pragma pack(pop)
}
