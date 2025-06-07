#include "..\FUObjectArray.hpp"
#include "..\_Game_Models_Void_Void_World_BP_VoidWorldBranches\BP_VoidWorldBranches_C.hpp"
#include "..\_Game_UI_Messages_UI_SkillTree_AbilityAcquire\UI_SkillTree_AbilityAcquire_C.hpp"
#include "..\_Game_UI_SkillTree_UI_SkillTree_Branches\UI_SkillTree_Branches_C.hpp"
#include "UI_SkillTree_Main_C.hpp"
#include "..\_Game_UI_SkillTree_UI_SkillTree_Node\UI_SkillTree_Node_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_MediaAssets\MediaPlayer.hpp"
#include "..\_Script_RsGameTechRT\RsUiButton.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
#include "..\_Script_UMG\WidgetSwitcher.hpp"
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HoldText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3d0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_OpenSkillVideo() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x240);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_304EffectiveHeal1() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x360);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PressSecondaryButtonAnimation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x228);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_205SlowUp1() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x310);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_VideoBorderLoop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PressPrimaryButtonAnimation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x230);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_112TransformStaff() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2c8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_AbilityAcquireBackdrop() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_TutorialFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x268);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_OnLoadGameMenu() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_E_OnFirstUnlocks() {
    return (void*)((uintptr_t)this + 0x858);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_CloseSkillVideo() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HoldIndicatorAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x248);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_OnCancelAnim() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x250);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_OnTutorialPurchase() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x258);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_TutorialFadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x260);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_AbilityBackdrop() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x390);
}
_Script_UMG::WidgetAnimation*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_OnLoad() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x270);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get__Text() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_101Leap() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x280);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_BackText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3a0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_102LeapDist() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x288);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_104SprintAttack() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HoldIndicator() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3c8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_105EvadeAttack() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x298);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_106DelaySaber() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2a0);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_HasUnlockFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x632 + 0);
    *(uint8_t*)((uintptr_t)this + 0x632 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_107DelayStaff() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Border*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Border_1() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x3a8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_108AirFocus() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2b0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3e0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_110SaberFocus() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2b8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_111StaffFocus() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Overlay*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Overlay_1() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x400);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_113SaberThrow() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2d0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_114ThrowUpgrade() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2d8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_116DmgUp() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2e0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_1FocusAttack() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2e8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_201ForceMeter() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2f0);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::GetCurrentSkillP:oints(int32_t& SkillPoints) {
    return;
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_202ForceMeter() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x2f8);
}
_Script_UMG::ProgressBar*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Backing() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x398);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_203ForceMeter() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x300);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_LightsaberTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3f8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_204ForceGain() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x308);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_206SlowUp2() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x318);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_207PushUp1() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x320);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UI_TutorialPopUp() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x528);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_208Push2() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x328);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Label_SkillName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3e8);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_210PullUp1() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x330);
}
_Script_UMG::Overlay*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_GameMenuOnly() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x3c0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_211Pull2() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x338);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_212FocusHeal() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x340);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_301HealthUp() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x348);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::SetDecals() {
    return;
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_307Deflect() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x378);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_VoidLineworkAnimate() {
    return *(float*)((uintptr_t)this + 0x66c);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_302HealthUp2() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x350);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_303HealthUp3() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x358);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_305EffectiveHeal2() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x368);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_306BlockUp() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x370);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillBranchAnimateTarget() {
    return *(float*)((uintptr_t)this + 0x684);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_309JediEvade() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x380);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_SkillVideoIsOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68c + 0);
    *(uint8_t*)((uintptr_t)this + 0x68c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_LearnText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3f0);
}
_Game_UI_Messages_UI_SkillTree_AbilityAcquire::UI_SkillTree_AbilityAcquire_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_AbilityAcquire() {
    return *(_Game_UI_Messages_UI_SkillTree_AbilityAcquire::UI_SkillTree_AbilityAcquire_C**)((uintptr_t)this + 0x388);
}
_Script_UMG::HorizontalBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ButtonTray() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x3b0);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ForceTitle() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x3b8);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Image_1() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x3d8);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_OverlaySolid() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x408);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PipLeft() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x410);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PipRight() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x418);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Plural() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x420);
}
_Script_CoreUObject::Class* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/SkillTree/UI_SkillTree_Main.UI_SkillTree_Main_C");
    return result;
}
_Script_UMG::WidgetSwitcher*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PointSwitcher() {
    return *(_Script_UMG::WidgetSwitcher**)((uintptr_t)this + 0x428);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PrimaryInput() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x430);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillVideoIsOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x68c + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ProgressCircle() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x438);
}
_Script_UMG::RetainerBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x440);
}
_Script_UMG::RetainerBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_RetainerBox_2() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x448);
}
_Script_UMG::RetainerBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_RetainerBox_4() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x450);
}
_Script_UMG::RetainerBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_RetainerBox_5() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x458);
}
_Script_RsTechRT::RsLine*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_RsLine_2() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x460);
}
_Game_UI_SkillTree_UI_SkillTree_Branches::UI_SkillTree_Branches_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UI_SkillTree_Branches() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Branches::UI_SkillTree_Branches_C**)((uintptr_t)this + 0x520);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SecondaryInput() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x468);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Singular() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x470);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillCategory() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x478);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_E_TutorialPurchaseSuccess() {
    return (void*)((uintptr_t)this + 0x610);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillDescription() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x480);
}
_Script_UMG::SizeBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillDescriptions() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x488);
}
_Script_UMG::ProgressBar*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x490);
}
_Script_UMG::CanvasPanel*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointProgress() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x498);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointsRequired() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4a0);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointsText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4a8);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointsTextBacking() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4b0);
}
_Script_UMG::CanvasPanel*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Skills() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x4b8);
}
_Script_UMG::CanvasPanel*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillTree() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x4c0);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillTreeBranchesInactive() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x4c8);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_DividerLineAnimate() {
    return *(float*)((uintptr_t)this + 0x670);
}
_Script_UMG::Border*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillVideo() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x4d0);
}
_Script_UMG::Overlay*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillVideoContainer() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x4d8);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::OnFocusChanged(_Script_RsGameTechRT::RsUiButton* NewFocusedButton) {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SurvivalText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4e0);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::OpenAbilityVideo() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_TextBlock_0() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4e8);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_TextBlock_1() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4f0);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_TextBlock_3() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x4f8);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_TextBlock_7() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x500);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_PPVBlendAnimate() {
    return *(float*)((uintptr_t)this + 0x668);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x508);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UI_MenuButtonPrompt_C_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x510);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UI_MenuButtonPrompt_C_3() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x518);
}
_Script_UMG::HorizontalBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UnlockButton() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x530);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UnspentForcePoints() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x538);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UsesForce() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x540);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_VideoBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x548);
}
_Script_UMG::HorizontalBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ViewAbilityButton() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x550);
}
_Script_UMG::TextBlock*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ViewAbilityText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x558);
}
int32_t& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_CurrentSkillPoints() {
    return *(int32_t*)((uintptr_t)this + 0x560);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_FirstTimeSavePoint() {
    return (*(uint8_t*)((uintptr_t)this + 0x564 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_FirstTimeSavePoint(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x564 + 0);
    *(uint8_t*)((uintptr_t)this + 0x564 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HasSpentSkillPointBefore() {
    return (*(uint8_t*)((uintptr_t)this + 0x565 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_HasSpentSkillPointBefore(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x565 + 0);
    *(uint8_t*)((uintptr_t)this + 0x565 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillInfo() {
    return (void*)((uintptr_t)this + 0x568);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_E_SkillPurchased() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_E_SkillWindowOpened() {
    return (void*)((uintptr_t)this + 0x600);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_E_SkillWindowClosed() {
    return (void*)((uintptr_t)this + 0x620);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_IsSkillPurchased() {
    return (*(uint8_t*)((uintptr_t)this + 0x630 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_IsSkillPurchased(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x630 + 0);
    *(uint8_t*)((uintptr_t)this + 0x630 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_IsPrerequisiteMet() {
    return (*(uint8_t*)((uintptr_t)this + 0x631 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_IsPrerequisiteMet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x631 + 0);
    *(uint8_t*)((uintptr_t)this + 0x631 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HasUnlockFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0x632 + 0)) & 1 != 0;
}
int32_t& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointsRequire() {
    return *(int32_t*)((uintptr_t)this + 0x634);
}
int32_t& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillID() {
    return *(int32_t*)((uintptr_t)this + 0x638);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillType() {
    return (void*)((uintptr_t)this + 0x63c);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_LoadOutFlag() {
    return (void*)((uintptr_t)this + 0x63d);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_Animate() {
    return (*(uint8_t*)((uintptr_t)this + 0x63e + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_Animate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x63e + 0);
    *(uint8_t*)((uintptr_t)this + 0x63e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillBranchAnimate() {
    return *(float*)((uintptr_t)this + 0x640);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillTreeNode() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x648);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_E_NormalFlow() {
    return (void*)((uintptr_t)this + 0x650);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillPointMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x660);
}
_Script_MediaAssets::MediaPlayer*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillVideoPlayer() {
    return *(_Script_MediaAssets::MediaPlayer**)((uintptr_t)this + 0x678);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillVideoOpacity() {
    return *(float*)((uintptr_t)this + 0x680);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_VoidLineAnimateTarget() {
    return *(float*)((uintptr_t)this + 0x688);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillVideoOpacityTarget() {
    return *(float*)((uintptr_t)this + 0x690);
}
_Script_RsGameTechRT::RsUiWindow*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ParentWindow() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x698);
}
_Script_UMG::HorizontalBox*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_ViewAbilityButton_0() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6a0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HeroUpgrades() {
    return (void*)((uintptr_t)this + 0x6a8);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_IsGameMenu() {
    return (*(uint8_t*)((uintptr_t)this + 0x6a9 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_IsGameMenu(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6a9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6a9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_SkillNode() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x6b0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_FocusedButton() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x6b8);
}
float& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_HoldProgress() {
    return *(float*)((uintptr_t)this + 0x6c0);
}
_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_AllSkillNodes() {
    return *(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::Image*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_BackgroundSolid() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d0);
}
_Game_Models_Void_Void_World_BP_VoidWorldBranches::BP_VoidWorldBranches_C*& _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_VoidWorldBranches() {
    return *(_Game_Models_Void_Void_World_BP_VoidWorldBranches::BP_VoidWorldBranches_C**)((uintptr_t)this + 0x6d8);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_IsTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x6e0 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_IsTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x6e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_UI_StyleSheet() {
    return (void*)((uintptr_t)this + 0x6e8);
}
bool _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::get_IsCelebrationPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x868 + 0)) & 1 != 0;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::set_IsCelebrationPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x868 + 0);
    *(uint8_t*)((uintptr_t)this + 0x868 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::FocusDecals(_Script_RsGameTechRT::RsUiButton* FocusedButton) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::FocusBranches(_Script_RsGameTechRT::RsUiButton* FocusedButton) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::SetText() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::ShowAbilityAcquire(_Script_RsGameTechRT::RsUiButton* AcceptedButton) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::HandleHasHoldText(_Game_UI_SkillTree_UI_SkillTree_Node::UI_SkillTree_Node_C* SkillNode) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::SetupMaterialInstance() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::SetBranches() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::UpdateMenu(_Script_RsGameTechRT::RsUiButton* FocusedButton) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::RunTutorialFlow() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::TutorialCheck() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::CustomEvent_1() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::OnCancel() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::BndEvt__OnCancelAnim_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::HandleErrorAnimation() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::OnAccepted(_Script_RsGameTechRT::RsUiButton* AcceptedButton) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::OnWindowOpened() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::Initialize(_Script_RsGameTechRT::RsUiWindow* ParentWindow) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::UpdateBranchFocusState(_Script_RsGameTechRT::RsUiButton* FocusedButton) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::CancelAbilityAcquireAnimation() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::ExecuteUbergraph_UI_SkillTree_Main(int32_t EntryPoint) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::E_OnFirstUnlocks__DelegateSignature(void* Ability) {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::E_NormalFlow__DelegateSignature() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::E_SkillWindowClosed__DelegateSignature() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::E_TutorialPurchaseSuccess__DelegateSignature() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::E_SkillWindowOpened__DelegateSignature() {
    return;
}
void _Game_UI_SkillTree_UI_SkillTree_Main::UI_SkillTree_Main_C::E_SkillPurchased__DelegateSignature() {
    return;
}
