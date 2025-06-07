#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "State_ForceSlow_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\RsAbilityState.hpp"
void* _Game_Characters__Shared_Abilities_States_State_ForceSlow::State_ForceSlow_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x268);
}
void _Game_Characters__Shared_Abilities_States_State_ForceSlow::State_ForceSlow_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForceSlow::State_ForceSlow_C::CombatNotify_EndForceSlowEarly() {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters__Shared_Abilities_States_State_ForceSlow::State_ForceSlow_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x270);
}
void _Game_Characters__Shared_Abilities_States_State_ForceSlow::State_ForceSlow_C::ExecuteUbergraph_State_ForceSlow(int32_t EntryPoint) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_States_State_ForceSlow::State_ForceSlow_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/States/State_ForceSlow.State_ForceSlow_C");
    return result;
}
