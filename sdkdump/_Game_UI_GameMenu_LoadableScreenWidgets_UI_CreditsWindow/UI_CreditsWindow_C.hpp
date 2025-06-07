#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_Credits_UI_CreditsCore {
struct UI_CreditsCore_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_CreditsWindow {
#pragma pack(push, 1)
struct UI_CreditsWindow_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::CanvasPanel*& get_MenuCredits();
    _Game_UI_Credits_UI_CreditsCore::UI_CreditsCore_C*& get_UI_CreditsCore();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void UIMenuCreditsCompleted();
    void OnWindowOpened0();
    void OnCancel(void* ActionName);
    void ExecuteUbergraph_UI_CreditsWindow(int32_t EntryPoint);
}; // Size: 0x620
#pragma pack(pop)
}
