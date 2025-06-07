#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "UI_SavePointShell_C.hpp"
#include "..\_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance\BP_VoidTearEntrance_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\Button.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::FirstSaveTutorialComplete() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x750);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MedBtnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::UpdateSkillPointText() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_NewSkillUnlock() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x640);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::DisplayTutorialPrompt() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestBtnHover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::SizeBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreeButton() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x7d8);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MedBtnHover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_LeaveBtnHover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::Button*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreeBtn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x7d0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillBtnHover() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_LeaveSavePoint() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x638);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::CustomEvent_0() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestPulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x648);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_IsMeditationTrainingUnlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x848 + 0);
    *(uint8_t*)((uintptr_t)this + 0x848 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_LeaveBtnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x650);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillBtnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x658);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestBtnPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x660);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreePrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x7e8);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnSkillWindowClosed() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestMessageIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x668);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OpenSkillTree() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_BackgroundAnimation() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x670);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreeBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7c0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_GradOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x678);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_ControlsTray_In() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x680);
}
_Script_UMG::Spacer*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_Spacer_0() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x7f8);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::RestartInputListeners() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SavingGameAnim_Out() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x688);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__RestBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_LeaveText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x700);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnRestConfirm__DelegateSignature() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SavingGameAnim_In() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x690);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_IsWindowClosing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Overlay*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_AbilityBox() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x698);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_AbilityText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6a0);
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_IsMeditationOpening() {
    return (*(uint8_t*)((uintptr_t)this + 0x968 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_AbilityUnlockText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6a8);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::CloseSaveMenu() {
    return;
}
_Script_UMG::VerticalBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_AvailableSkillPoints() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x6b0);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_IsResting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_ButtonContainer() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::Overlay*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_Buttons() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_ForcePointsBacking() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6c8);
}
_Script_UMG::RetainerBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RetainerBox_1() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x7a0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_ForcePointText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d0);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::SetupMeditationTraining() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_ForcePointTextBacking() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6d8);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__SkillTreeBtn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::Rest() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_Image_3() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6e8);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_PlanetToStreamingDef() {
    return (void*)((uintptr_t)this + 0x918);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6f0);
}
_Script_UMG::Button*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_LeaveBtn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x708);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillPointMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x870);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x710);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x718);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillPointProgress() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x7b0);
}
_Script_UMG::SizeBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingButton() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x720);
}
_Script_UMG::Button*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MedTrainButton() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x738);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::MeditationWindowClosed() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingFocused() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x728);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingInputAction() {
    return (void*)((uintptr_t)this + 0x900);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x730);
}
_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_VoidEntrance() {
    return *(_Game_WorldInteracts_VoidTears_BP_VoidTearEntrance::BP_VoidTearEntrance_C**)((uintptr_t)this + 0x830);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RespawnMessage() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x740);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x748);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestBorderAnim() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x758);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__LeaveBtn_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::Button*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestBtn() {
    return *(_Script_UMG::Button**)((uintptr_t)this + 0x760);
}
_Script_CoreUObject::Class* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_SavePointShell.UI_SavePointShell_C");
    return result;
}
_Script_UMG::SizeBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestButton() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x768);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestMessage() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x778);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__MedTrainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestFocused() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x770);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x780);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestVertBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x790);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnMeditationTrainingCancelled() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x788);
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_UI_TutorialPopUp() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x800);
}
_Script_UMG::RetainerBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x798);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreeFocused() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7e0);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillPointBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x7a8);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillPoints() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x7b8);
}
_Script_UMG::Image*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreeBorder() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x7c8);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_SkillTreeText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x7f0);
}
_Script_UMG::TextBlock*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_UnspentForcePoints() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x808);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_VerticalBox_1() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x810);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_OnSaveMenuClosed() {
    return (void*)((uintptr_t)this + 0x818);
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_IsMantisSave() {
    return (*(uint8_t*)((uintptr_t)this + 0x828 + 0)) & 1 != 0;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_IsMantisSave(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x828 + 0);
    *(uint8_t*)((uintptr_t)this + 0x828 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MinVoidTearsForMeditation() {
    return *(int32_t*)((uintptr_t)this + 0x838);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationID() {
    return (void*)((uintptr_t)this + 0x840);
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_IsMeditationTrainingUnlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x848 + 0)) & 1 != 0;
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_OnSkillTreeWindowClosed() {
    return (void*)((uintptr_t)this + 0x850);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_OnRestConfirm() {
    return (void*)((uintptr_t)this + 0x860);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_AbilityMessages() {
    return (void*)((uintptr_t)this + 0x878);
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestInputBuffered() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c8 + 0)) & 1 != 0;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_RestInputBuffered(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_RestInputAction() {
    return (void*)((uintptr_t)this + 0x8d0);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_CloseMenuInputAction() {
    return (void*)((uintptr_t)this + 0x8d8);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_OpenSkillTreeInputAction() {
    return (void*)((uintptr_t)this + 0x8e0);
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_IsWindowClosing() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e8 + 0)) & 1 != 0;
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_IsResting() {
    return (*(uint8_t*)((uintptr_t)this + 0x8e9 + 0)) & 1 != 0;
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_IsSkillTreeOpening() {
    return (*(uint8_t*)((uintptr_t)this + 0x8ea + 0)) & 1 != 0;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_IsSkillTreeOpening(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x8ea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_FloorPulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x8f0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_NewVar_0() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x8f8);
}
void* _Game_UI_UI_SavePointShell::UI_SavePointShell_C::get_MeditationTrainingStreamingDef() {
    return (void*)((uintptr_t)this + 0x908);
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::set_IsMeditationOpening(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x968 + 0);
    *(uint8_t*)((uintptr_t)this + 0x968 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::ShouldRunSaveTutorial() {
    return;
}
bool _Game_UI_UI_SavePointShell::UI_SavePointShell_C::ShouldRunRestTutorial() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::SetupMaterialInstance() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::GetSkillCurrentPoints(int32_t& SkillPoints) {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::StopInputListeners() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OpenVoidModeSelect() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::DisplayAbilityMessage(void* Ability) {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::RestButtonPress() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::SkillTreeButtonPress() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::LeaveButtonPress() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::Construct() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BufferRestInput() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::SetUpRestInputBuffer() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::UnhookRestInputBuffer() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnWindowOpened0() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnWindowClosed0() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__SkillTreeBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__SkillTreeBtn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__RestBtn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__RestBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnSaveMenuClosed__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__LeaveBtn_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__LeaveBtn_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::MeditationTraining() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::MedWorldStreamingStarted() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__MedTrainButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::MedButtonPress() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::BndEvt__MedTrainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::RestTutorialDismissed() {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::ExecuteUbergraph_UI_SavePointShell(int32_t EntryPoint) {
    return;
}
void _Game_UI_UI_SavePointShell::UI_SavePointShell_C::OnSkillTreeWindowClosed__DelegateSignature() {
    return;
}
