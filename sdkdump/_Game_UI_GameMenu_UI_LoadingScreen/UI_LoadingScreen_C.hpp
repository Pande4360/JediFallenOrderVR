#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave {
struct UI_StarChartAnimLoadSave_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_UI_LoadingScreen {
#pragma pack(push, 1)
struct UI_LoadingScreen_C : public _Script_RsGameTechRT::RsUiWindow {
    private: char pad_608[0x30]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Fade();
    _Script_UMG::Image*& get_BlackBackground();
    _Script_UMG::CanvasPanel*& get_LoadingScreenCanvas();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnimLoadSave::UI_StarChartAnimLoadSave_C*& get_UI_StarChartAnimLoadSave();
    void* get_Mix_IsLoading();
    static _Script_CoreUObject::Class* static_class();
    void ShowLoadingScreen();
    void HideLoadingScreen();
    void ExecuteUbergraph_UI_LoadingScreen(int32_t EntryPoint);
}; // Size: 0x638
#pragma pack(pop)
}
