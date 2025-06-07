#include "..\FUObjectArray.hpp"
#include "ST_HeroUpgradeDefinition.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Game_GlobalData_Progression_ST_HeroUpgradeDefinition::ST_HeroUpgradeDefinition::get_AmountPerUpgrade_46_4CF4B5DF46912389C9BB20BAE10D2338() {
    return *(float*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_GlobalData_Progression_ST_HeroUpgradeDefinition::ST_HeroUpgradeDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Progression/ST_HeroUpgradeDefinition.ST_HeroUpgradeDefinition");
    return result;
}
