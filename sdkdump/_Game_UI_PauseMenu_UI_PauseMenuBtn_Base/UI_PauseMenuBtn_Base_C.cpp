#include "..\FUObjectArray.hpp"
#include "UI_PauseMenuBtn_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_ButtonText() {
    return (void*)((uintptr_t)this + 0x260);
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::set_CurrentlySelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x291 + 0);
    *(uint8_t*)((uintptr_t)this + 0x291 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_ConsumesNavInputWhileSelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x290 + 0)) & 1 != 0;
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_LoadWidget() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::set_ConsumesNavInputWhileSelected(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x290 + 0);
    *(uint8_t*)((uintptr_t)this + 0x290 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_OnAccepted_BP() {
    return (void*)((uintptr_t)this + 0x280);
}
bool _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_CurrentlySelected() {
    return (*(uint8_t*)((uintptr_t)this + 0x291 + 0)) & 1 != 0;
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_Nav_Right() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_Nav_Left() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_Nav_Up() {
    return (void*)((uintptr_t)this + 0x2b8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_Nav_Down() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_ButtonType() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_CachedPreviousButtonText() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_CancelledOut() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_OnFocusVisualsUpdated() {
    return (void*)((uintptr_t)this + 0x308);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_Click_Left() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::get_Click_Right() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_CoreUObject::Class* _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/PauseMenu/UI_PauseMenuBtn_Base.UI_PauseMenuBtn_Base_C");
    return result;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::HandleNavInput(void* Input, bool& Consumed) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::UpdateFocusVisuals(bool& Handled) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnFocused0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnUnfocused0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnAccepted0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnFocusGroupDisabled0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnFocusGroupEnabled0() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnCancelOut() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::ExecuteUbergraph_UI_PauseMenuBtn_Base(int32_t EntryPoint) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::Click_Right__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::Click_Left__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnFocusVisualsUpdated__DelegateSignature(bool IsFocused, bool FocusGroupEnabled, bool FocusedAndEnabled) {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::CancelledOut__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::Nav_Down__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::Nav_Up__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::Nav_Left__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::Nav_Right__DelegateSignature() {
    return;
}
void _Game_UI_PauseMenu_UI_PauseMenuBtn_Base::UI_PauseMenuBtn_Base_C::OnAccepted_BP__DelegateSignature(_Script_RsGameTechRT::RsUiButton* Button) {
    return;
}
