#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Game_UI_UI_MenuButtonPrompt {
struct UI_MenuButtonPrompt_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_PromptHolder {
#pragma pack(push, 1)
struct UI_PromptHolder_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x8]; public:
    _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& get_UI_MenuButtonPrompt();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x210
#pragma pack(pop)
}
