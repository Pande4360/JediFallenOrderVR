#include "..\FUObjectArray.hpp"
#include "UI_HUD_HealthMeter_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\Border.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::HeroAddHealth() {
    return;
}
void* _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
bool _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_IsLowHealth() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a1 + 0)) & 1 != 0;
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealDelta() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x238);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_OnHit() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_LowHealth() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::MaterialInstanceSetup() {
    return;
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_Glow() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x228);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_DamageDelta() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x220);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealthBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x240);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_GreyFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x230);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2b8);
}
_Script_UMG::Border*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealthBorder() {
    return *(_Script_UMG::Border**)((uintptr_t)this + 0x248);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealthFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x250);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealthMeter() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x258);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_LowHealthBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x260);
}
float _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::GetHealth() {
    return;
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_LowHealthFlash() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x268);
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::EnterLowHealth__DelegateSignature() {
    return;
}
void* _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_Health() {
    return (void*)((uintptr_t)this + 0x270);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_ScrollRate() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_ScalingScrollRate() {
    return *(float*)((uintptr_t)this + 0x27c);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_HealthMeter.UI_HUD_HealthMeter_C");
    return result;
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_LowHealthAmt() {
    return *(float*)((uintptr_t)this + 0x280);
}
void* _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_EnterLowHealth() {
    return (void*)((uintptr_t)this + 0x2d8);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_PlayerHealth() {
    return *(float*)((uintptr_t)this + 0x284);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_PlayerHealthShadowLinearEase() {
    return *(float*)((uintptr_t)this + 0x288);
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::GetHealthShadow() {
    return;
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_PlayerHealthShadow() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_DamageTaken() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_StartHealth() {
    return *(float*)((uintptr_t)this + 0x294);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_EndHealth() {
    return *(float*)((uintptr_t)this + 0x298);
}
float& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_DamageDelayTime() {
    return *(float*)((uintptr_t)this + 0x29c);
}
bool _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_IsHealing() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a0 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::Construct0() {
    return;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::set_IsHealing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::set_IsLowHealth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::GetScalingScrollRate() {
    return;
}
bool _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_IsDamaged() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a2 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::set_IsDamaged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_HealthMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2a8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_DamageShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2b0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_LowHealthMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2c0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_LowHealthFlashMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2c8);
}
void* _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_ExitLowHealth() {
    return (void*)((uintptr_t)this + 0x2e8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::get_GlowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x2d0);
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::TakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::DamageInit() {
    return;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::ExecuteUbergraph_UI_HUD_HealthMeter(int32_t EntryPoint) {
    return;
}
void _Game_UI_UI_HUD_HealthMeter::UI_HUD_HealthMeter_C::ExitLowHealth__DelegateSignature() {
    return;
}
