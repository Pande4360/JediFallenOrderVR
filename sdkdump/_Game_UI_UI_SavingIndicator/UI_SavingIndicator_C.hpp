#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave {
struct UI_StarChartAnimLoadSave_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_UI_SavingIndicator {
#pragma pack(push, 1)
struct UI_SavingIndicator_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x18]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C*& get_UI_StarChartAnimLoadSave();
    static _Script_CoreUObject::Class* static_class();
    void* Get_SavingGameText_Visibility_0();
    void Construct();
    void HIdeText(bool HIdeText);
    void ExecuteUbergraph_UI_SavingIndicator(int32_t EntryPoint);
}; // Size: 0x620
#pragma pack(pop)
}
