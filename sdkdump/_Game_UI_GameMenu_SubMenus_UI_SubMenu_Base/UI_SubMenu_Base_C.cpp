#include "..\FUObjectArray.hpp"
#include "UI_SubMenu_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\PanelWidget.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::LostFocus() {
    return;
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::Construct0() {
    return;
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_HiddenAncestorURLs() {
    return (void*)((uintptr_t)this + 0x210);
}
_Script_UMG::PanelWidget*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_RootPanel() {
    return *(_Script_UMG::PanelWidget**)((uintptr_t)this + 0x240);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_ShownAncestorURLs() {
    return (void*)((uintptr_t)this + 0x220);
}
_Script_UMG::UserWidget*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_DynamicContentWidget() {
    return *(_Script_UMG::UserWidget**)((uintptr_t)this + 0x258);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_ClaimFocusAncestors() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_FocusGroupNumber() {
    return (void*)((uintptr_t)this + 0x248);
}
_Script_RsGameTechRT::RsUiWindow*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_ParentUIWindow() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x250);
}
bool _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_HasContent_Internal() {
    return (*(uint8_t*)((uintptr_t)this + 0x260 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::set_HasContent_Internal(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x260 + 0);
    *(uint8_t*)((uintptr_t)this + 0x260 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_CurrentURL() {
    return (void*)((uintptr_t)this + 0x268);
}
bool _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_SubmenuFocused() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::set_SubmenuFocused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::get_HaveUnread() {
    return (*(uint8_t*)((uintptr_t)this + 0x271 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::set_HaveUnread(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x271 + 0);
    *(uint8_t*)((uintptr_t)this + 0x271 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_Base.UI_SubMenu_Base_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::GetSubmenuActiveButton(_Script_RsGameTechRT::RsUiButton*& Result, int32_t& Index) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::RefreshButtonsUnreadState(bool UseParentTag, bool& WereUnread) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::TryClaimingFocus() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::TryMoveFocusToAdjacentButton(void* Command, bool PermitWrapping, bool& Success) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::GetSubMenuFocusedButton(_Script_RsGameTechRT::RsUiButton*& Result, int32_t& Index) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::HasContent(bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::SetDynamicContentWidget(_Script_UMG::UserWidget* NewWidget) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::UpdateElementsWithMenuFocus() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::UpdateSubMenuFocus(bool Focused, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::UpdateNavigationMovement(void* Direction, bool& Handled) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::InitializeUIElements() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::InitializeRootWidget(_Script_UMG::PanelWidget* NewRoot) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::UpdateVisibility(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::ReceivedFocus() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C::ExecuteUbergraph_UI_SubMenu_Base(int32_t EntryPoint) {
    return;
}
