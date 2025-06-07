#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_DebugContainer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::get_SlideIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::Construct() {
    return;
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_DebugContainer.UI_SubMenu_DebugContainer_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::UpdateVisibility0(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C::ExecuteUbergraph_UI_SubMenu_DebugContainer(int32_t EntryPoint) {
    return;
}
