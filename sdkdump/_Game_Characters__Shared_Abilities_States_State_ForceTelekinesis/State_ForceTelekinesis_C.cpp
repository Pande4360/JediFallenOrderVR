#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "State_ForceTelekinesis_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\RsAbilityState.hpp"
void* _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x268);
}
void* _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::OnDefenseSuccess0(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser) {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x270);
}
void _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/States/State_ForceTelekinesis.State_ForceTelekinesis_C");
    return result;
}
void _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::OnNavStateChange(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForceTelekinesis::State_ForceTelekinesis_C::ExecuteUbergraph_State_ForceTelekinesis(int32_t EntryPoint) {
    return;
}
