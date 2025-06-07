#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "BP_Hero_AttackDescription_Switch_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch::BP_Hero_AttackDescription_Switch_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch::BP_Hero_AttackDescription_Switch_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch::BP_Hero_AttackDescription_Switch_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch::BP_Hero_AttackDescription_Switch_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x260);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch::BP_Hero_AttackDescription_Switch_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Switch.BP_Hero_AttackDescription_Switch_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Switch::BP_Hero_AttackDescription_Switch_C::ExecuteUbergraph_BP_Hero_AttackDescription_Switch(int32_t EntryPoint) {
    return;
}
