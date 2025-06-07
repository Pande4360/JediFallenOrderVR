#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base {
struct UI_SubMenu_Base_C;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct Button;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight {
#pragma pack(push, 1)
struct UI_Button_LeftRight_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0x70]; public:
    void* get_UberGraphFrame();
    _Script_UMG::WidgetAnimation*& get_Hover();
    _Script_UMG::WidgetAnimation*& get_Pulse();
    _Script_UMG::Image*& get_Arrow();
    _Script_UMG::Image*& get_BlueOutline();
    _Script_UMG::Image*& get_Glow();
    _Script_UMG::Button*& get_LRButton();
    _Script_UMG::Image*& get_SolidBacking();
    _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& get_SubmenuBase();
    void* get_HoverButton();
    void* get_OnClicked();
    bool get_CurrentlyHovered();
    void set_CurrentlyHovered(bool value);
    static _Script_CoreUObject::Class* static_class();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__LRButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Button_LeftRight(int32_t EntryPoint);
    void OnClicked__DelegateSignature();
    void HoverButton__DelegateSignature();
}; // Size: 0x2c8
#pragma pack(pop)
}
