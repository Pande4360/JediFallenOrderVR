#include "..\FUObjectArray.hpp"
#include "BP_AbilityEffect_ForceTelekinesis_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwForceTelekinesisAbilityEffect.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_Effects_BP_AbilityEffect_ForceTelekinesis_Hero::BP_AbilityEffect_ForceTelekinesis_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/Effects/BP_AbilityEffect_ForceTelekinesis_Hero.BP_AbilityEffect_ForceTelekinesis_Hero_C");
    return result;
}
