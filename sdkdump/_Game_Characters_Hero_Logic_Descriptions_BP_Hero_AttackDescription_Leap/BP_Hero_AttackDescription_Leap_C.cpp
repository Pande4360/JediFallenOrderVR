#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "BP_Hero_AttackDescription_Leap_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\R4PlayerController.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::set_HasAttacked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x269 + 0);
    *(uint8_t*)((uintptr_t)this + 0x269 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_HasCollided() {
    return (*(uint8_t*)((uintptr_t)this + 0x268 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_SwGame::R4PlayerController*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_PlayerController() {
    return *(_Script_SwGame::R4PlayerController**)((uintptr_t)this + 0x278);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_BP_Hero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x260);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_HasAttacked() {
    return (*(uint8_t*)((uintptr_t)this + 0x269 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::set_HasCollided(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x268 + 0);
    *(uint8_t*)((uintptr_t)this + 0x268 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_Attack_Target() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x270);
}
bool _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::get_CanRotate() {
    return (*(uint8_t*)((uintptr_t)this + 0x280 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::set_CanRotate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x280 + 0);
    *(uint8_t*)((uintptr_t)this + 0x280 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Leap.BP_Hero_AttackDescription_Leap_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::CombatNotify_AllowAim() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::CombatNotify_StartTracking() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::CombatNotify_StopTracking() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::CombatNotify_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Leap::BP_Hero_AttackDescription_Leap_C::ExecuteUbergraph_BP_Hero_AttackDescription_Leap(int32_t EntryPoint) {
    return;
}
