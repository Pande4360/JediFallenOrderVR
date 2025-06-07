#include "..\FUObjectArray.hpp"
#include "UI_DamageTakenEffect_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\MaterialInstanceDynamic.hpp"
#include "..\_Script_SlateCore\Geometry.hpp"
#include "..\_Script_UMG\CanvasPanel.hpp"
#include "..\_Script_UMG\Image.hpp"
#include "..\_Script_UMG\UserWidget.hpp"
#include "..\_Script_UMG\WidgetAnimation.hpp"
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::LoopCheck() {
    return;
}
int32_t& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_Loops() {
    return *(int32_t*)((uintptr_t)this + 0x240);
}
void* _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x208);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_LowHealth() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x210);
}
_Script_UMG::Image*& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_ScreenEffectMat() {
    return *(_Script_UMG::Image**)((uintptr_t)this + 0x228);
}
_Script_UMG::WidgetAnimation*& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_Hit() {
    return *(_Script_UMG::WidgetAnimation**)((uintptr_t)this + 0x218);
}
float& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_DamageMultiplier() {
    return *(float*)((uintptr_t)this + 0x230);
}
_Script_UMG::CanvasPanel*& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_CanvasPanel_0() {
    return *(_Script_UMG::CanvasPanel**)((uintptr_t)this + 0x220);
}
_Script_Engine::MaterialInstanceDynamic*& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_DynMat() {
    return *(_Script_Engine::MaterialInstanceDynamic**)((uintptr_t)this + 0x238);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_HUDRoot() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x248);
}
bool _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_LowHealthPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x250 + 0)) & 1 != 0;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::set_LowHealthPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x250 + 0);
    *(uint8_t*)((uintptr_t)this + 0x250 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_IsLowHealth() {
    return (*(uint8_t*)((uintptr_t)this + 0x251 + 0)) & 1 != 0;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::set_IsLowHealth(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x251 + 0);
    *(uint8_t*)((uintptr_t)this + 0x251 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_NewVar_0() {
    return (void*)((uintptr_t)this + 0x252);
}
bool _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::get_IsInClashSequeunce() {
    return (*(uint8_t*)((uintptr_t)this + 0x253 + 0)) & 1 != 0;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::set_IsInClashSequeunce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x253 + 0);
    *(uint8_t*)((uintptr_t)this + 0x253 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::CheckIfLowHealthStill1(bool& In_Combat_and_Low_Health) {
    return;
}
_Script_CoreUObject::Class* _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"WidgetBlueprintGeneratedClass /Game/UI/UI_DamageTakenEffect.UI_DamageTakenEffect_C");
    return result;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::Tick0(_Script_SlateCore::Geometry MyGeometry, float InDeltaTime) {
    return;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::ShowDamage(float Blend) {
    return;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::Repeat() {
    return;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::UpdateEffect() {
    return;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::Construct0() {
    return;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::FakeDamageFeedback(float DamageMultiplier) {
    return;
}
void _Game_UI_UI_DamageTakenEffect::UI_DamageTakenEffect_C::ExecuteUbergraph_UI_DamageTakenEffect(int32_t EntryPoint) {
    return;
}
