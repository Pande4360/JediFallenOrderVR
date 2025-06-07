#include "..\FUObjectArray.hpp"
#include "UI_ControlRemapBtn_C.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector\UI_ControlRemapDetector_C.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow\UI_ControlRemapRow_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::ShowRemapText() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_OnClick() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnFocusGroupEnabled0() {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/ControlsMenu/UI_ControlRemapBtn.UI_ControlRemapBtn_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_Invalid() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::ProgressBar*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_HoldToAcceptProgress() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x290);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::RefreshButton() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_OnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::ExecuteUbergraph_UI_ControlRemapBtn(int32_t EntryPoint) {
    return;
}
_Script_UMG::Border*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_GreyOut() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x288);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnFocusGroupDisabled0() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_ButtonBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_ButtonLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::Initialize(void* Action) {
    return;
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_Overlay_1() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Script_UMG::SizeBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2a0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x2a8);
}
float& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_HoldProgress() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_InputDetector() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C**)((uintptr_t)this + 0x2b8);
}
_Script_SwGame::SWGameUserSettings*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x2c0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnAccepted0() {
    return;
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_isController() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::ShowString(void* InText) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::set_isController(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::MouseClicked() {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_Action() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnMouseFocused__DelegateSignature(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton) {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_Key() {
    return (void*)((uintptr_t)this + 0x2d8);
}
float _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::Get_HoldToAcceptProgress_Percent_0() {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_StartInputRemap_Delegate() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnUnfocused0() {
    return;
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_CannotBeChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x300 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::set_CannotBeChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x300 + 0);
    *(uint8_t*)((uintptr_t)this + 0x300 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnFocused0() {
    return;
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_CurrentlySelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x301 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::set_CurrentlySelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x301 + 0);
    *(uint8_t*)((uintptr_t)this + 0x301 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_SendKeyForRemap() {
    return (void*)((uintptr_t)this + 0x308);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_RemapRow() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C**)((uintptr_t)this + 0x318);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::get_OnMouseFocused() {
    return (void*)((uintptr_t)this + 0x320);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::ShowButton() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::UpdateFocusVisuals(bool& Handled) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::TempChangeButton(_Script_InputCore::Key Key) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::UpdateButton(_Script_InputCore::Key NewKey) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::SetCannotBeChanged() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::PlayInvalidAnim() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::OnMouseEnter(_Script_SlateCore::Geometry MyGeometry, _Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::SendKeyForRemap__DelegateSignature(_Script_InputCore::Key NewKey) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C::StartInputRemap_Delegate__DelegateSignature(void* Action, _Script_InputCore::Key Key, bool IsGamepad, _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton) {
    return;
}
