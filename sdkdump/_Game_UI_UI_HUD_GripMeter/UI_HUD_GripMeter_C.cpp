#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina\HC_Stamina_C.hpp"
#include "UI_HUD_GripMeter_C.hpp"
#include "..\_Game_UI_UI_MenuButtonPrompt\UI_MenuButtonPrompt_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\ScaleBox.hpp"
#include "..\_Script_UMG\SizeBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
float _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::GetStamina() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Backing2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x240);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_UXRTutorialPulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void* _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_BackingPulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_GuardBreak() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x230);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Fade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x228);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Backing() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x238);
}
_Script_UMG::SizeBox*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_ButtonPrompt() {
    return *(_Script_UMG::SizeBox**)((uintptr_t)this + 0x248);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Dot() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x250);
}
_Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaRef() {
    return *(_Game_Characters_Hero_Logic_Components_Navigation_HC_Stamina::HC_Stamina_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Flash() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x258);
}
float& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaCurrent() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Flash2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x260);
}
_Script_UMG::ScaleBox*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_ScaleBox_1() {
    return *(_Script_UMG::ScaleBox**)((uintptr_t)this + 0x288);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_GreyBacking() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x268);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x270);
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x298);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_InteractText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_GripMeter.UI_HUD_GripMeter_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_L2_icon() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Stamina() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaDelta() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::MaterialInstanceSetup() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaEmpty() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a8);
}
_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_UI_MenuButtonPrompt() {
    return *(_Game_UI_UI_MenuButtonPrompt::UI_MenuButtonPrompt_C**)((uintptr_t)this + 0x2b0);
}
float& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaShadow() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
float& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_Delta() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_LowHealth() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
bool _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_InCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d0 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::set_InCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsHero*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_HeroRef() {
    return *(_Script_RsGameTechRT::RsHero**)((uintptr_t)this + 0x2d8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2e0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_StaminaShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2e8);
}
bool _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::get_IsStaminaPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::set_IsStaminaPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::GetStaminaShadow() {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::Construct0() {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::Show(float Duration) {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::Hide() {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::FadeOut() {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::GameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::IsTutPulsing(bool IsPulsing) {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::UpdateScale(float Scale) {
    return;
}
void _Game_UI_UI_HUD_GripMeter::UI_HUD_GripMeter_C::ExecuteUbergraph_UI_HUD_GripMeter(int32_t EntryPoint) {
    return;
}
