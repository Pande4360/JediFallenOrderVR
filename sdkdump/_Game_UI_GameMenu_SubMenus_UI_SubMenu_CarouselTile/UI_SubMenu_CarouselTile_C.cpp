#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight\UI_Button_LeftRight_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile\UI_Element_CarouselTile_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_CarouselTile_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_Overlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_ButtonRight() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_ButtonBox() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_ButtonLeft() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x288);
}
int32_t& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_CurrentFocusedIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2d8);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_CarouselScrollingHorizontalContents() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x298);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2b0);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_UI_Element_CarouselTile() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_UI_Element_CarouselTile_0() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C**)((uintptr_t)this + 0x2c0);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_UI_Element_CarouselTile_1() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_CarouselTile::UI_Element_CarouselTile_C**)((uintptr_t)this + 0x2c8);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_CurrentCarouselParentURL() {
    return (void*)((uintptr_t)this + 0x2d0);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::get_PaddingResize() {
    return (void*)((uintptr_t)this + 0x2dc);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_CarouselTile.UI_SubMenu_CarouselTile_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::UpdateMouseButtonVis() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::GetFirstOrderedChild(_Script_GameplayTags::GameplayTag ParentTag, _Script_GameplayTags::GameplayTag& FirstChildTag) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::FindAndScrollToButton(_Script_GameplayTags::GameplayTag ButtonTargetParentTag) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::UpdateNavigationMovement0(void* Direction, bool& Handled) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::Construct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::UpdateVisibility0(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C::ExecuteUbergraph_UI_SubMenu_CarouselTile(int32_t EntryPoint) {
    return;
}
