#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic\BP_Hero_AttackDescription_Basic_C.hpp"
#include "BP_Hero_AttackDescription_Basic_Staff_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Staff::BP_Hero_AttackDescription_Basic_Staff_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Staff::BP_Hero_AttackDescription_Basic_Staff_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x270);
}
void* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Staff::BP_Hero_AttackDescription_Basic_Staff_C::get_DelayAttributeTag() {
    return (void*)((uintptr_t)this + 0x278);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Staff::BP_Hero_AttackDescription_Basic_Staff_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Basic_Staff.BP_Hero_AttackDescription_Basic_Staff_C");
    return result;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Staff::BP_Hero_AttackDescription_Basic_Staff_C::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Staff::BP_Hero_AttackDescription_Basic_Staff_C::ExecuteUbergraph_BP_Hero_AttackDescription_Basic_Staff(int32_t EntryPoint) {
    return;
}
