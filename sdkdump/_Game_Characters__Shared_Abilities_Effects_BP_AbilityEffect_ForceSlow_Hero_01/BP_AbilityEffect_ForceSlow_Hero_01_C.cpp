#include "..\FUObjectArray.hpp"
#include "BP_AbilityEffect_ForceSlow_Hero_01_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwForceSlowAbilityEffect.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_Effects_BP_AbilityEffect_ForceSlow_Hero_01::BP_AbilityEffect_ForceSlow_Hero_01_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/Effects/BP_AbilityEffect_ForceSlow_Hero_01.BP_AbilityEffect_ForceSlow_Hero_01_C");
    return result;
}
