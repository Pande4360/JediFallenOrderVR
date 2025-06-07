#include "..\FUObjectArray.hpp"
#include "UI_CustomizationBtn_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\ComboBoxString.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_HighlightedStyle_FocusGroupDisabled() {
    return (void*)((uintptr_t)this + 0x410);
}
_Script_UMG::ProgressBar*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_HoldToAcceptProgress() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x370);
}
void* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x338);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x340);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x360);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_OnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x348);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_OnClick() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x350);
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::OnAccepted() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_ButtonBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x358);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_FocusBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x368);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_Img_SelectorArrow_Left() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::set_IsAToggle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x439 + 0);
    *(uint8_t*)((uintptr_t)this + 0x439 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_Img_SelectorArrow_Right() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x380);
}
_Script_UMG::Image*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_PulseImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x388);
}
void* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_PressedStyle() {
    return (void*)((uintptr_t)this + 0x3e8);
}
_Script_UMG::SizeBox*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x390);
}
void* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_DefaultStyle() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_HighlightedStyle() {
    return (void*)((uintptr_t)this + 0x3c0);
}
bool _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_IsToggled() {
    return (*(uint8_t*)((uintptr_t)this + 0x438 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::set_IsToggled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x438 + 0);
    *(uint8_t*)((uintptr_t)this + 0x438 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_IsAToggle() {
    return (*(uint8_t*)((uintptr_t)this + 0x439 + 0)) & 1 != 0;
}
_Script_UMG::ComboBoxString*& _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::get_ComboBoxRef() {
    return *(_Script_UMG::ComboBoxString**)((uintptr_t)this + 0x440);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/UI_CustomizationBtn.UI_CustomizationBtn_C");
    return result;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::UpdateFocusVisuals0(bool& Handled) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::SetButtonText(void* newText) {
    return;
}
void* _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::Get_HoldToAcceptProgress_Visibility_0() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::ToggleCheck(bool Enabled) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::OnCancelOut0() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_CustomizationBtn::UI_CustomizationBtn_C::ExecuteUbergraph_UI_CustomizationBtn(int32_t EntryPoint) {
    return;
}
