#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsUiButton.hpp"
#include "RsUiRoot.hpp"
#include "RsUiWindow.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Script_RsGameTechRT::RsUiWindow::get_OnFocusChangedEvent() {
    return (void*)((uintptr_t)this + 0x228);
}
void _Script_RsGameTechRT::RsUiWindow::OnFocusChanged(_Script_RsGameTechRT::RsUiButton* NewFocusedButton) {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::get_OnAcceptedEvent() {
    return (void*)((uintptr_t)this + 0x218);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bDisableGameInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x249 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bPauseGameWhileOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x248 + 0);
    *(uint8_t*)((uintptr_t)this + 0x248 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::TryNavigation(void* Direction, void* FocusGroup, bool bAllowUnfocusedScrolling) {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::get_OnFocusGroupStateChanged() {
    return (void*)((uintptr_t)this + 0x238);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bPauseGameWhileOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x248 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bDisableGameInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x249 + 0);
    *(uint8_t*)((uintptr_t)this + 0x249 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bGarbageCollectOnClose() {
    return (*(uint8_t*)((uintptr_t)this + 0x24e + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsUiWindow::get_bDisableInputToOtherWindows() {
    return (*(uint8_t*)((uintptr_t)this + 0x24a + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bDisableInputToOtherWindows(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24a + 0);
    *(uint8_t*)((uintptr_t)this + 0x24a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bConsumeInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x24b + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bConsumeInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24b + 0);
    *(uint8_t*)((uintptr_t)this + 0x24b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bCloseOnCancel() {
    return (*(uint8_t*)((uintptr_t)this + 0x24c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::RequestUnpauseGame() {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::set_bCloseOnCancel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24c + 0);
    *(uint8_t*)((uintptr_t)this + 0x24c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bDestroyOnClose() {
    return (*(uint8_t*)((uintptr_t)this + 0x24d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bDestroyOnClose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24d + 0);
    *(uint8_t*)((uintptr_t)this + 0x24d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsUiWindow::get_ChildButtons() {
    return (void*)((uintptr_t)this + 0x5c8);
}
void _Script_RsGameTechRT::RsUiWindow::set_bGarbageCollectOnClose(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24e + 0);
    *(uint8_t*)((uintptr_t)this + 0x24e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsUiWindow::CloseWindow() {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsUiWindow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsUiWindow");
    return result;
}
bool _Script_RsGameTechRT::RsUiWindow::get_bRegisterForAccept() {
    return (*(uint8_t*)((uintptr_t)this + 0x24f + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bRegisterForAccept(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x24f + 0);
    *(uint8_t*)((uintptr_t)this + 0x24f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bShowMouseCursor() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::SetShowMouseCursor(bool bNewShowMouseCursor) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::set_bShowMouseCursor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsUiWindow::get_FocusGroupToAccept() {
    return (void*)((uintptr_t)this + 0x251);
}
float& _Script_RsGameTechRT::RsUiWindow::get_HeldInputRetriggerDelay() {
    return *(float*)((uintptr_t)this + 0x254);
}
float& _Script_RsGameTechRT::RsUiWindow::get_HeldInputRepeatTime() {
    return *(float*)((uintptr_t)this + 0x258);
}
float& _Script_RsGameTechRT::RsUiWindow::get_MinTimeBetweenNavigation() {
    return *(float*)((uintptr_t)this + 0x25c);
}
void* _Script_RsGameTechRT::RsUiWindow::get_NavigationInputs() {
    return (void*)((uintptr_t)this + 0x260);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bAllowRightStickUnfocusedScrolling() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::OnActionReleased(void*& ActionName, void* ActionType) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::set_bAllowRightStickUnfocusedScrolling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsUiWindow::SetDisableGameInput(bool bDisablesGameInput) {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::get_bUseNonGridNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x271 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::set_bUseNonGridNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x271 + 0);
    *(uint8_t*)((uintptr_t)this + 0x271 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bR4DlcDisableInputImmediately() {
    return (*(uint8_t*)((uintptr_t)this + 0x272 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::OnActionPressed(void*& ActionName, void* ActionType) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::set_bR4DlcDisableInputImmediately(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x272 + 0);
    *(uint8_t*)((uintptr_t)this + 0x272 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsUiWindow::get_NonGridNavMaxAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x274);
}
void* _Script_RsGameTechRT::RsUiWindow::get_StartingDisabledFocusGroups() {
    return (void*)((uintptr_t)this + 0x278);
}
bool _Script_RsGameTechRT::RsUiWindow::get_bPersistThroughLevelReload() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiWindow::SetFocusGroupToAccept(void* FocusGroup) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::set_bPersistThroughLevelReload(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsUiWindow::get_ScrollingSpeed() {
    return *(float*)((uintptr_t)this + 0x28c);
}
void* _Script_RsGameTechRT::RsUiWindow::get_ActionNavigationInputType() {
    return (void*)((uintptr_t)this + 0x330);
}
float _Script_RsGameTechRT::RsUiWindow::GetAcceptHoldTime() {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::get_ActionDirections() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void _Script_RsGameTechRT::RsUiWindow::SetFocusedButton(_Script_RsGameTechRT::RsUiButton* ButtonToFocus) {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::get_DynamicInputActionCallbacks() {
    return (void*)((uintptr_t)this + 0x420);
}
void* _Script_RsGameTechRT::RsUiWindow::get_DynamicInputConditionalActionDelegates() {
    return (void*)((uintptr_t)this + 0x470);
}
void _Script_RsGameTechRT::RsUiWindow::OnWindowOpened() {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::get_HeldInputActions() {
    return (void*)((uintptr_t)this + 0x510);
}
void _Script_RsGameTechRT::RsUiWindow::SetFocusGroupDisabled(void* FocusGroup, bool bDisabled) {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::get_FocusedButtons() {
    return (void*)((uintptr_t)this + 0x5b8);
}
_Script_RsGameTechRT::RsUiRoot*& _Script_RsGameTechRT::RsUiWindow::get_OwningRoot() {
    return *(_Script_RsGameTechRT::RsUiRoot**)((uintptr_t)this + 0x5d8);
}
void _Script_RsGameTechRT::RsUiWindow::RequestPauseGame() {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::TryUnfocusedScrollingNavigation(void* Direction) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::SetConsumeInput(bool bNewConsumeInput) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::ResetFocusForGroup(void* FocusGroup) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::ResetFocus() {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::OnWindowClosed() {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::OnAccepted(_Script_RsGameTechRT::RsUiButton* AcceptedButton) {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::IsInputEnabled() {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::IsInputActionPressed(void* ActionName) {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::IsFocusGroupDisabled(void* FocusGroup) {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::IsFocused(_Script_RsGameTechRT::RsUiButton* Button) {
    return;
}
float _Script_RsGameTechRT::RsUiWindow::GetInputActionPressElapsedTime(void* ActionName) {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::GetFocusGroupToAccept() {
    return;
}
_Script_RsGameTechRT::RsUiButton* _Script_RsGameTechRT::RsUiWindow::GetFocusedButton(void* FocusGroup, bool bClickedButtonIfSet) {
    return;
}
float _Script_RsGameTechRT::RsUiWindow::GetDynamicInputHoldProgressPercent(void* ActionName) {
    return;
}
bool _Script_RsGameTechRT::RsUiWindow::GetConsumeInput() {
    return;
}
void* _Script_RsGameTechRT::RsUiWindow::GetChildButtons() {
    return;
}
float _Script_RsGameTechRT::RsUiWindow::GetAcceptHoldProgressPercent() {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::EnableInput() {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::DisableInput() {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::AddDynamicInputConditionalAction(void* ActionName, void*& OnPressCallback, bool bRepeatWhenHeld) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::AddDynamicInputAction(void* ActionName, void*& OnPressCallback, bool bRepeatWhenHeld) {
    return;
}
void _Script_RsGameTechRT::RsUiWindow::AddDynamicHeldInputAction(void* ActionName, void*& OnPressCallback, float RequiredHoldDuration, float HoldTimeMinVisualPercent) {
    return;
}
