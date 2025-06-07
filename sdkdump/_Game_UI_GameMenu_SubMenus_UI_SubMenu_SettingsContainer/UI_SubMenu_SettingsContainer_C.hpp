#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_SubMenus_UI_StarChartAnim {
struct UI_StarChartAnim_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_SettingsContainer {
#pragma pack(push, 1)
struct UI_SubMenu_SettingsContainer_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x18]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::CanvasPanel*& get_Root();
    _Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& get_StarChartAnim1();
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void UpdateVisibility0(bool Visible);
    void ExecuteUbergraph_UI_SubMenu_SettingsContainer(int32_t EntryPoint);
}; // Size: 0x290
#pragma pack(pop)
}
