#include "..\FUObjectArray.hpp"
#include "UI_Button_Base_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_UI_Element_Base\UI_Element_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\SlateBrush.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_TextColor() {
    return (void*)((uintptr_t)this + 0x348);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x2c0);
}
bool _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_ShowText() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
bool _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_RequestURLOnFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::Preconstruct_Init0(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::set_RequestURLOnFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_TextFont() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_UMGEditorText() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::set_ShowText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_TextColor_Focused() {
    return (void*)((uintptr_t)this + 0x370);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_TextColor_Visited() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_Image() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_Image_Focused() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_ImageColorOpacity() {
    return (void*)((uintptr_t)this + 0x448);
}
bool _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::get_WasHovered() {
    return (*(uint8_t*)((uintptr_t)this + 0x4e0 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::set_WasHovered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/Buttons/UI_Button_Base.UI_Button_Base_C");
    return result;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetPulseImg(_Script_UMG::Image*& PulseImg) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetPulseAnim(_Script_UMG::WidgetAnimation*& PulseAnim) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetButtonText_Warnings_BASEONLY(_Script_UMG::TextBlock*& Text) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetFocusedRoundedRect(_Script_UMG::Image*& FocusedRoundedRect) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetRetainerBox(_Script_UMG::RetainerBox*& RetainerBox) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetButtonImage(_Script_UMG::Image*& ButtonImage) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::GetButtonText(_Script_UMG::TextBlock*& ButtonText) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::UI_UpdateFocusState0(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::SetButtonImage(_Script_SlateCore::SlateBrush SlateBrush) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::SetButtonText(void* newText) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_Base::UI_Button_Base_C::ExecuteUbergraph_UI_Button_Base(int32_t EntryPoint) {
    return;
}
