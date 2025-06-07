#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "RsAbilityWeightClassSettings.hpp"
void* _Script_SwGame::RsAbilityWeightClassSettings::get_WeightClassifications() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityWeightClassSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityWeightClassSettings");
    return result;
}
