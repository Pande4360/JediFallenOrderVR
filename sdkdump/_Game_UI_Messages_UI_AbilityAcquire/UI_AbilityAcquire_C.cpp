#include "..\FUObjectArray.hpp"
#include "UI_AbilityAcquire_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_UMG\BackgroundBlur.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::BackgroundBlur*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_blurbox() {
    return *(_Script_UMG::BackgroundBlur**)((uintptr_t)this + 0x640);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_EssenceAcquired() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_BossDefeated() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_AcquireText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x638);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x630);
}
_Script_UMG::VerticalBox*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_ButtonHolder() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x648);
}
_Script_UMG::CanvasPanel*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_CanvasPanel_1() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x650);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_darken() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x658);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Diagonal() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x660);
}
_Script_CoreUObject::Class* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/Messages/UI_AbilityAcquire.UI_AbilityAcquire_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_ForceEssenceIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x668);
}
_Script_UMG::HorizontalBox*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_FractionBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x670);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_FractionLabel() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x678);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_HIDDENOBJECTIVELABEL() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x680);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Horiz() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x688);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x690);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_AbilityName() {
    return (void*)((uintptr_t)this + 0x720);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Image_4() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x698);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_LargeLinework() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a0);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_LifeEssenceIcon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a8);
}
_Script_UMG::RetainerBox*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x6b0);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_RingInner() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_RingOuter() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_SingleInput() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6c8);
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::ShowAcquireFanfare(void* RowName) {
    return;
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_SkillFrame() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d0);
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::ShowEssenceFanfare(int32_t Fraction, void* EssenceType, bool IsLastPiece) {
    return;
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_SkillImage() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6d8);
}
_Script_UMG::Spacer*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Spacer_0() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x6e0);
}
_Script_UMG::Image*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Strip() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6e8);
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::ShowBossDefeatedFanfare(void* BossNameString) {
    return;
}
_Script_UMG::HorizontalBox*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_TextContainer() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6f0);
}
_Script_UMG::HorizontalBox*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_TwinBladeButtons() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6f8);
}
_Script_UMG::TextBlock*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_TxtAbility() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x700);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x708);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_UI_MenuButtonPrompt_C_2() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x710);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_UI_MenuButtonPrompt_C_6() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x718);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_LVL_AbilityAcquire_Done() {
    return (void*)((uintptr_t)this + 0x730);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_StyleSheet() {
    return (void*)((uintptr_t)this + 0x740);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_Inputs() {
    return (void*)((uintptr_t)this + 0x8b0);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_TwinBlade() {
    return (void*)((uintptr_t)this + 0x8b1);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_LVL_BossDefeated_Done() {
    return (void*)((uintptr_t)this + 0x8b8);
}
void* _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::get_LVL_ShowEssenceFanFare_Done() {
    return (void*)((uintptr_t)this + 0x8c8);
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::AnimFinished() {
    return;
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::ShowEssenceCompleted(void* EssenceType) {
    return;
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::LVL_ShowEssenceFanFare_Done__DelegateSignature() {
    return;
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::ExecuteUbergraph_UI_AbilityAcquire(int32_t EntryPoint) {
    return;
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::LVL_BossDefeated_Done__DelegateSignature() {
    return;
}
void _Game_UI_Messages_UI_AbilityAcquire::UI_AbilityAcquire_C::LVL_AbilityAcquire_Done__DelegateSignature() {
    return;
}
