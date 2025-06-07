#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim\UI_StarChartAnim_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2\UI_StarChartAnim2_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_CustomizationContainer_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_StarChartAnim1() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C**)((uintptr_t)this + 0x2b0);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_SlideInNext() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
_Script_Engine::Actor*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_MenuCapture() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_SlideInPrev() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_HeroImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2a0);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::get_StarChartAnim2() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C**)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_CustomizationContainer.UI_SubMenu_CustomizationContainer_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::Construct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::UpdateVisibility0(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C::ExecuteUbergraph_UI_SubMenu_CustomizationContainer(int32_t EntryPoint) {
    return;
}
