#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim\UI_StarChartAnim_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2\UI_StarChartAnim2_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim3\UI_StarChartAnim3_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities\UI_SubMenu_Abilities_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile\UI_SubMenu_CarouselTile_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer\UI_SubMenu_CustomizationContainer_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook\UI_SubMenu_DatabankBook_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer\UI_SubMenu_DebugContainer_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav\UI_SubMenu_LeftNav_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_SettingsContainer\UI_SubMenu_SettingsContainer_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_SkillTree\UI_SubMenu_SkillTree_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel\UI_SubMenu_TacticalGuideCarousel_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail\UI_SubMenu_TacticalGuideDetail_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_TopNav\UI_SubMenu_TopNav_C.hpp"
#include "UI_GameMenu_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\BackgroundBlur.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_Initialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x790 + 0)) & 1 != 0;
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_HeaderFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::SetSectionName() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SettingFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_StarChartAnim1() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C**)((uintptr_t)this + 0x9a0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_TactGuideFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_StarChartAnim1Alt() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C**)((uintptr_t)this + 0x9c0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SettingPrev() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x638);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_CarouselFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SettingsNext() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_DefaultCentralSubmenu() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C**)((uintptr_t)this + 0x7e8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_TactGuidePrev() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x640);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_TactGuideNext() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x648);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_CarouselPrev() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x650);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_CarouselNext() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x658);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_QueuedActionTimer() {
    return (void*)((uintptr_t)this + 0x808);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_Closed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x810 + 0);
    *(uint8_t*)((uintptr_t)this + 0x810 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_ReshowLeftNav() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x660);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::TryChangeFocusedSubMenu(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C* NewFocusedSubMenu) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_DataEntryModalBlur() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x668);
}
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_Closed() {
    return (*(uint8_t*)((uintptr_t)this + 0x810 + 0)) & 1 != 0;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_HeaderTextSlideLeft() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x670);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/UI_GameMenu.UI_GameMenu_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_HeaderTextSlide() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x678);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x680);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::StopAllAnims() {
    return;
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_AcceptButton() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x688);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::CreateStarCharts() {
    return;
}
_Script_UMG::BackgroundBlur*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_BackgroundBlur_0() {
    return *(_Script_UMG::BackgroundBlur**)((uintptr_t)this + 0x690);
}
_Script_UMG::Border*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x698);
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_BottomMask() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a0);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_DebugContainer() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_DebugContainer::UI_SubMenu_DebugContainer_C**)((uintptr_t)this + 0x748);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_ButtonTray() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::Overlay*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_HeaderText() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_M_Noise() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_M_Noise2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_MarkAllRead() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6c8);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::LockToSettingsSubMenu() {
    return;
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_PanningBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_ParentCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x6d8);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_TargetPosition() {
    return *(float*)((uintptr_t)this + 0x818);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SectionHeader_Retainer() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SectionTitleBacking() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6f0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SectionTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6e8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_txt_Accept() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x708);
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_SolidColor() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::Image*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_TopNavBacking() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x700);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_MenuButtonPrompt_C_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x710);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_MenuButtonPrompt_C_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x718);
}
_Script_RsGameTechRT::RsUiButton*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_QueuedTagRequestButton() {
    return *(_Script_RsGameTechRT::RsUiButton**)((uintptr_t)this + 0x800);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_Abilities() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C**)((uintptr_t)this + 0x728);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_MenuButtonPrompt_C_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x720);
}
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_IsPrevTab() {
    return (*(uint8_t*)((uintptr_t)this + 0x81d + 0)) & 1 != 0;
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_CarouselTile() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_CarouselTile::UI_SubMenu_CarouselTile_C**)((uintptr_t)this + 0x730);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_CustomizationContainer() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_CustomizationContainer::UI_SubMenu_CustomizationContainer_C**)((uintptr_t)this + 0x738);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_DatabankBook() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_DatabankBook::UI_SubMenu_DatabankBook_C**)((uintptr_t)this + 0x740);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_LeftNav() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_LeftNav::UI_SubMenu_LeftNav_C**)((uintptr_t)this + 0x750);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::InitInputActions() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::PlayNext() {
    return;
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_SettingsContainer::UI_SubMenu_SettingsContainer_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_SettingsContainer() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_SettingsContainer::UI_SubMenu_SettingsContainer_C**)((uintptr_t)this + 0x758);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_SkillTree::UI_SubMenu_SkillTree_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_SkillTree() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_SkillTree::UI_SubMenu_SkillTree_C**)((uintptr_t)this + 0x760);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_TacticalGuideDetail() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideDetail::UI_SubMenu_TacticalGuideDetail_C**)((uintptr_t)this + 0x770);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_TacticalGuideCarousel() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_TacticalGuideCarousel::UI_SubMenu_TacticalGuideCarousel_C**)((uintptr_t)this + 0x768);
}
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_IgnoreGameMenuNav() {
    return (*(uint8_t*)((uintptr_t)this + 0x811 + 0)) & 1 != 0;
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_TopNav::UI_SubMenu_TopNav_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_UI_SubMenu_TopNav() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_TopNav::UI_SubMenu_TopNav_C**)((uintptr_t)this + 0x778);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_URL() {
    return (void*)((uintptr_t)this + 0x780);
}
_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_FocusedSubMenu() {
    return *(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C**)((uintptr_t)this + 0x788);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_Initialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x790 + 0);
    *(uint8_t*)((uintptr_t)this + 0x790 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_FocusGroupsToSubmenus() {
    return (void*)((uintptr_t)this + 0x798);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_Tracking() {
    return *(float*)((uintptr_t)this + 0x7f0);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_QueuedTagRequest() {
    return (void*)((uintptr_t)this + 0x7f8);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_IgnoreGameMenuNav(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x811 + 0);
    *(uint8_t*)((uintptr_t)this + 0x811 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_CurrentPosition() {
    return *(float*)((uintptr_t)this + 0x814);
}
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_IsNextTab() {
    return (*(uint8_t*)((uintptr_t)this + 0x81c + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_IsNextTab(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81c + 0);
    *(uint8_t*)((uintptr_t)this + 0x81c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_IsPrevTab(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x81d + 0);
    *(uint8_t*)((uintptr_t)this + 0x81d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_ScrollingRate() {
    return *(float*)((uintptr_t)this + 0x820);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_AlphaValue() {
    return *(float*)((uintptr_t)this + 0x824);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x828);
}
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_DoesCancelExitMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x998 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_DoesCancelExitMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x998 + 0);
    *(uint8_t*)((uintptr_t)this + 0x998 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_IsLockedToSettingsSubMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x999 + 0)) & 1 != 0;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::set_IsLockedToSettingsSubMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x999 + 0);
    *(uint8_t*)((uintptr_t)this + 0x999 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_StarChartAnim2() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim2::UI_StarChartAnim2_C**)((uintptr_t)this + 0x9a8);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_PlayAtTime() {
    return *(float*)((uintptr_t)this + 0x9b0);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_EndAtTime() {
    return *(float*)((uintptr_t)this + 0x9b4);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_HeroPlayAtTime() {
    return *(float*)((uintptr_t)this + 0x9b8);
}
float& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_HeroEndAtTime() {
    return *(float*)((uintptr_t)this + 0x9bc);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim3::UI_StarChartAnim3_C*& _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_StarChart3() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim3::UI_StarChartAnim3_C**)((uintptr_t)this + 0x9c8);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_StartTime() {
    return (void*)((uintptr_t)this + 0x9d0);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_NewlyFocusedCosmetic() {
    return (void*)((uintptr_t)this + 0xa20);
}
void* _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::get_PreviousURL() {
    return (void*)((uintptr_t)this + 0xa28);
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::UMG_GetTargetURL(_Script_GameplayTags::GameplayTag& TargetURL) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::UMG_UpdateURL(_Script_GameplayTags::GameplayTag NewUrl, bool& Result) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::SetAcceptLabelText(void* newText) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::PlayPrev() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::ClearUnreadMarkers(_Script_GameplayTags::GameplayTag RootURL) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::PlayLineworkSlideAnim(bool NextTab) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::PlayHeroSlideAnim(bool NextTab) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::ClickThroughRequest(_Script_GameplayTags::GameplayTag URL, void* FocusedCosmetic) {
    return;
}
_Script_CoreUObject::LinearColor _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::GetColorAndOpacity_0() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::SetScrollingRate() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::SwapInputActions(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::ResetControllerToDefault(void* ActionName) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::InputActionPressed(void* ActionName, bool& Consumed) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::QueueURLRequest(_Script_GameplayTags::GameplayTag URL, _Script_RsGameTechRT::RsUiButton* RequestingButton) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::InitDefaultCentralSubmenu() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::RequestLoadWidget(void* WidgetToLoad, void* FocusGroupToLoadInto, bool AlsoMoveFocus) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::ClaimFocus(_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base::UI_SubMenu_Base_C* SubMenu) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::InitializeSubMenus() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::DoNav(void* NavName, bool& Consumed) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::InitializeNav() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::Construct() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::OnWindowClosed0() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::OnWindowOpened0() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::UpdateControlsTrayButtons() {
    return;
}
void _Game_UI_GameMenu_UI_GameMenu::UI_GameMenu_C::ExecuteUbergraph_UI_GameMenu(int32_t EntryPoint) {
    return;
}
