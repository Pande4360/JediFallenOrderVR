#include "..\FUObjectArray.hpp"
#include "BP_Ability_RadialForcePush_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_SwGame\SwRadialForcePushAbility.hpp"
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_BP_Ability_RadialForcePush_Hero::BP_Ability_RadialForcePush_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/BP_Ability_RadialForcePush_Hero.BP_Ability_RadialForcePush_Hero_C");
    return result;
}
