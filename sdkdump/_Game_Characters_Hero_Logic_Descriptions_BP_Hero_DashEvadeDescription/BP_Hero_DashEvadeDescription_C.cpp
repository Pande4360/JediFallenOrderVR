#include "..\FUObjectArray.hpp"
#include "BP_Hero_DashEvadeDescription_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription\BP_Hero_RollEvadeDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x148);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_DashEvadeDescription.BP_Hero_DashEvadeDescription_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::OnDefenseSuccess(_Script_RsGameTechRT::RsCharacter* TheDefender, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_RsGameTechRT::RsCharacter* AttackingCharacter, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::CheckEvadeAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_DashEvadeDescription::BP_Hero_DashEvadeDescription_C::ExecuteUbergraph_BP_Hero_DashEvadeDescription(int32_t EntryPoint) {
    return;
}
