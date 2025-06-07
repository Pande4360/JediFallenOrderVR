#include "..\FUObjectArray.hpp"
#include "..\_Game_UI_UI_HUD_BossMeter\UI_HUD_BossMeter_C.hpp"
#include "UI_HUD_EnemyHealth_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\VerticalBox.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_HealthBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x270);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_FadeOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
void* _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_FadeIn() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_RsGameTechRT::RsAICharacter*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_Char_REF() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x300);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x230);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_EnemyStaminaShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x320);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_GuardBreak() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x220);
}
_Script_UMG::VerticalBox*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BarVerticalBox() {
    return *(_Script_UMG::VerticalBox**)((uintptr_t)this + 0x228);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_DamageShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x308);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockDelta() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x238);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_EnemyHealthMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x310);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockFlash() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x240);
}
_Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BossMeter_REF() {
    return *(_Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C**)((uintptr_t)this + 0x348);
}
int32_t& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_HitsTaken() {
    return *(int32_t*)((uintptr_t)this + 0x2dc);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockMeter() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x248);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockOffset() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x250);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_DamageDelta() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x258);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_DarkBacking() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x260);
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_IsConstructed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ec + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_Flash2() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x268);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_HealthBorder() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x278);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_HealthMeter() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x280);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_ShowGameStats(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_HealthOffset() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x288);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_HorizBar() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x290);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_OuterFrame() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x298);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockFlashMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x340);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_ScalingScrollRate() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BarSizeSmall() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BarSizeLarge() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_EnemyHealth() {
    return *(float*)((uintptr_t)this + 0x2b0);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_EnemyHealthCurrent() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_EnemyHealthShadow() {
    return *(float*)((uintptr_t)this + 0x2b8);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_EnemyHealth.UI_HUD_EnemyHealth_C");
    return result;
}
void* _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_ColorRed() {
    return (void*)((uintptr_t)this + 0x350);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_bLock() {
    return *(float*)((uintptr_t)this + 0x2bc);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_IsHealing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_DamageTaken() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockShadow() {
    return *(float*)((uintptr_t)this + 0x2c0);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_IsDamaged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ed + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockTemp() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_BlockIsVisible(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_TempHealth() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_bLockTarget() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BarFading() {
    return (*(uint8_t*)((uintptr_t)this + 0x2eb + 0)) & 1 != 0;
}
float& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_TimeToFadeDeadBar() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_DarkBackingMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x328);
}
int32_t& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_NumberOfSwings() {
    return *(int32_t*)((uintptr_t)this + 0x2d8);
}
int32_t& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_KilledCount() {
    return *(int32_t*)((uintptr_t)this + 0x2e0);
}
int32_t& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_DeathCount() {
    return *(int32_t*)((uintptr_t)this + 0x2e4);
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_ShowGameStats() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e8 + 0)) & 1 != 0;
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_IsHealing() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e9 + 0)) & 1 != 0;
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_Boss() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ea + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_Boss(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ea + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ea + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_BarFading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2eb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2eb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::set_IsConstructed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_IsDamaged() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ed + 0)) & 1 != 0;
}
void* _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BossHealthColor() {
    return (void*)((uintptr_t)this + 0x2f0);
}
void* _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_ColorGreen() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_EnemyStaminaMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x318);
}
void* _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_TakingDamageEvent() {
    return (void*)((uintptr_t)this + 0x330);
}
bool _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::get_BlockIsVisible() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::ConstructButBetter() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::RoundCornersRedrawLarge() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::RedToGreen() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::GetBlockDelta() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::GetScalingScrollRate() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::RoundCornersRedrawSmall() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::GetHealthShadow() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::MaterialInstanceSetup() {
    return;
}
float _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::GetHealthBarPercentage() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::RemoveHealthbar() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::TakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::Initialize(void* BlockVisibility, _Script_RsGameTechRT::RsAICharacter* Character, bool IsBoss) {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::HideHealthBarPermanently() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::OnHUDVisibilityChanged(bool IsVisible) {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::OnPooledInit0() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::OnPooledRelease0() {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::ReInitialize(void* BlockVisibility, _Script_RsGameTechRT::RsAICharacter* Character, bool IsBoss) {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::ExecuteUbergraph_UI_HUD_EnemyHealth(int32_t EntryPoint) {
    return;
}
void _Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C::TakingDamageEvent__DelegateSignature() {
    return;
}
