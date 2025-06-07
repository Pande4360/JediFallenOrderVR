#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic\BP_Hero_AttackDescription_Basic_C.hpp"
#include "BP_Hero_AttackDescription_Basic_Saber_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
void _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Saber::BP_Hero_AttackDescription_Basic_Saber_C::OverrideAnimationData(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& CurrentAnimationData, _Script_RsGameTechRT::RsCharacterAnimationData& NewAnimationData) {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Descriptions_BP_Hero_AttackDescription_Basic_Saber::BP_Hero_AttackDescription_Basic_Saber_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Descriptions/BP_Hero_AttackDescription_Basic_Saber.BP_Hero_AttackDescription_Basic_Saber_C");
    return result;
}
