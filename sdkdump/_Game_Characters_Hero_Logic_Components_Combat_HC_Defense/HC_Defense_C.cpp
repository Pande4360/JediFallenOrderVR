#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Defense_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimSequence.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "..\_Script_SwGame\SwProjectile.hpp"
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroDeflectProjectile() {
    return (void*)((uintptr_t)this + 0x1c8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_P_Lightsaber_MultiRelfect_REF() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x190);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroParrySuccess() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_blockBreakAttacker() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x1a8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroReflectProjectile() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_RandomlySelectedNarrativeSpeaker() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x1b0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroEnterBlock() {
    return (void*)((uintptr_t)this + 0x1d8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroExitBlock() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_DefenseType() {
    return (void*)((uintptr_t)this + 0x1f8);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ExecuteUbergraph_HC_Defense(int32_t EntryPoint) {
    return;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_BlockDepleteLevel() {
    return (void*)((uintptr_t)this + 0x1f9);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroBlockBroken() {
    return (void*)((uintptr_t)this + 0x200);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_blockReactionAttacker() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x210);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_LeftReflect() {
    return (*(uint8_t*)((uintptr_t)this + 0x218 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::set_LeftReflect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x218 + 0);
    *(uint8_t*)((uintptr_t)this + 0x218 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_parrySuccessAI() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x220);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroParryAttackWindowStart__DelegateSignature() {
    return;
}
int32_t& _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_ReflectCount() {
    return *(int32_t*)((uintptr_t)this + 0x228);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroParryAttackWindowStart() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroParryAttackWindowEnd() {
    return (void*)((uintptr_t)this + 0x240);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::get_HeroBlockSuccess() {
    return (void*)((uintptr_t)this + 0x250);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::BlockBreak(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_RsGameTechRT::RsHitEvent DefendedAttack) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Defense.HC_Defense_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroParryAttackWindowEnd__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::SpendParryBlockMeter(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_RsGameTechRT::RsHitEvent Hit_Event) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::DetermineParryForceRegain() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::DetermineHeavyBlockReaction() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::CanPlayBlockExitAnim() {
    return;
}
_Script_Engine::AnimMontage* _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::DetermineReflectAnimation(_Script_Engine::Actor* Projectile, void*& Description) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroEnterBlock__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::DetermineBlockEnter(_Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::AnimSequence*& BlockEnter) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::DetermineBlockReaction(_Script_RsGameTechRT::RsDamageParams Hit, _Script_RsGameTechRT::RsCharacter* Attacker, _Script_Engine::AnimSequence*& BlockReaction) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ProjectileReflection(_Script_SwGame::SwProjectile* Projectile, bool& HeroDefended, bool& Reflected) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroReflectProjectile__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::Block_Pressed() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ParrySuccess(_Script_RsGameTechRT::RsCharacter* AI, _Script_RsGameTechRT::RsDamageParams Hit, void* DefenseType) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::EnterBlock(bool SkipParryWindow, float BlendTime) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ReflectProjectile(_Script_SwGame::SwProjectile* BaseProjectile) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ParryForcePush() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::BlockAttack(_Script_RsGameTechRT::RsCharacter* AI, _Script_RsGameTechRT::RsDamageParams Hit) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::Block_Released() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::DeflectProjectile(_Script_SwGame::SwProjectile* BaseProjectile) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::SetUpBlock() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::CheckReturnToBlock(bool Override) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ClearOutBlock() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::ParryForcePull() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::On_Combat_State_Changed(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::EnterBlock_Staff(bool SkipParryWindow, float BlendTime) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::EnterBlock_Saber(bool Skip_Parry_Window, float Blend_Time) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::Exit_Block() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::On_Start_Block(_Script_RsGameTechRT::RsCharacter* Attacker) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroTookAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroBlockSuccess__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroBlockBroken__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroExitBlock__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroDeflectProjectile__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C::HeroParrySuccess__DelegateSignature(_Script_RsGameTechRT::RsCharacter* Parried_Character) {
    return;
}
