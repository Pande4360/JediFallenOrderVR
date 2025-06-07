#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "BP_Hero_AttackDescription_Throw_C.hpp"
#include "..\_Game_Items_Lightsaber_BP_Lightsaber\BP_Lightsaber_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
#include "..\_Script_SwGame\SwLightsaberMovementComponent.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
int32_t& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::get_EnemiesKilled() {
    return *(int32_t*)((uintptr_t)this + 0x278);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x260);
}
_Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::get_ThrownLightsaber() {
    return *(_Game_Items_Lightsaber_BP_Lightsaber::BP_Lightsaber_C**)((uintptr_t)this + 0x268);
}
_Script_SwGame::SwLightsaberMovementComponent*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::get_SaberMovement() {
    return *(_Script_SwGame::SwLightsaberMovementComponent**)((uintptr_t)this + 0x270);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Throw.BP_Hero_AttackDescription_Throw_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::CombatNotify_Throw() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::CombatNotify_Catch() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::CountEnemiesKilled(_Script_RsGameTechRT::RsCharacter* CharacterKilled) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::ThrowReturn() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Throw::BP_Hero_AttackDescription_Throw_C::ExecuteUbergraph_BP_Hero_AttackDescription_Throw(int32_t EntryPoint) {
    return;
}
