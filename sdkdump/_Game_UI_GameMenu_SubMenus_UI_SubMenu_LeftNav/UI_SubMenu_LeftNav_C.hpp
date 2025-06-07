#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_UMG {
struct VerticalBox;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct CanvasPanel;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav {
struct UI_Button_LeftNav_C;
}
namespace _Script_RsGameTechRT {
struct RsUiButton;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav {
#pragma pack(push, 1)
struct UI_SubMenu_LeftNav_C : public _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C {
    private: char pad_278[0x48]; public:
    void* get_UberGraphFrame0();
    _Script_UMG::VerticalBox*& get_LeftNavButtonList();
    _Script_UMG::CanvasPanel*& get_Root();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& get_UI_Button_LeftNav();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& get_UI_Button_LeftNav_0();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& get_UI_Button_LeftNav_1();
    _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& get_UI_Button_LeftNav_2();
    void* get_CurrentLeftNavParentURL();
    _Script_RsGameTechRT::RsUiButton*& get_Temp_CheatsButton();
    static _Script_CoreUObject::Class* static_class();
    void UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result);
    void Construct();
    void ExecuteUbergraph_UI_SubMenu_LeftNav(int32_t EntryPoint);
}; // Size: 0x2c0
#pragma pack(pop)
}
