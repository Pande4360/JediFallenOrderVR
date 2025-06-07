#include "..\FUObjectArray.hpp"
#include "Crab_RollAttackDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\SwAttackState.hpp"
void _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription::Crab_RollAttackDescription_C::TickAttack0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
void* _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription::Crab_RollAttackDescription_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x258);
}
_Script_CoreUObject::Class* _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription::Crab_RollAttackDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Crab00/Logic/Descriptions/Crab_RollAttackDescription.Crab_RollAttackDescription_C");
    return result;
}
void _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription::Crab_RollAttackDescription_C::OnConnectedButDealtNoDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription::Crab_RollAttackDescription_C::OnDealtAnyDamage0(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Crab00_Logic_Descriptions_Crab_RollAttackDescription::Crab_RollAttackDescription_C::ExecuteUbergraph_Crab_RollAttackDescription(int32_t EntryPoint) {
    return;
}
