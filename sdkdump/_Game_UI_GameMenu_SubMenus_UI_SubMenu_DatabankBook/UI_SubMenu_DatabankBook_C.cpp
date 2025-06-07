#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight\UI_Button_LeftRight_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_Carousel_UI_Element_DataBankEntry\UI_Element_DataBankEntry_C.hpp"
#include "..\_Game_UI_GameMenu_Elements_UI_Element_Base\UI_Element_Base_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2\UI_StarChartAnim2_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "UI_SubMenu_DatabankBook_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_DialoguePlugin\Dialogue.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScrollBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_ButtonRight() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x2a0);
}
int32_t& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_LineIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2f8);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::ReceivedFocus0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_Overlay() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_BookCover() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x288);
}
_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_ButtonLeft() {
    return *(_Game_UI_GameMenu_Elements_Buttons_UI_Button_LeftRight::UI_Button_LeftRight_C**)((uintptr_t)this + 0x298);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_DatabankBook.UI_SubMenu_DatabankBook_C");
    return result;
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_BookName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x290);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_RetainerBox_1() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::ScrollBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_ScrollingHorizontalContents() {
    return *(_Script_UMG::ScrollBox**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_TotalEntries() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Game_UI_GameMenu_Elements_Carousel_UI_Element_DataBankEntry::UI_Element_DataBankEntry_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_UI_Element_DataBankEntry() {
    return *(_Game_UI_GameMenu_Elements_Carousel_UI_Element_DataBankEntry::UI_Element_DataBankEntry_C**)((uintptr_t)this + 0x2d0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_UnlockedEntries() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2d8);
}
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_CurrentCarouselParentURL() {
    return (void*)((uintptr_t)this + 0x2e0);
}
int32_t& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_CurrentFocusedIndex() {
    return *(int32_t*)((uintptr_t)this + 0x2e8);
}
_Script_RsGameTechRT::RsConversation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_Conversation() {
    return *(_Script_RsGameTechRT::RsConversation**)((uintptr_t)this + 0x2f0);
}
_Script_DialoguePlugin::Dialogue*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_PlayingDialogue() {
    return *(_Script_DialoguePlugin::Dialogue**)((uintptr_t)this + 0x300);
}
int32_t& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_Num_Unlocked() {
    return *(int32_t*)((uintptr_t)this + 0x308);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::get_StarChartAnim2() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C**)((uintptr_t)this + 0x310);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::UpdateMouseNavButtonVis() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::FindAndScrollToButton(_Script_GameplayTags::GameplayTag ButtonTargetParentTag) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::UpdateNavigationMovement0(void* Direction, bool& Handled) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::UMG_UpdateURL0(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::OnLoaded_85AD0B0744DD9501C3A28C82DBBFBDC5(_Script_CoreUObject::Object* Loaded) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::Construct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::BndEvt__ButtonLeft_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::OnDatabankEntryAccepted(_Game_UI_GameMenu_Elements_UI_Element_Base::UI_Element_Base_C* ElementBase) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::Destruct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::LoadFeaturedImage(void* BookCoverImage) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::LostFocus0() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::UpdateVisibility0(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::MemoryFinished(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::BndEvt__ButtonRight_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C::ExecuteUbergraph_UI_SubMenu_DatabankBook(int32_t EntryPoint) {
    return;
}
