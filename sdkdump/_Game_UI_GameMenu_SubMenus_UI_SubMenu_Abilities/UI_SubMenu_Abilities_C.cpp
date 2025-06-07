#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim\UI_StarChartAnim_C.hpp"
#include "UI_SubMenu_Abilities_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_SubMenu_Base\UI_SubMenu_Base_C.hpp"
#include "..\_Game_UI_GameMenu_Widgets_UI_AbilityNode\UI_AbilityNode_C.hpp"
#include "..\_Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button\UI_ViewSkillTree_Button_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\GridPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
void* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x290);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x280);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_FadeSkillTreeBtn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x288);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_SlideNext() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_SlidePrev() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x298);
}
_Script_UMG::WidgetAnimation*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::HorizontalBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_UpgradedAbility() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x3d8);
}
_Script_UMG::VerticalBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_AbilityDescription() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x2b0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_Hack() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_Heal() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2c0);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::ReceivedFocus0() {
    return;
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_Holomap() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2c8);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_Overcharge() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2d0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_ProbeHack() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2d8);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_Slice() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2e0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_BD_Zipline() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2e8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_CalBDText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2f0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_ClimbingClaws() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_CombatTip() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Description() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x308);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Diving() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x310);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_ForceFlip() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x318);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_ForcePull() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x320);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::ExecuteUbergraph_UI_SubMenu_Abilities(int32_t EntryPoint) {
    return;
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_ForcePush() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x328);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_ForceSlowdown() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x330);
}
_Script_UMG::GridPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_GridPanel_0() {
    return *(_Script_UMG::GridPanel**)((uintptr_t)this + 0x338);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Hold1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x340);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Hold2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x348);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x350);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x358);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x360);
}
_Script_UMG::WidgetSwitcher*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_WidgetSwitcher_0() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x3f0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Lightsaber() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x368);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Name() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x370);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_PlusIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x378);
}
_Script_UMG::Image*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_PlusIcon2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x380);
}
_Script_CoreUObject::Class* _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/GameMenu/SubMenus/UI_SubMenu_Abilities.UI_SubMenu_Abilities_C");
    return result;
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_PrimaryInput() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x388);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_PrimaryInput2() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x390);
}
_Script_UMG::RetainerBox*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_RetainerBox_3() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x398);
}
_Script_UMG::CanvasPanel*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Root() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x3a0);
}
_Script_RsTechRT::RsLine*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_RsLine_1() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x3a8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_SecondaryInput() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_Slash() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3b8);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_SplitSaber() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x3c0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_StaffSaber() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x3c8);
}
_Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_UI_ViewSkillTree_Button() {
    return *(_Game_UI_GameMenu_Widgets_UI_ViewSkillTree_Button::UI_ViewSkillTree_Button_C**)((uintptr_t)this + 0x3d0);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_StarChartAnim1() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C**)((uintptr_t)this + 0x400);
}
_Script_UMG::TextBlock*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_UpgradeTip() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3e0);
}
_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_WallRun() {
    return *(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C**)((uintptr_t)this + 0x3e8);
}
_Script_Engine::Actor*& _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::get_MenuCapture() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3f8);
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::UpdateAbilityInfoPanel(_Game_UI_GameMenu_Widgets_UI_AbilityNode::UI_AbilityNode_C* AbilityNode) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::Construct() {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::ButtonFocusChanged(_Script_RsGameTechRT::RsUiButton* Button) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::UpdateVisibility0(bool Visible) {
    return;
}
void _Game_UI_GameMenu_SubMenus_UI_SubMenu_Abilities::UI_SubMenu_Abilities_C::BndEvt__UI_ViewSkillTree_Button_K2Node_ComponentBoundEvent_0_RsButtonEvent__DelegateSignature() {
    return;
}
