#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Revenge\HC_Revenge_C.hpp"
#include "UI_HUD_XP_HorizontalBar_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\BackgroundBlur.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\HorizontalBox.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\RetainerBox.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
_Script_UMG::RetainerBox*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_RetainerBox_0() {
    return *(_Script_UMG::RetainerBox**)((uintptr_t)this + 0x690);
}
void* _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_Revenge() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_HorizBottom() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x670);
}
float& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_ScalingScrollRate() {
    return *(float*)((uintptr_t)this + 0x700);
}
_Script_UMG::HorizontalBox*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_Popup() {
    return *(_Script_UMG::HorizontalBox**)((uintptr_t)this + 0x6e8);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::MaterialInstanceSetup() {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_NewSkillPointCelebration() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_ColorChange() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::BackgroundBlur*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_blurbox() {
    return *(_Script_UMG::BackgroundBlur**)((uintptr_t)this + 0x638);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_IsCatchingUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x761 + 0)) & 1 != 0;
}
float& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_ProgressPercent() {
    return *(float*)((uintptr_t)this + 0x6f0);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_HorizTop() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x678);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_Backing() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x630);
}
float& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_ProgressPercentOld() {
    return *(float*)((uintptr_t)this + 0x6f4);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_DummyBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x650);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_FadeInOut() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x628);
}
int32_t& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_UnspentForcePoints() {
    return *(int32_t*)((uintptr_t)this + 0x704);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_darken() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x640);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_XP_HorizontalBar.UI_HUD_XP_HorizontalBar_C");
    return result;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_Diagonal() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x648);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_IsTicking() {
    return (*(uint8_t*)((uintptr_t)this + 0x70c + 0)) & 1 != 0;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_EndcapLeft() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x658);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_GreyFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x660);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_HealthFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x668);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_Image_0() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x680);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_CircularOutlineMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x720);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_OrbitLine() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x688);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::GetScalingScrollRate() {
    return;
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_RevengeCanvas() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x698);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::ForcePointCheck() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_RingInner() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a0);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::StopAllTick() {
    return;
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_Strip() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6c0);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_RingMid() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6a8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_BarGlowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x728);
}
_Script_UMG::Image*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_RingOuter() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x6b0);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_IsRevengeXP() {
    return (*(uint8_t*)((uintptr_t)this + 0x760 + 0)) & 1 != 0;
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_SkillPointAmountText() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6b8);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_TxtAbility() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x6c8);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_IsResetZeroTicking() {
    return (*(uint8_t*)((uintptr_t)this + 0x70d + 0)) & 1 != 0;
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_Bar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6d0);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_DeltaBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6d8);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_Glow() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x6e0);
}
float& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_XP_Delta() {
    return *(float*)((uintptr_t)this + 0x6f8);
}
float& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0x6fc);
}
int32_t& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_UnspentForcePointsOld() {
    return *(int32_t*)((uintptr_t)this + 0x708);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::set_IsTicking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70c + 0);
    *(uint8_t*)((uintptr_t)this + 0x70c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::set_IsResetZeroTicking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70d + 0);
    *(uint8_t*)((uintptr_t)this + 0x70d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_InCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x70e + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::set_InCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70e + 0);
    *(uint8_t*)((uintptr_t)this + 0x70e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_PointAwarded() {
    return (*(uint8_t*)((uintptr_t)this + 0x70f + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::set_PointAwarded(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70f + 0);
    *(uint8_t*)((uintptr_t)this + 0x70f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_BarMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x710);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_CircularBackingMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x718);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_BarDeltaMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x730);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::GetXP_Delta() {
    return;
}
void* _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_TickXPHandle() {
    return (void*)((uintptr_t)this + 0x738);
}
void* _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_DeltaBarColor() {
    return (void*)((uintptr_t)this + 0x740);
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_HC_RevengeRef() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Revenge::HC_Revenge_C**)((uintptr_t)this + 0x750);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::get_BarDummyMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x758);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::set_IsRevengeXP(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x760 + 0);
    *(uint8_t*)((uintptr_t)this + 0x760 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::set_IsCatchingUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x761 + 0);
    *(uint8_t*)((uintptr_t)this + 0x761 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::AnimationCheck() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::GetXP() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::Construct() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::NewXPGain(bool IsRevenge) {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::ForcePointAwarded() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::FadeOut() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::ResetXPZero() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::ShowXPUI() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::HideXPUI() {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::ForcePointSpent(int32_t CurrentUnspentForcePoints) {
    return;
}
void _Game_UI_UI_HUD_XP_HorizontalBar::UI_HUD_XP_HorizontalBar_C::ExecuteUbergraph_UI_HUD_XP_HorizontalBar(int32_t EntryPoint) {
    return;
}
