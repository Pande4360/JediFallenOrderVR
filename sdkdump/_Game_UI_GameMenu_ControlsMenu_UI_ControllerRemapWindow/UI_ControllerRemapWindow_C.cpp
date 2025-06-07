#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn\UI_ControlRemapBtn_C.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector\UI_ControlRemapDetector_C.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow\UI_ControlRemapRow_C.hpp"
#include "UI_ControllerRemapWindow_C.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls\UI_LoadableScreenWidget_Settings_Controls_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_BackBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x620);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_AcceptBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x618);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_Message() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x640);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::BndEvt__ResetDefaults_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_BackgroundTint() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x628);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_BasicsTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x630);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_MapTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_MessageBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x648);
}
_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_ControlSettingsWidget() {
    return *(_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C**)((uintptr_t)this + 0x798);
}
_Script_UMG::Image*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_MouseBlocker() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x650);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_NavigationTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x658);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_RemapInput() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x660);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_ResetDefaults() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x668);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_ResetToDefaultBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x670);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_RetainerBox_2() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x678);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_EnumToTabRowIndex() {
    return (void*)((uintptr_t)this + 0x748);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_ScrollBox_0() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x680);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::GetDisplayNameFromAction(void* RowName) {
    return;
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_TabLeftBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x688);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_TabRightBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x690);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_ControlRemapDetector() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapDetector::UI_ControlRemapDetector_C**)((uintptr_t)this + 0x698);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6a0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_MenuButtonPrompt_C_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6a8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_MenuButtonPrompt_C_2() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6b8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_MenuButtonPrompt_C_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6b0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_MenuButtonPrompt_C_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6c0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UI_MenuButtonPrompt_C_4() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_VerticalBox_0() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_UITxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_VehicleTxt() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d8);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_IsInputSwapMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e8 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::set_IsInputSwapMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::BlockRemapMessage(void* IgnoredAction, _Script_InputCore::Key IgnoredKey) {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_RefreshRemapButtons_Del() {
    return (void*)((uintptr_t)this + 0x6f0);
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::ResetAllInputMappings() {
    return;
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_WindowClosed() {
    return (void*)((uintptr_t)this + 0x700);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_AllRows() {
    return (void*)((uintptr_t)this + 0x710);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_CurrentRow() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C**)((uintptr_t)this + 0x720);
}
bool _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_FocusedOnGamePad() {
    return (*(uint8_t*)((uintptr_t)this + 0x728 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::set_FocusedOnGamePad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x728 + 0);
    *(uint8_t*)((uintptr_t)this + 0x728 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C*& _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_RemapButton() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C**)((uintptr_t)this + 0x730);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_TabRows() {
    return (void*)((uintptr_t)this + 0x738);
}
void* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::get_LockMouseInput_Del() {
    return (void*)((uintptr_t)this + 0x7a0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/ControlsMenu/UI_ControllerRemapWindow.UI_ControllerRemapWindow_C");
    return result;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::OnTab(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::TextToUpper() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::FocusGamepadOrPC(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapRow::UI_ControlRemapRow_C* TargetRow) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::SetSectionHeader(_Script_UMG::TextBlock* Text) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::InitializeCustomNav() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::DoNav(void* Action, bool& Consumed) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::InitializeRemapButtons() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::StoppedDetectingInput() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::RefreshRemapButtons() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::StartInputRemap(void* Action, _Script_InputCore::Key Key, bool IsGamepad, _Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::ShowMessage(_Script_InputCore::Key Key, void* InText) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::KeyUnboundMessage(_Script_InputCore::Key Key, void*& Actions) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::UpdateControlsTray() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::HideMessage() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::SetLockMouseInput(bool IsLocked) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::OnMouseFocusedButton(_Game_UI_GameMenu_ControlsMenu_UI_ControlRemapBtn::UI_ControlRemapBtn_C* RemapButton) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::OnCancelInput(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::Construct() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::ExecuteUbergraph_UI_ControllerRemapWindow(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::LockMouseInput_Del__DelegateSignature(bool IsLocked) {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::WindowClosed__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_ControlsMenu_UI_ControllerRemapWindow::UI_ControllerRemapWindow_C::RefreshRemapButtons_Del__DelegateSignature() {
    return;
}
