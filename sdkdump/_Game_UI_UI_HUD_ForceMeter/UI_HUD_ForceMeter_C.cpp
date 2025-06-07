#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_UI_HUD_UI_ForcePip\UI_ForcePip_C.hpp"
#include "UI_HUD_ForceMeter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\Spacer.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_OnCast() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
bool _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_InCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c2 + 0)) & 1 != 0;
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x258);
}
void* _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
bool _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_IsRegenerating() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c3 + 0)) & 1 != 0;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ShadowFade() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::RegenBarColorChange() {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceMeter() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x260);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x228);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_PulseMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x320);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_RegenForce() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::set_IsRegenerating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x230);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_Pulse() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x238);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_OutOfForce() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x240);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x248);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceBarShadow() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x250);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_Glow() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x268);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_GreyFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x270);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_GradientMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x310);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_MainContainer() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x278);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_MinLine() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x280);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_BarSizeY() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_BP_Hero_Reference() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Spacer*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_MinSpacer() {
    return *(_Script_UMG::Spacer**)((uintptr_t)this + 0x288);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_GlowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x318);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_OutOfForceFlash() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x290);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_PipHorizontalBox() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x298);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_Pips2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x2a0);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_PulseBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x2a8);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_RegenBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x2b0);
}
bool _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_LowForce() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c0 + 0)) & 1 != 0;
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceBarMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x308);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_CurrentPips() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::set_LowForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2f8);
}
bool _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_IsTicking() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c1 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::set_IsTicking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::set_InCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_IsUpgrading() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c4 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::set_IsUpgrading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_Force() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceShadow() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceMax() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ScalingScrollRate() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_MinRequiredForce() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_BarSizeX() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_RegenTemp() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_SegmentSize() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x300);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_RegenMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x328);
}
void* _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceFadeOut() {
    return (void*)((uintptr_t)this + 0x348);
}
_Game_UI_HUD_UI_ForcePip::UI_ForcePip_C*& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForcePipRef() {
    return *(_Game_UI_HUD_UI_ForcePip::UI_ForcePip_C**)((uintptr_t)this + 0x330);
}
void* _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ForceFadeIn() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ColorDeltaDark() {
    return (void*)((uintptr_t)this + 0x358);
}
void* _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_ColorDeltaBright() {
    return (void*)((uintptr_t)this + 0x368);
}
float& _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::get_DeltaCatchUpSpeed() {
    return *(float*)((uintptr_t)this + 0x378);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_ForceMeter.UI_HUD_ForceMeter_C");
    return result;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::GetScalingScrollRate() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::BarSetup() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::MaterialInstanceSetup() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::GetForceShadow() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::GetForce() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::Construct0() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceInit() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceFailed() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::GameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::OnAnimationFinished_Event_0() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::FadeOutEvent() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceChanged() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::LVL_ForceFadeIn() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceConsumed() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceRegen() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::AboveForceThreshold() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::BelowForceThreshold() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::LVL_ForceFadeOut() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::LVL_UpgradeForceMeter() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceBarColorReset() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ExecuteUbergraph_UI_HUD_ForceMeter(int32_t EntryPoint) {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceFadeOut__DelegateSignature() {
    return;
}
void _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C::ForceFadeIn__DelegateSignature() {
    return;
}
