#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Base\UI_PauseMenuBtn_Base_C.hpp"
#include "UI_PauseMenuToggle_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\ComboBoxString.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::ProgressBar*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_HoldToAcceptProgress() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x368);
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::OnFocusGroupEnabled() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_OnClick() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x348);
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x338);
}
_Script_UMG::WidgetAnimation*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_OnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x340);
}
_Script_UMG::Border*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x350);
}
_Script_CoreUObject::Class* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/PauseMenu/UI_PauseMenuToggle.UI_PauseMenuToggle_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_ButtonBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x358);
}
_Script_UMG::TextBlock*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x360);
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_Img_SelectorArrow_Left() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_Img_SelectorArrow_Right() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
_Script_UMG::Button*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_Interact() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x380);
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::ClickCancel() {
    return;
}
_Script_UMG::Button*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_LeftBtn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x388);
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_HighlightedStyle_FocusGroupDisabled() {
    return (void*)((uintptr_t)this + 0x428);
}
_Script_UMG::Overlay*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_Overlay_1() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x390);
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::OnFocusGroupDisabled() {
    return;
}
_Script_UMG::Button*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_RightBtn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x398);
}
_Script_UMG::Image*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_SelectedBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3a0);
}
_Script_UMG::SizeBox*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x3a8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_DefaultStyle() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::ExecuteUbergraph_UI_PauseMenuToggle(int32_t EntryPoint) {
    return;
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_HighlightedStyle() {
    return (void*)((uintptr_t)this + 0x3d8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_PressedStyle() {
    return (void*)((uintptr_t)this + 0x400);
}
bool _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_IsToggled() {
    return (*(uint8_t*)((uintptr_t)this + 0x450 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::set_IsToggled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x450 + 0);
    *(uint8_t*)((uintptr_t)this + 0x450 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_IsAToggle() {
    return (*(uint8_t*)((uintptr_t)this + 0x451 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::ClickRight__DelegateSignature() {
    return;
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::Get_HoldToAcceptProgress_Visibility_0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::set_IsAToggle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x451 + 0);
    *(uint8_t*)((uintptr_t)this + 0x451 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::BndEvt__RightBtn_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    return;
}
_Script_UMG::ComboBoxString*& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_ComboBoxRef() {
    return *(_Script_UMG::ComboBoxString**)((uintptr_t)this + 0x458);
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_ClickLeft() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_ClickRight() {
    return (void*)((uintptr_t)this + 0x470);
}
bool _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_SelectOnClick() {
    return (*(uint8_t*)((uintptr_t)this + 0x480 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::set_SelectOnClick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x480 + 0);
    *(uint8_t*)((uintptr_t)this + 0x480 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_MinDesiredWidth() {
    return *(float*)((uintptr_t)this + 0x484);
}
bool _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_CancelOnUnfocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x488 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::set_CancelOnUnfocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x488 + 0);
    *(uint8_t*)((uintptr_t)this + 0x488 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::get_CancelOnClick() {
    return (*(uint8_t*)((uintptr_t)this + 0x489 + 0)) & 1 != 0;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::ToggleCheck(bool Enabled) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::set_CancelOnClick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x489 + 0);
    *(uint8_t*)((uintptr_t)this + 0x489 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::UpdateFocusVisuals0(bool& Handled) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::SetButtonText(void* newText) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::OnAccepted() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::OnCancelOut0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::ForceOnAccepted() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::OnFocused() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::BndEvt__LeftBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::OnUnfocused() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C::ClickLeft__DelegateSignature() {
    return;
}
