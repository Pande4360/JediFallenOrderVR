#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight\UI_Button_LeftRight_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile\UI_Element_CarouselTile_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_TacticalGuideCarousel_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_UI_Button_Left() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x2a0);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_Overlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_ButtonBox() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_UI_Element_CarouselTile() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_CarouselScrollingHorizontalContents() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x298);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_UI_Button_Right() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x2a8);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_UI_Element_CarouselTile_0() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_UI_Element_CarouselTile_1() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C**)((uintptr_t)this + 0x2c0);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_CurrentCarouselParentURL() {
    return (void*)((uintptr_t)this + 0x2c8);
}
int32_t& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_CurrentFocusedIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2d0);
}
float& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::get_CarouselPadding() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_TacticalGuideCarousel.UI_SubMenu_TacticalGuideCarousel_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::UpdateMouseButtonVis() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::GetFirstOrderedUnlockedChild(_Script_GameplayTags::GameplayTag ParentTag, _Script_GameplayTags::GameplayTag& FirstChildTag) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::FindAndScrollToButton(_Script_GameplayTags::GameplayTag ButtonTargetParentTag) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::UpdateNavigationMovement0(void* Direction, bool& Handled) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::Construct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::UpdateVisibility0(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::BndEvt__UI_Button_LeftRight_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::BndEvt__UI_Button_LeftRight_C_0_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C::ExecuteUbergraph_UI_SubMenu_TacticalGuideCarousel(int32_t EntryPoint) {
    return;
}
