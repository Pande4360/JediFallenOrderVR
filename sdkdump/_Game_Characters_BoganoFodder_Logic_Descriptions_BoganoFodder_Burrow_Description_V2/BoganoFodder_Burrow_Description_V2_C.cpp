#include "..\FUObjectArray.hpp"
#include "BoganoFodder_Burrow_Description_V2_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_BogFodder_Ref() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x260);
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_RealWaitTime() {
    return *(float*)((uintptr_t)this + 0x268);
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_WaitTime_Min() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_WaitTime_Max() {
    return *(float*)((uintptr_t)this + 0x270);
}
_Script_Engine::AnimMontage*& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_BurrowMont() {
    return *(_Script_Engine::AnimMontage**)((uintptr_t)this + 0x278);
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_HeightDiffMax() {
    return *(float*)((uintptr_t)this + 0x274);
}
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_WaitTimer() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_BurrowExit() {
    return (void*)((uintptr_t)this + 0x288);
}
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_StartLoc() {
    return (void*)((uintptr_t)this + 0x294);
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::Wait_Time_Over() {
    return;
}
float& _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_Z_Offset() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
void* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::get_BurrowParamName() {
    return (void*)((uintptr_t)this + 0x2a8);
}
_Script_CoreUObject::Class* _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/BoganoFodder/Logic/Descriptions/BoganoFodder_Burrow_Description_V2.BoganoFodder_Burrow_Description_V2_C");
    return result;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::FindBurrowExit(_Script_CoreUObject::Vector& ExitLoc) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::OnBeginAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::OnConnectedButDealtNoDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::Start_Wait_Timer() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::OnEndAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::OnAttackDefended0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacter* TheDefender, void* DefenseType, _Script_Engine::HitResult& HitSweep) {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::Pop_Custom_Motion_Parms() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::CombatNotify_StartWait() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::CombatNotify_CheckMotionParm() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::CombatNotify_DisablePullOut() {
    return;
}
void _Game_Characters_BoganoFodder_Logic_Descriptions_BoganoFodder_Burrow_Description_V2::BoganoFodder_Burrow_Description_V2_C::ExecuteUbergraph_BoganoFodder_Burrow_Description_V2(int32_t EntryPoint) {
    return;
}
