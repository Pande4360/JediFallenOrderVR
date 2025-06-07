#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Game_UI_SkillTree_UI_SkillTree_Main {
struct UI_SkillTree_Main_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Game_UI_SkillTree_UI_SkillTree_Window {
#pragma pack(push, 1)
struct UI_SkillTree_Window_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x10]; public:
    void* get_UberGraphFrame();
    _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C*& get_UI_SkillTree_Main();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void OnWindowOpened0();
    void OnFocusChanged0(_Script_RsGameTechRT::RsUiButton* NewFocusedButton);
    void OnSecondaryConfirm(void* ActionName);
    void OnCancel(void* ActionName);
    void ExecuteUbergraph_UI_SkillTree_Window(int32_t EntryPoint);
}; // Size: 0x618
#pragma pack(pop)
}
