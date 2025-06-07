#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Base_Reactions_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsReactionParameters.hpp"
_Script_Engine::ParticleSystemComponent*& _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::get_lightsaberHiltGround() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x1a0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::set_IsBlockBreak(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::get_Attacker() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x190);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::get_dmgCauser_REF() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x1a8);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::get_IsBlockBreak() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Base_Reactions.HC_Base_Reactions_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::NarrativeHealthCheck() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::PlayShockEffect(_Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::HandleOnTakeDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::GetReactionParametersFromDamageType(_Script_Engine::DamageType* DamageType, _Script_Engine::Actor* DamageCauser, _Script_RsGameTechRT::RsReactionParameters& ReactionParams) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::OnTakeDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::Base_Reaction_Properties() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::OnReaction(_Script_RsGameTechRT::RsReactionParameters& ReactionParameters) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::PostReaction(_Script_RsGameTechRT::RsReactionParameters& ReactionParameters, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::Handle_Flinch_Reaction(_Script_RsGameTechRT::RsReactionParameters Reaction) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Base_Reactions::HC_Base_Reactions_C::ExecuteUbergraph_HC_Base_Reactions(int32_t EntryPoint) {
    return;
}
