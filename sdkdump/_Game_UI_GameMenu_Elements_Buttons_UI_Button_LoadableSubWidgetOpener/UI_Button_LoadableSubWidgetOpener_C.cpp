#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_Base\UI_Button_Base_C.hpp"
#include "UI_Button_LoadableSubWidgetOpener_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
bool _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_CurrentlySelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4e8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_FocusedRoundedRect() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x500);
}
_Script_UMG::SizeBox*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_Button() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x4f0);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_ButtonBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4f8);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x508);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_Widget_ButtonText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x510);
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::set_CurrentlySelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::get_UIStyleSheet() {
    return (void*)((uintptr_t)this + 0x520);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/Buttons/UI_Button_LoadableSubWidgetOpener.UI_Button_LoadableSubWidgetOpener_C");
    return result;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::GetFocusedRoundedRect0(_Script_UMG::Image*& FocusedRoundedRect) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::GetRetainerBox0(_Script_UMG::RetainerBox*& RetainerBox) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::GetButtonText0(_Script_UMG::TextBlock*& ButtonText) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::Construct() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::OnFocused() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::OnUnfocused() {
    return;
}
void _Game_UI_GameMenu_Elements_Buttons_UI_Button_LoadableSubWidgetOpener::UI_Button_LoadableSubWidgetOpener_C::ExecuteUbergraph_UI_Button_LoadableSubWidgetOpener(int32_t EntryPoint) {
    return;
}
