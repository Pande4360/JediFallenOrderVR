#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_MenuButtonPromptDirectKey {
#pragma pack(push, 1)
struct UI_MenuButtonPromptDirectKey_C : public _Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C {
    private: char pad_378[0x38]; public:
    void* get_UberGraphFrame0();
    void* get_DirectKeyController();
    void* get_DirectKeyKMB();
    static _Script_CoreUObject::Class* static_class();
    void SetKeyForAction0();
    void ExecuteUbergraph_UI_MenuButtonPromptDirectKey(int32_t EntryPoint);
}; // Size: 0x3b0
#pragma pack(pop)
}
