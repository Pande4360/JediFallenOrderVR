#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Defense\HC_Defense_C.hpp"
#include "BP_Hero_RollEvadeDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwDefenseState.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::OnEndDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x130);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x138);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_RollEvadeDescription.BP_Hero_RollEvadeDescription_C");
    return result;
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::get_HeroDefenseComponent() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C**)((uintptr_t)this + 0x140);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::OnBeginDefense0(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_RollEvadeDescription::BP_Hero_RollEvadeDescription_C::ExecuteUbergraph_BP_Hero_RollEvadeDescription(int32_t EntryPoint) {
    return;
}
