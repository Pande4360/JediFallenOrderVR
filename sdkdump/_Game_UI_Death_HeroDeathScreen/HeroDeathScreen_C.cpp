#include "..\FUObjectArray.hpp"
#include "HeroDeathScreen_C.hpp"
#include "..\_Game_UI_GameMenu_SubMenus_UI_StarChartAnim\UI_StarChartAnim_C.hpp"
#include "..\_Game_UI_Tutorials_UI_TutorialPopUp\UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_RsTechRT\RsLine.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_PanningBG() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b8);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::ReviveButtonFadedIn() {
    return;
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ButtonDraw() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_RespawnFadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x638);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ReviveFadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_CycleDeathTipReveal() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ReviveBarShrink() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ReviveFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
_Script_CoreUObject::Class* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Death/HeroDeathScreen.HeroDeathScreen_C");
    return result;
}
_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_UI_TutorialPopUp() {
    return *(_Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C**)((uintptr_t)this + 0x730);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_RespawnFadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x640);
}
_Script_UMG::CanvasPanel*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_BackgroundStuff() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x648);
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_BigBGText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x650);
}
_Script_UMG::Overlay*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ButtonHolder() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x658);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ButtonRing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x660);
}
_Script_UMG::CanvasPanel*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_CanvasPanel_3() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x668);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::Construct() {
    return;
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_DotL() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_DotR() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_HorizL() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x680);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::set_CanRespawnInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x768 + 0);
    *(uint8_t*)((uintptr_t)this + 0x768 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_HorizR() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x688);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_JediLogo() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x690);
}
float& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_TimeDilation() {
    return *(float*)((uintptr_t)this + 0x770);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_M_Noise() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x698);
}
_Script_UMG::CanvasPanel*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_MainPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::CanvasPanel*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_MessageHolder() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_or() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::CanvasPanel*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_RespawnPanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x6c0);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ReviveAcceptButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6c8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_ReviveCancelButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::CanvasPanel*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_RevivePanel() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x6d8);
}
_Script_RsTechRT::RsLine*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_RsLine_0() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x6e0);
}
_Script_RsTechRT::RsLine*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_RsLine_249() {
    return *(_Script_RsTechRT::RsLine**)((uintptr_t)this + 0x6e8);
}
_Script_UMG::Image*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_SolidColor() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6f0);
}
_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_StarChartAnimREF() {
    return *(_Game_UI_GameMenu_SubMenus_UI_StarChartAnim::UI_StarChartAnim_C**)((uintptr_t)this + 0x798);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::PromptRespawn() {
    return;
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_TextBlock_2() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_TextBlock_3() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x700);
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_TextBlock_4() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x708);
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_tocyclethroughtips() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x710);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x718);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_UI_MenuButtonPrompt_0() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x720);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_UI_MenuButtonPrompt_C_1() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x728);
}
_Script_UMG::TextBlock*& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_YouDied() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x738);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::PromptRevive() {
    return;
}
bool _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_bCaptured() {
    return (*(uint8_t*)((uintptr_t)this + 0x740 + 0)) & 1 != 0;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::set_bCaptured(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x740 + 0);
    *(uint8_t*)((uintptr_t)this + 0x740 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_InputDetected() {
    return (void*)((uintptr_t)this + 0x758);
}
bool _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_CanReviveInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x741 + 0)) & 1 != 0;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::BountyHunterCapture() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::set_CanReviveInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x741 + 0);
    *(uint8_t*)((uintptr_t)this + 0x741 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::Respawn() {
    return;
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_TriggerRespawn() {
    return (void*)((uintptr_t)this + 0x748);
}
bool _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_CanRespawnInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x768 + 0)) & 1 != 0;
}
float& _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_TimeOutDelay() {
    return *(float*)((uintptr_t)this + 0x76c);
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_HintString() {
    return (void*)((uintptr_t)this + 0x778);
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_StreamingDefinitions() {
    return (void*)((uintptr_t)this + 0x788);
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_AurebeshReawakenTextDoNotLocalize() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::LoadedStreamingDefinitions_1070BA1C4801D2B1C5A882B78B9EFBA1(void*& Definitions) {
    return;
}
void* _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::get_AurebeshRespawnTextDoNotLocalize() {
    return (void*)((uintptr_t)this + 0x7b8);
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::OnDeathWidgetAdded() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::ShowDeathScreenTutorial(int32_t ZOrder, _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C*& TutorialPopup) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::AcceptedRespawnInput(void* ActionName) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::Revive() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::CancelInput(void* ActionName) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::FailRevive() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::AcceptReviveInput(void* ActionName) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::RespawnButtonFadedIn() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::BndEvt__ReviveFadeIn_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::BndEvt__ReviveBarShrink_K2Node_ComponentBoundEvent_2_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::PromptReawaken() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::OnWindowClosed0() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::OnWindowOpened0() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::ShowNextDeathTip(void* ActionName) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::ShowPrevDeathTip(void* ActionName) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::ResumeRespawn() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::PreConstruct(bool IsDesignTime) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::CustomEvent_0(void* Result) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::HUDScaleUpdated(int32_t Value) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::ExecuteUbergraph_HeroDeathScreen(int32_t EntryPoint) {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::InputDetected__DelegateSignature() {
    return;
}
void _Game_UI_Death_HeroDeathScreen::HeroDeathScreen_C::TriggerRespawn__DelegateSignature() {
    return;
}
