#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "BP_Hero_AttackDescription_Heavy_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::set_HasCollided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x271 + 0);
    *(uint8_t*)((uintptr_t)this + 0x271 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x260);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_HasAttacked() {
    return (*(uint8_t*)((uintptr_t)this + 0x272 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_LeapTarget() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x268);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_AttackButtonReleased() {
    return (*(uint8_t*)((uintptr_t)this + 0x270 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::set_AttackButtonReleased(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x270 + 0);
    *(uint8_t*)((uintptr_t)this + 0x270 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::ExecuteUbergraph_BP_Hero_AttackDescription_Heavy(int32_t EntryPoint) {
    return;
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_HasCollided() {
    return (*(uint8_t*)((uintptr_t)this + 0x271 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::set_HasAttacked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x272 + 0);
    *(uint8_t*)((uintptr_t)this + 0x272 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_StartedLeap() {
    return (*(uint8_t*)((uintptr_t)this + 0x273 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::set_StartedLeap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x273 + 0);
    *(uint8_t*)((uintptr_t)this + 0x273 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::get_StartLocation() {
    return (void*)((uintptr_t)this + 0x274);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Heavy.BP_Hero_AttackDescription_Heavy_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::CombatNotify_Heavy_ReAcquire() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::CombatNotify_CheckHoldBranch() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Heavy::BP_Hero_AttackDescription_Heavy_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
