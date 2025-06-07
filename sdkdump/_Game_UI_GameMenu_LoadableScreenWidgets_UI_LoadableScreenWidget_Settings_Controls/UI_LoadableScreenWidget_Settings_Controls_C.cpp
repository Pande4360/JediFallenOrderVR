#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer\UI_ControllerMappingContainer_C.hpp"
#include "..\_Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget\UI_LoadableScreenWidget_C.hpp"
#include "UI_LoadableScreenWidget_Settings_Controls_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector\UI_PauseMenuBtn_Selector_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuSwitch\UI_PauseMenuSwitch_C.hpp"
#include "..\_Game_UI_PauseMenu_UI_PauseMenuToggle\UI_PauseMenuToggle_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPromptDirectKey\UI_MenuButtonPromptDirectKey_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\InputActionKeyMapping.hpp"
#include "..\_Script_Engine\InputAxisKeyMapping.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_SlateCore\FocusEvent.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x230);
}
_Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_LeftStick() {
    return *(_Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_7() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x330);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_6() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x328);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_chkInvertMouseY() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x268);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_StoredValue() {
    return *(int32_t*)((uintptr_t)this + 0x544);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_btnPhotomode() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x240);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_btnRumble() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x248);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_chkInvertGamepadX() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x250);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_0() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x300);
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_chkInvertGamepadY() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x258);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_8_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_chkInvertMouseX() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuSwitch::UI_PauseMenuSwitch_C**)((uintptr_t)this + 0x260);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_InvertMouseYText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::PlayStarChart() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RefreshRemapButtons_Delegate() {
    return (void*)((uintptr_t)this + 0x528);
}
_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_ControllerRemapScreen() {
    return *(_Game_UI_GameMenu_ControlsMenu_UI_ControllerMappingContainer::UI_ControllerMappingContainer_C**)((uintptr_t)this + 0x270);
}
_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_EditControls() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuToggle::UI_PauseMenuToggle_C**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget_Settings_Controls.UI_LoadableScreenWidget_Settings_Controls_C");
    return result;
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_GamepadInput() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_InvertMouseXText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x288);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_InvertXMouse() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_InvertXText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_InvertYMouse() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_InvertYText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2b0);
}
_Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_KeyboardInput() {
    return *(_Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_MouseSensBtn() {
    return *(_Game_UI_PauseMenu_UI_PauseMenuBtn_Selector::UI_PauseMenuBtn_Selector_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_MouseSensitivity() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2d0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::SetupText() {
    return;
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_IsControllerRemapReady() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c0 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_MouseSensText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_PhotomodeText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_PlusSign() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RetainerBox_2() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2f0);
}
_Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RightStick() {
    return *(_Game_UI_UI_MenuButtonPromptDirectKey::UI_MenuButtonPromptDirectKey_C**)((uintptr_t)this + 0x2f8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateTextHighlights(bool Highlights, _Script_UMG::TextBlock* Text) {
    return;
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x308);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_PressedActionName() {
    return (void*)((uintptr_t)this + 0x4c8);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_2() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x310);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_4() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x318);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::InitializeRemapButtons() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::set_IsControllerRemapReady(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RsLine_5() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x320);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdatePhotomode() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_RumbleText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x338);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_ScrollBox_0() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x340);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::SetInputSwapMode(bool IsSwapMode) {
    return;
}
_Script_UMG::WidgetSwitcher*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_WidgetSwitcher_0() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x348);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_SettingsTextColor() {
    return (void*)((uintptr_t)this + 0x350);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_DefaultTextColor() {
    return (void*)((uintptr_t)this + 0x4d0);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_HighlightTextColor() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::SwapButtonPressed(void* Action, bool& Consume) {
    return;
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_ControllerRemapLastSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x520 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::set_ControllerRemapLastSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x520 + 0);
    *(uint8_t*)((uintptr_t)this + 0x520 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_IsInputSwapMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x521 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::set_IsInputSwapMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x521 + 0);
    *(uint8_t*)((uintptr_t)this + 0x521 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BindRemapBtns() {
    return;
}
_Script_SwGame::SWGameUserSettings*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x538);
}
int32_t& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::get_OldMouseSensitivity() {
    return *(int32_t*)((uintptr_t)this + 0x540);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::SetMouseSensitivity() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateMouseSensitivity(bool UpdateOldValue) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateInvertMouseY() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateInvertMouseX() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::OptionalConsumeBackButton0(bool& Consumed) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateInvertX() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateRumble() {
    return;
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::GetRumble() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::RemapAxisKey(void* Action, int32_t Index, _Script_Engine::InputAxisKeyMapping NewInputAxis) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::RemapActionKey(void* Action, int32_t Index, _Script_Engine::InputActionKeyMapping NewInputAction) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::UpdateInvertY() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertGamepadX_K2Node_ComponentBoundEvent_3_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__btnRumble_K2Node_ComponentBoundEvent_4_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__ScrollBox_0_K2Node_ComponentBoundEvent_14_OnUserScrolledEvent__DelegateSignature(float CurrentOffset) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertGamepadY_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::Construct() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::OnResetControlsToDefault(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__btnPhotomode_K2Node_ComponentBoundEvent_5_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::OnSwapInputActions(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::OnFocusLost(_Script_SlateCore::FocusEvent InFocusEvent) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__EditControls_K2Node_ComponentBoundEvent_20_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::EnableGameMenuInputs() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::RefreshInvertGamepadX() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::RefreshInvertGamepadY() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__btnPhotomode_K2Node_ComponentBoundEvent_17_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__btnRumble_K2Node_ComponentBoundEvent_18_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertGamepadX_K2Node_ComponentBoundEvent_19_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertGamepadY_K2Node_ComponentBoundEvent_21_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertMouseX_K2Node_ComponentBoundEvent_1_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertMouseY_K2Node_ComponentBoundEvent_6_OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertMouseX_K2Node_ComponentBoundEvent_7_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__chkInvertMouseY_K2Node_ComponentBoundEvent_8_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::ReceivedFocus0() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_2_ClickLeft__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_9_ClickRight__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_12_Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_15_Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_16_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__MouseSensBtn_K2Node_ComponentBoundEvent_22_CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::IncrementMouseSensitivity(bool Increment) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::BndEvt__ControllerRemapButtonScrollingHack_K2Node_ComponentBoundEvent_13_RsButtonEvent__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::ExecuteUbergraph_UI_LoadableScreenWidget_Settings_Controls(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget_Settings_Controls::UI_LoadableScreenWidget_Settings_Controls_C::RefreshRemapButtons_Delegate__DelegateSignature() {
    return;
}
