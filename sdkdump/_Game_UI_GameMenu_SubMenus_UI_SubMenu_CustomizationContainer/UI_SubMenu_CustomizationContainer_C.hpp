#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_UMG {
struct Image;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim {
struct UI_StarChartAnim_C;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2 {
struct UI_StarChartAnim2_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer {
#pragma pack(push, 1)
struct UI_SubMenu_CustomizationContainer_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x48]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::WidgetAnimation*& get_FadeIn();
    _Script_UMG::WidgetAnimation*& get_SlideInNext();
    _Script_UMG::WidgetAnimation*& get_SlideInPrev();
    _Script_UMG::Image*& get_HeroImage();
    _Script_UMG::CanvasPanel*& get_Root();
    _Script_Engine::Actor*& get_MenuCapture();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& get_StarChartAnim1();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& get_StarChartAnim2();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void UpdateVisibility0(bool Visible);
    void ExecuteUbergraph_UI_SubMenu_CustomizationContainer(int32_t EntryPoint);
}; // Size: 0x2c0
#pragma pack(pop)
}
