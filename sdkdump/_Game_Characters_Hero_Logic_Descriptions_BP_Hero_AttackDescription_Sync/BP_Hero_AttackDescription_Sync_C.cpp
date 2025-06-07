#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic\BP_Hero_AttackDescription_Basic_C.hpp"
#include "BP_Hero_AttackDescription_Sync_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Sync.BP_Hero_AttackDescription_Sync_C");
    return result;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x270);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::CombatNotify_KillSyncTargetWithDeathAnim() {
    return;
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::get_SyncTarget() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x278);
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::get_SavedLightsaberType() {
    return (void*)((uintptr_t)this + 0x280);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::ExecuteUbergraph_BP_Hero_AttackDescription_Sync(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::CombatNotify_KillSyncTarget() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::Reset_Lightsaber_Type() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::CombatNotify_ResetToStaff() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Sync::BP_Hero_AttackDescription_Sync_C::CombatNotify_SwitchToSaber() {
    return;
}
