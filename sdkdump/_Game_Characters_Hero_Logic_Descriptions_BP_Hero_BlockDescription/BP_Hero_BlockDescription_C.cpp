#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_Combat_HC_Defense\HC_Defense_C.hpp"
#include "BP_Hero_BlockDescription_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\SwPlayerDefenseState.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::OnBeginDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_BlockDescription.BP_Hero_BlockDescription_C");
    return result;
}
_Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::get_HC_Defense_REF() {
    return *(_Game_Characters_Hero_Logic_Components_Combat_HC_Defense::HC_Defense_C**)((uintptr_t)this + 0x1a8);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x1b0);
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::OnEndDefense(_Script_RsGameTechRT::RsCharacter* TheDefender) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::TickDefense(_Script_RsGameTechRT::RsCharacter* TheDefender, float DeltaTime) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_BlockDescription::BP_Hero_BlockDescription_C::ExecuteUbergraph_BP_Hero_BlockDescription(int32_t EntryPoint) {
    return;
}
