#include "..\FUObjectArray.hpp"
#include "UI_Element_Base_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_DoUnreadBadgeOnInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x29b + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_UnlockVisiblityTag() {
    return (void*)((uintptr_t)this + 0x260);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_UnlockVisibilityLoadout() {
    return (void*)((uintptr_t)this + 0x268);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_ParentSubMenu() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C**)((uintptr_t)this + 0x278);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_RequestedURL() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL) {
    return;
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_ParentSubMenuHasFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_ParentSubMenuHasFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_ElementFocusState() {
    return (*(uint8_t*)((uintptr_t)this + 0x289 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_ElementFocusState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x289 + 0);
    *(uint8_t*)((uintptr_t)this + 0x289 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_NavigationOnAccept() {
    return (void*)((uintptr_t)this + 0x28a);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_WidgetToLoad() {
    return (void*)((uintptr_t)this + 0x290);
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_LoadableWidgetOnClickNotFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x298 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_LoadableWidgetOnClickNotFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x298 + 0);
    *(uint8_t*)((uintptr_t)this + 0x298 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_LoadedWidgetFocusGroup() {
    return (void*)((uintptr_t)this + 0x299);
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_Unread() {
    return (*(uint8_t*)((uintptr_t)this + 0x29a + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_Unread(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29a + 0);
    *(uint8_t*)((uintptr_t)this + 0x29a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_DoUnreadBadgeOnInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29b + 0);
    *(uint8_t*)((uintptr_t)this + 0x29b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_ConsoleOnlyElement() {
    return (*(uint8_t*)((uintptr_t)this + 0x29c + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_ConsoleOnlyElement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29c + 0);
    *(uint8_t*)((uintptr_t)this + 0x29c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_PCOnlyElement() {
    return (*(uint8_t*)((uintptr_t)this + 0x29d + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_PCOnlyElement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x29d + 0);
    *(uint8_t*)((uintptr_t)this + 0x29d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_OnCallAcceptedEvent() {
    return (void*)((uintptr_t)this + 0x2a0);
}
bool _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_ElementActiveState() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b0 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::set_ElementActiveState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::get_LastUpdateURL() {
    return (void*)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/Elements/UI_Element_Base.UI_Element_Base_C");
    return result;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::UpdateUnreadState(bool Unread) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::UI_OnUnfocused(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::UI_UpdateFocusState(bool ElementFocused, bool SubmenuFocused, bool Active, bool& ElementFocus, bool& SubMenuFocus, bool& ElementActive) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::UpdateElementVisibility(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::OnRefresh(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::Construct_Init(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::Preconstruct_Init(bool& Result) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::Construct() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::OnFocused0() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::OnUnfocused0() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::OnAccepted0() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::CallAcceptedEvent() {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::ExecuteUbergraph_UI_Element_Base(int32_t EntryPoint) {
    return;
}
void _Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C::OnCallAcceptedEvent__DelegateSignature(_Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C* ElementBase) {
    return;
}
