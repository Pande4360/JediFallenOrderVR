#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
namespace _Script_UMG {
struct Button;
}
namespace _Script_UMG {
struct TextBlock;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_UI_GameMenu_Widgets_UI_Dropdown_Element {
#pragma pack(push, 1)
struct UI_Dropdown_Element_C : public _Script_RsGameTechRT::RsUiButton {
    private: char pad_258[0x1c0]; public:
    void* get_UberGraphFrame();
    _Script_UMG::Button*& get_Button_0();
    _Script_UMG::TextBlock*& get_txt();
    void* get_Text();
    void* get_Pressed();
    void* get_TextColor();
    void* get_Focused();
    static _Script_CoreUObject::Class* static_class();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_UI_Dropdown_Element(int32_t EntryPoint);
    void Focused__DelegateSignature(void* String);
    void Pressed__DelegateSignature(void* String);
}; // Size: 0x418
#pragma pack(pop)
}
