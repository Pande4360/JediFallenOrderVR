#include "..\FUObjectArray.hpp"
#include "UI_LoadableScreenWidget_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::ExecuteUbergraph_UI_LoadableScreenWidget(int32_t EntryPoint) {
    return;
}
_Script_RsGameTechRT::RsUiWindow*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::get_ParentUIWindow() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x210);
}
void* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::get_ContainingSubMenuFocusGroup() {
    return (void*)((uintptr_t)this + 0x218);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::OptionalConsumeBackButton(bool& Consumed) {
    return;
}
bool _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::get_HasFocus() {
    return (*(uint8_t*)((uintptr_t)this + 0x228 + 0)) & 1 != 0;
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::get_ContainingSubMenu() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C**)((uintptr_t)this + 0x220);
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::set_HasFocus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x228 + 0);
    *(uint8_t*)((uintptr_t)this + 0x228 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/LoadableScreenWidgets/UI_LoadableScreenWidget.UI_LoadableScreenWidget_C");
    return result;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::ReceivedFocus() {
    return;
}
void _Game_UI_GameMenu_LoadableScreenWidgets_UI_LoadableScreenWidget::UI_LoadableScreenWidget_C::LostFocus() {
    return;
}
