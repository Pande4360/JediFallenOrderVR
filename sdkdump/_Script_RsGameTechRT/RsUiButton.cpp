#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsUiButton.hpp"
#include "RsUiWindow.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Script_RsGameTechRT::RsUiButton::get_OnAcceptedEvent() {
    return (void*)((uintptr_t)this + 0x208);
}
void* _Script_RsGameTechRT::RsUiButton::get_OnFocusedEvent() {
    return (void*)((uintptr_t)this + 0x218);
}
void* _Script_RsGameTechRT::RsUiButton::get_OnUnfocusedEvent() {
    return (void*)((uintptr_t)this + 0x228);
}
bool _Script_RsGameTechRT::RsUiButton::get_bStartFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x239 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsUiButton::get_FocusGroup() {
    return (void*)((uintptr_t)this + 0x23a);
}
_Script_UMG::ScrollBox*& _Script_RsGameTechRT::RsUiButton::get_ContainingScrollBox() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x250);
}
void _Script_RsGameTechRT::RsUiButton::set_bStartFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x239 + 0);
    *(uint8_t*)((uintptr_t)this + 0x239 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsUiButton::get_AcceptHoldTimeMinVisualPercent() {
    return *(float*)((uintptr_t)this + 0x240);
}
float& _Script_RsGameTechRT::RsUiButton::get_AcceptHoldTime() {
    return *(float*)((uintptr_t)this + 0x23c);
}
bool _Script_RsGameTechRT::RsUiButton::get_bFocusOnMouseHover() {
    return (*(uint8_t*)((uintptr_t)this + 0x244 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiButton::set_bFocusOnMouseHover(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x244 + 0);
    *(uint8_t*)((uintptr_t)this + 0x244 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsUiButton::get_bAcceptOnMouseClick() {
    return (*(uint8_t*)((uintptr_t)this + 0x245 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsUiButton::OnFocusGroupDisabled() {
    return;
}
void _Script_RsGameTechRT::RsUiButton::set_bAcceptOnMouseClick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x245 + 0);
    *(uint8_t*)((uintptr_t)this + 0x245 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsUiWindow*& _Script_RsGameTechRT::RsUiButton::get_ContainingUiWindow() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x248);
}
void _Script_RsGameTechRT::RsUiButton::OnOwningWindowFocusGroupStatusChanged(void* FocusGroupChanged) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsUiButton::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsUiButton");
    return result;
}
void _Script_RsGameTechRT::RsUiButton::SetFocusGroup(void* InFocusGroup) {
    return;
}
void _Script_RsGameTechRT::RsUiButton::OnFocusGroupEnabled() {
    return;
}
void _Script_RsGameTechRT::RsUiButton::SetFocused(bool bFocusDesired) {
    return;
}
void _Script_RsGameTechRT::RsUiButton::OnUnfocused() {
    return;
}
void _Script_RsGameTechRT::RsUiButton::OnOwningWindowFocusChanged(_Script_RsGameTechRT::RsUiButton* NewFocusedButton) {
    return;
}
void _Script_RsGameTechRT::RsUiButton::OnAccepted() {
    return;
}
void _Script_RsGameTechRT::RsUiButton::OnFocused() {
    return;
}
bool _Script_RsGameTechRT::RsUiButton::IsFocusGroupEnabled() {
    return;
}
bool _Script_RsGameTechRT::RsUiButton::IsFocused() {
    return;
}
void* _Script_RsGameTechRT::RsUiButton::GetFocusGroup() {
    return;
}
_Script_RsGameTechRT::RsUiWindow* _Script_RsGameTechRT::RsUiButton::GetContainingUiWindow() {
    return;
}
float _Script_RsGameTechRT::RsUiButton::GetAcceptHoldTimeMinVisualPercent() {
    return;
}
float _Script_RsGameTechRT::RsUiButton::GetAcceptHoldTime() {
    return;
}
float _Script_RsGameTechRT::RsUiButton::GetAcceptHoldProgressPercent() {
    return;
}
