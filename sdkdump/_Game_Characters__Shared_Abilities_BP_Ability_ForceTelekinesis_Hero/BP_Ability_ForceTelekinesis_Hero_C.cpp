#include "..\FUObjectArray.hpp"
#include "BP_Ability_ForceTelekinesis_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwForceTelekinesisAbility.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_BP_Ability_ForceTelekinesis_Hero::BP_Ability_ForceTelekinesis_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/BP_Ability_ForceTelekinesis_Hero.BP_Ability_ForceTelekinesis_Hero_C");
    return result;
}
