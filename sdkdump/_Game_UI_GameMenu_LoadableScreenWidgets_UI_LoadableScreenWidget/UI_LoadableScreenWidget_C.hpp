#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_UMG\UserWidget.hpp"
namespace _Script_RsGameTechRT {
struct RsUiWindow;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base {
struct UI_SubMenu_Base_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget {
#pragma pack(push, 1)
struct UI_LoadableScreenWidget_C : public _Script_UMG::UserWidget {
    private: char pad_208[0x28]; public:
    void* get_UberGraphFrame();
    _Script_RsGameTechRT::RsUiWindow*& get_ParentUIWindow();
    void* get_ContainingSubMenuFocusGroup();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& get_ContainingSubMenu();
    bool get_HasFocus();
    void set_HasFocus(bool value);
    static _Script_CoreUObject::Class* static_class();
    void OptionalConsumeBackButton(bool& Consumed);
    void ReceivedFocus();
    void LostFocus();
    void ExecuteUbergraph_UI_LoadableScreenWidget(int32_t EntryPoint);
}; // Size: 0x230
#pragma pack(pop)
}
