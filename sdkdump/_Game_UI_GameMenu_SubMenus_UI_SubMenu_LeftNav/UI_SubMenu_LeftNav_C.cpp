#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav\UI_Button_LeftNav_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_LeftNav_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_LeftNavButtonList() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x280);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_UI_Button_LeftNav_0() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C**)((uintptr_t)this + 0x298);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_UI_Button_LeftNav_1() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C**)((uintptr_t)this + 0x2a0);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_UI_Button_LeftNav() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C**)((uintptr_t)this + 0x290);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_UI_Button_LeftNav_2() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftNav::UI_Button_LeftNav_C**)((uintptr_t)this + 0x2a8);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::Construct() {
    return;
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_CurrentLeftNavParentURL() {
    return (void*)((uintptr_t)this + 0x2b0);
}
_Script_RsGameTechRT::RsUiButton*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::get_Temp_CheatsButton() {
    return *(_Script_RsGameTechRT::RsUiButton**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_LeftNav.UI_SubMenu_LeftNav_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C::ExecuteUbergraph_UI_SubMenu_LeftNav(int32_t EntryPoint) {
    return;
}
