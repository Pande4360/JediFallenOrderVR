#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight\UI_Button_LeftRight_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2\UI_StarChartAnim2_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnimSmall\UI_StarChartAnimSmall_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_TacticalGuideDetail_C.hpp"
#include "..\_Game_UI_GameMenu_Widgets_UI_Widget_PipHolder\UI_Widget_PipHolder_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Button*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_ArrowRight() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x298);
}
_Script_UMG::Button*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_ArrowLeft() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x290);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_PreviousParentURL() {
    return (void*)((uintptr_t)this + 0x398);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::ReceivedFocus0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_CircleLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::LostFocus0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_btnLeft() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x2a0);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_btnRight() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_FeaturedImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_CombatHint() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::SizeBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_IconHolder2() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d0);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::OnLoaded_685913AC4661CD19F40C54938DB6D7D3(_Script_CoreUObject::Object* Loaded) {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2d8);
}
_Script_UMG::SizeBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_InnerBounds() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2e0);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_MetaInfo() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_PlanetOrFaction() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_MetaTags() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_UI_Widget_PipHolder() {
    return *(_Game_UI_GameMenu_Widgets_UI_Widget_PipHolder::UI_Widget_PipHolder_C**)((uintptr_t)this + 0x350);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_NoiseBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_PlanetOrFaction2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x308);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnimSmall::UI_StarChartAnimSmall_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_StarChartSmall() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnimSmall::UI_StarChartAnimSmall_C**)((uintptr_t)this + 0x3a8);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_RetainerBox_2() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x310);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::AnimationReset() {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x318);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_RsLine_247() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x320);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_ScrollBox() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x328);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_ScrollText() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x330);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_SolidColor() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x338);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_TinyIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x340);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_TinyIconOptional() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x348);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Widget_Book() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x358);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Widget_CombatHint1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x360);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Widget_CombatHint2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x368);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Widget_StoryBody() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x370);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_Widget_StoryTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x378);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_CurrentBookStories() {
    return (void*)((uintptr_t)this + 0x380);
}
int32_t& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_CurrentStoryIndex() {
    return *(int32_t*)((uintptr_t)this + 0x390);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_StarChartAnim2() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C**)((uintptr_t)this + 0x3a0);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::UpdateVisibility0(bool Visible) {
    return;
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::get_ButtonLeftRight_Ref() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x3b0);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_TacticalGuideDetail.UI_SubMenu_TacticalGuideDetail_C");
    return result;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::TryNavigateStories(void* Direction) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::Construct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::LoadFeaturedImage(void* Texture) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::CustomEvent_0() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::BndEvt__btnLeft_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::BndEvt__btnRight_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C::ExecuteUbergraph_UI_SubMenu_TacticalGuideDetail(int32_t EntryPoint) {
    return;
}
