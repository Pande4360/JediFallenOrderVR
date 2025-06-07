#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Privacy {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_Settings_Privacy_C : public _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C {
    private: char pad_230[0x20]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::TextBlock*& get_PCPText();
    _Script_UMG::CanvasPanel*& get_PrivacyPolicy();
    _Script_UMG::TextBlock*& get_PrivacyTitle();
    static _Script_CoreUObject::Class* static_class();
    void OptionalConsumeBackButton0(bool& Consumed);
    void Construct();
    void ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Privacy(int32_t EntryPoint);
}; // Size: 0x250
#pragma pack(pop)
}
