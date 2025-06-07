#include "..\FUObjectArray.hpp"
#include "iHero_Combat_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\CombatAttackTableRow.hpp"
#include "..\_Script_SwGame\SwProjectile.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Interfaces/iHero_Combat.iHero_Combat_C");
    return result;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::ClearZTarget() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::KilledBountyHunter(_Script_Engine::Actor* KilledCharacter) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::GetCurrentCombatMontage(_Script_Engine::AnimMontage*& CombatMontage) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::Music_Set_World_State(void* WorldStateMusic) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::SetCurrentCombatMontage(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::RefillForceMeter() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::PlayHealingMontageOutro() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::GetCurrentCombatSequence(_Script_SwGame::CombatAttackTableRow& CombatSequence) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::SetCurrentCombatSequence(void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::ExecuteCombatSequence(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::clearSwordTrace() {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::getSwordTrace(_Script_Engine::Actor*& Target) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::ProjectileReflection(_Script_SwGame::SwProjectile* BaseProjectile, bool& HeroDefended, bool& Reflected) {
    return;
}
void _Game_Characters_Hero_Logic_Interfaces_iHero_Combat::iHero_Combat_C::ParryStart(_Script_Engine::Actor* AI) {
    return;
}
