#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "BP_Hero_AttackDescription_EvadeKick_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x260);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::get_AttackTarget() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x268);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_EvadeKick.BP_Hero_AttackDescription_EvadeKick_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_EvadeKick::BP_Hero_AttackDescription_EvadeKick_C::ExecuteUbergraph_BP_Hero_AttackDescription_EvadeKick(int32_t EntryPoint) {
    return;
}
