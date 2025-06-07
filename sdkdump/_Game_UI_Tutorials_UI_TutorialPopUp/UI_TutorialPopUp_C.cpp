#include "..\FUObjectArray.hpp"
#include "UI_TutorialPopUp_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\Overlay.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonFeedback() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::CustomEvent_0() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_AnimatedButton() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x250);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonPulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonMoveLR() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::StartPauseAndConfirmTutorial() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonDoubleTap() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x228);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::StartBalanceBeamClimbTutorial() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonPress() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::UnpauseAndDismiss(void* ActionName) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonHold() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x230);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x240);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x248);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::ButtonPressed() {
    return;
}
_Script_UMG::Border*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Border_0() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x258);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::StartMonkeyBeamGrabTutorial() {
    return;
}
_Script_UMG::ScaleBox*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_BtnScaleBox() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x260);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::AutoDismiss() {
    return;
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ButtonBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x268);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::Dismissed__DelegateSignature() {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x270);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::DismissAfterDelay(float DelayDuration) {
    return;
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Dot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x278);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_FirstText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x280);
}
_Script_UMG::HorizontalBox*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_HorizontalBox_0() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x288);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::InquisitorUnblockableTutorial(float Duration) {
    return;
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Image_2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Linework() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x298);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::EndInquisitorTutorial(void* ActionName) {
    return;
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Outline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::Overlay*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Overlay_2() {
    return *(_Script_UMG::Overlay**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::Image*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_PulseOutline() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2b0);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::OnQuickRecoverInput(void* ActionName) {
    return;
}
_Script_UMG::RetainerBox*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x2b8);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::SetZOrder(int32_t ZOrder) {
    return;
}
_Script_UMG::SizeBox*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_SizeBox_0() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x2c0);
}
_Script_UMG::TextBlock*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Texttojump() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x2c8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x2d0);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_VerbText() {
    return (void*)((uintptr_t)this + 0x2d8);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Input_Action() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_ResultText() {
    return (void*)((uintptr_t)this + 0x2f8);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::Hidden() {
    return;
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Dismissed() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_InquisitorTutorialEnd() {
    return (void*)((uintptr_t)this + 0x320);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_TGEnergyAttackTutorialEnd() {
    return (void*)((uintptr_t)this + 0x330);
}
bool _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_InputTick() {
    return (*(uint8_t*)((uintptr_t)this + 0x340 + 0)) & 1 != 0;
}
float& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_Scale() {
    return *(float*)((uintptr_t)this + 0x360);
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::set_InputTick(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x340 + 0);
    *(uint8_t*)((uintptr_t)this + 0x340 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsUiWindow*& _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_InputRsUIWindow() {
    return *(_Script_RsGameTechRT::RsUiWindow**)((uintptr_t)this + 0x348);
}
bool _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_DismissOnPress() {
    return (*(uint8_t*)((uintptr_t)this + 0x350 + 0)) & 1 != 0;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::set_DismissOnPress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x350 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::get_AutoDismissTimer() {
    return (void*)((uintptr_t)this + 0x358);
}
_Script_CoreUObject::Class* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Tutorials/UI_TutorialPopUp.UI_TutorialPopUp_C");
    return result;
}
void* _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::GetVisibility_0() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::OnMonkeyBeamGrabInput(void* ActionName) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::DismissTutorial(void* ActionName) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::Update(void* VerbText, void* InputAction, void* ResultText, void* VerbAnimation, bool DismissOnPress) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::Shown() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::QuickRecoverTutorial() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::OnWindowClosing() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::HolomapPrompt() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::PreConstruct0(bool IsDesignTime) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::Dismiss(bool Instant) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::UpdateScale(float FractionalValue) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::ExecuteUbergraph_UI_TutorialPopUp(int32_t EntryPoint) {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::TGEnergyAttackTutorialEnd__DelegateSignature() {
    return;
}
void _Game_UI_Tutorials_UI_TutorialPopUp::UI_TutorialPopUp_C::InquisitorTutorialEnd__DelegateSignature() {
    return;
}
