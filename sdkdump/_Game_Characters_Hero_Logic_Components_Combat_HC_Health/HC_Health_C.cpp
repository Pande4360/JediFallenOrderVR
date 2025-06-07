#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid\AB_BuddyDroid_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Health_C.hpp"
#include "..\_Game_Effects_Blueprints_BPFX_Damage\BPFX_Damage_C.hpp"
#include "..\_Game_Effects_Blueprints_BPFX_LowHP\BPFX_LowHP_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HUD_ROOT_Ref() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::ReceiveBeginPlay() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x190);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_healthOrb() {
    return *(float*)((uintptr_t)this + 0x198);
}
_Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_LowHealthFX() {
    return *(_Game_Effects_Blueprints_BPFX_LowHP::BPFX_LowHP_C**)((uintptr_t)this + 0x1d0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_LVL_HeroDying() {
    return (void*)((uintptr_t)this + 0x1c0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::OnGameStateChangedEvent_Event_0(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HeroAddHealth() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HeroReduceHealth() {
    return (void*)((uintptr_t)this + 0x1b0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_Damage_Taken() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_SFX_Player_Receive_Damage() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x1e0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HeroOnFireTime() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HeroBurningFXActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ec + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::set_HeroBurningFXActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_FX_Ref() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1f0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::StopHeal() {
    return;
}
_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_AB_BuddyDroid() {
    return *(_Game_Characters_BuddyDroid_01_Logic_AB_BuddyDroid::AB_BuddyDroid_C**)((uintptr_t)this + 0x1f8);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Health.HC_Health_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::set_DidHealDuringCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20c + 0);
    *(uint8_t*)((uintptr_t)this + 0x20c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_JediInCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x200 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::set_JediInCombat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x200 + 0);
    *(uint8_t*)((uintptr_t)this + 0x200 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HeroCurrentMaxHealth() {
    return *(float*)((uintptr_t)this + 0x204);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_HeroCurrentHealth() {
    return *(float*)((uintptr_t)this + 0x208);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_DidHealDuringCombat() {
    return (*(uint8_t*)((uintptr_t)this + 0x20c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::Set_Bracca_Mode(bool Set) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_OnTrueDeath() {
    return (void*)((uintptr_t)this + 0x210);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::LVL_HeroDying__DelegateSignature() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_DeathIsFallDeath() {
    return (*(uint8_t*)((uintptr_t)this + 0x220 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::HeroAddHealth__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::set_DeathIsFallDeath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x220 + 0);
    *(uint8_t*)((uintptr_t)this + 0x220 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_SetInvulnerabilityTimerHandle() {
    return (*(uint8_t*)((uintptr_t)this + 0x221 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::set_SetInvulnerabilityTimerHandle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x221 + 0);
    *(uint8_t*)((uintptr_t)this + 0x221 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::Revive() {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_DeathLocation() {
    return (void*)((uintptr_t)this + 0x224);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::PreHeal() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::CallTakeDamage(float Damage, _Script_Engine::DamageType* DamageType) {
    return;
}
_Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::get_DamagePostProcess() {
    return *(_Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C**)((uintptr_t)this + 0x230);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::Death() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::AddHealth(void* NewParam) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::OnDied(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::Heal() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::DoDamageAudio(_Script_Engine::DamageType* DamageType) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::TrueDeath() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::ExecuteUbergraph_HC_Health(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::OnTrueDeath__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Health::HC_Health_C::HeroReduceHealth__DelegateSignature(float DamageTaken) {
    return;
}
