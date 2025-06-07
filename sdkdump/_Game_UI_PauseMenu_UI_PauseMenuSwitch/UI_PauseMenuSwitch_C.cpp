#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
#include "UI_PauseMenuSwitch_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\ComboBoxString.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_HighlightedStyle() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x338);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_OnClick() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x368);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_ToggleOff() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x340);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_ToggleOn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x348);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_On() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x358);
}
_Script_UMG::ProgressBar*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_HoldToAcceptProgress() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x388);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_Off() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x350);
}
_Script_UMG::Button*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_Button_5() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x370);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_OnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x360);
}
_Script_UMG::ComboBoxString*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_ComboBoxRef() {
    return *(_Script_UMG::ComboBoxString**)((uintptr_t)this + 0x450);
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_ButtonBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_Circle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x380);
}
_Script_UMG::Overlay*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_Overlay_1() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x390);
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_SelectedBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x398);
}
_Script_UMG::SizeBox*& _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x3a0);
}
void* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_DefaultStyle() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_PressedStyle() {
    return (void*)((uintptr_t)this + 0x3f8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_HighlightedStyle_FocusGroupDisabled() {
    return (void*)((uintptr_t)this + 0x420);
}
bool _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_IsToggled() {
    return (*(uint8_t*)((uintptr_t)this + 0x448 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::set_IsToggled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x448 + 0);
    *(uint8_t*)((uintptr_t)this + 0x448 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::get_IsAToggle() {
    return (*(uint8_t*)((uintptr_t)this + 0x449 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::ExecuteUbergraph_UI_PauseMenuSwitch(int32_t EntryPoint) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::set_IsAToggle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x449 + 0);
    *(uint8_t*)((uintptr_t)this + 0x449 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/PauseMenu/UI_PauseMenuSwitch.UI_PauseMenuSwitch_C");
    return result;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::UpdateFocusVisuals0(bool& Handled) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::SetButtonText(void* newText) {
    return;
}
void* _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::Get_HoldToAcceptProgress_Visibility_0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::ToggleCheck(bool Enabled) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::OnAccepted() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::OnCancelOut0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::UpdateFocusOn() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::UpdateFocusOff() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::Construct() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C::OnFocused() {
    return;
}
