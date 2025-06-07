#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw\BP_Hero_AttackDescription_Throw_C.hpp"
#include "BP_Hero_AttackDescription_Throw_Twin_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Throw_Twin.BP_Hero_AttackDescription_Throw_Twin_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::set_Thrown(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x288 + 0);
    *(uint8_t*)((uintptr_t)this + 0x288 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x280);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::get_Thrown() {
    return (*(uint8_t*)((uintptr_t)this + 0x288 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::CombatNotify_ThrowTwin() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::Start_Catch_Twin() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::Clean_Up() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw_Twin::BP_Hero_AttackDescription_Throw_Twin_C::ExecuteUbergraph_BP_Hero_AttackDescription_Throw_Twin(int32_t EntryPoint) {
    return;
}
