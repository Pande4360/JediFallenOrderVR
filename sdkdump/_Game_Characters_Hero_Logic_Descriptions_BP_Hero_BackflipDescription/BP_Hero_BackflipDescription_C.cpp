#include "..\FUObjectArray.hpp"
#include "BP_Hero_BackflipDescription_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription\BP_Hero_RollEvadeDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::OnTakeDamage(_Script_RsGameTechRT::RsCharacter* TheDefender, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_BackflipDescription.BP_Hero_BackflipDescription_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::ExecuteUbergraph_BP_Hero_BackflipDescription(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::CombatNotify_CheckForGround() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BackflipDescription::BP_Hero_BackflipDescription_C::CombatNotify_TransitionToFall() {
    return;
}
