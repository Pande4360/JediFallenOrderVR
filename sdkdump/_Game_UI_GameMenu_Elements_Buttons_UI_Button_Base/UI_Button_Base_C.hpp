#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_UI_GameMenu_Elements_UI_Element_Base\UI_Element_Base_C.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
struct RetainerBox;
}
namespace _Script_UMG {
struct Image;
}
namespace _Script_UMG {
struct WidgetAnimation;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base {
#pragma pack(push, 1)
struct UI_Button_Base_C : public _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C {
    private: char pad_2c0[0x228]; public:
    void* get_UberGraphFrame0();
    bool get_RequestURLOnFocus();
    void set_RequestURLOnFocus(bool value);
    void* get_UMGEditorText();
    bool get_ShowText();
    void set_ShowText(bool value);
    void* get_TextFont();
    void* get_TextColor();
    void* get_TextColor_Focused();
    void* get_TextColor_Visited();
    void* get_Image();
    void* get_ImageColorOpacity();
    void* get_Image_Focused();
    bool get_WasHovered();
    void set_WasHovered(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetPulseImg(_Script_UMG::Image*& PulseImg);
    void GetPulseAnim(_Script_UMG::WidgetAnimation*& PulseAnim);
    void GetButtonText_Warnings_BASEONLY(_Script_UMG::TextBlock*& Text);
    void GetFocusedRoundedRect(_Script_UMG::Image*& FocusedRoundedRect);
    void GetRetainerBox(_Script_UMG::RetainerBox*& RetainerBox);
    void GetButtonImage(_Script_UMG::Image*& ButtonImage);
    void GetButtonText(_Script_UMG::TextBlock*& ButtonText);
    void UI_UpdateFocusState0(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive);
    void SetButtonImage(_Script_SlateCore::SlateBrush SlateBrush);
    void Preconstruct_Init0(bool& Result);
    void SetButtonText(void* newText);
    void Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_Button_Base(int32_t EntryPoint);
}; // Size: 0x4e8
#pragma pack(pop)
}
