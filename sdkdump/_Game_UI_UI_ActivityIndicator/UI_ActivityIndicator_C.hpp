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
namespace _Game_UI_UI_ActivityIndicator {
#pragma pack(push, 1)
struct UI_ActivityIndicator_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x20]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C*& get_UI_StarChartAnimLoadSave();
    bool get_GradBackground();
    void set_GradBackground(bool value);
    static _Script_CoreUObject::Class* static_class();
    void PreConstruct(bool IsDesignTime);
    void OnWindowOpened0();
    void ExecuteUbergraph_UI_ActivityIndicator(int32_t EntryPoint);
}; // Size: 0x628
#pragma pack(pop)
}
