#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "BP_Hero_AttackDescription_DFA_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x260);
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::get_SavedLightsaberType() {
    return (void*)((uintptr_t)this + 0x270);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::get_Target() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_DFA.BP_Hero_AttackDescription_DFA_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::Reset_Lightsaber_Type() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::CombatNotify_ResetToStaff() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::CombatNotify_SwitchToSaber() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA::BP_Hero_AttackDescription_DFA_C::ExecuteUbergraph_BP_Hero_AttackDescription_DFA(int32_t EntryPoint) {
    return;
}
