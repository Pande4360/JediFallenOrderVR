#include "..\FUObjectArray.hpp"
#include "UI_Dropdown_Element_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
void* _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_Text() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Widgets/UI_Dropdown_Element.UI_Dropdown_Element_C");
    return result;
}
_Script_UMG::Button*& _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_Button_0() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x260);
}
void* _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_Pressed() {
    return (void*)((uintptr_t)this + 0x288);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_txt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x268);
}
void* _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_Focused() {
    return (void*)((uintptr_t)this + 0x408);
}
void* _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::get_TextColor() {
    return (void*)((uintptr_t)this + 0x298);
}
void _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::ExecuteUbergraph_UI_Dropdown_Element(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::Focused__DelegateSignature(void* String) {
    return;
}
void _Game_UI_GameMenu_Widgets_UI_Dropdown_Element::UI_Dropdown_Element_C::Pressed__DelegateSignature(void* String) {
    return;
}
