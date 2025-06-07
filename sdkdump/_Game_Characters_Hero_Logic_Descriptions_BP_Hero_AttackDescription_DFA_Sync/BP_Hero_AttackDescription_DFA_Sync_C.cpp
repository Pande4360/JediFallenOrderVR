#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA\BP_Hero_AttackDescription_DFA_C.hpp"
#include "BP_Hero_AttackDescription_DFA_Sync_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::set_SyncStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x278);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::ExecuteUbergraph_BP_Hero_AttackDescription_DFA_Sync(int32_t EntryPoint) {
    return;
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::get_SyncStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::CombatNotify_KillSyncTarget() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_DFA_Sync.BP_Hero_AttackDescription_DFA_Sync_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_DFA_Sync::BP_Hero_AttackDescription_DFA_Sync_C::TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
