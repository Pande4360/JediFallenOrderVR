#include "..\FUObjectArray.hpp"
#include "UI_HUD_BossMeter_C.hpp"
#include "..\_Game_UI_UI_HUD_EnemyHealth\UI_HUD_EnemyHealth_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsUiWindow.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\ProgressBar.hpp"
#include "..\_Script_UMG\TextBlock.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void* _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BossMeter() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x628);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_Intro() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x610);
}
_Script_UMG::TextBlock*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BossName() {
    return *(_Script_UMG::TextBlock**)((uintptr_t)this + 0x630);
}
_Script_CoreUObject::Class* _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_HUD_BossMeter.UI_HUD_BossMeter_C");
    return result;
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_RecoverHP() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x618);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_OnHit() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x620);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_Canvas_All() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x638);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_Canvas_Bars() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x640);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_DamageDelta() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x648);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_DrawLine() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x650);
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::Build() {
    return;
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_Glow() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x658);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_GreyFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x660);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_HealthBar() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x668);
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::set_IsBuildingIn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x691 + 0);
    *(uint8_t*)((uintptr_t)this + 0x691 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_UMG::ProgressBar*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_HealthFill() {
    return *(_Script_UMG::ProgressBar**)((uintptr_t)this + 0x670);
}
_Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_UI_HUD_EnemyHealth() {
    return *(_Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C**)((uintptr_t)this + 0x678);
}
float& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_ScalingScrollRate() {
    return *(float*)((uintptr_t)this + 0x680);
}
void* _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BossHealthColor() {
    return (void*)((uintptr_t)this + 0x6a4);
}
float& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BuildinHealth() {
    return *(float*)((uintptr_t)this + 0x684);
}
float& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BossHealth() {
    return *(float*)((uintptr_t)this + 0x688);
}
float& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BossShadow() {
    return *(float*)((uintptr_t)this + 0x68c);
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::Construct() {
    return;
}
bool _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_IsDamaged() {
    return (*(uint8_t*)((uintptr_t)this + 0x690 + 0)) & 1 != 0;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::set_IsDamaged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x690 + 0);
    *(uint8_t*)((uintptr_t)this + 0x690 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_IsBuildingIn() {
    return (*(uint8_t*)((uintptr_t)this + 0x691 + 0)) & 1 != 0;
}
void* _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_BossHealthShadowColor() {
    return (void*)((uintptr_t)this + 0x694);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_Health_Material() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x6b8);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_DamageShadowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x6c0);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_GlowMaterial() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x6c8);
}
_Script_RsGameTechRT::RsAICharacter*& _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::get_CharRef() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x6d0);
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::GetScalingScrollRate() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::GetBossHealthShadow() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::MaterialInstanceSetup() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::BossNameSelect() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::Tick(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::RemoveHealthbar() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::OnWindowOpened0() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::OnHUDVisibilityChanged(bool IsVisible) {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::TakingDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::BuildIn() {
    return;
}
void _Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C::ExecuteUbergraph_UI_HUD_BossMeter(int32_t EntryPoint) {
    return;
}
