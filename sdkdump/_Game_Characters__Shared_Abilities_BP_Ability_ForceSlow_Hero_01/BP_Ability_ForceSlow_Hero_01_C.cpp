#include "..\FUObjectArray.hpp"
#include "BP_Ability_ForceSlow_Hero_01_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwForceSlowAbility.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_BP_Ability_ForceSlow_Hero_01::BP_Ability_ForceSlow_Hero_01_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/BP_Ability_ForceSlow_Hero_01.BP_Ability_ForceSlow_Hero_01_C");
    return result;
}
