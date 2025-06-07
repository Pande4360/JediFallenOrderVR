#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AbilityData.hpp"
#include "RsAbility.hpp"
_Script_SwGame::RsAbility*& _Script_SwGame::AbilityData::get_Ability() {
    return *(_Script_SwGame::RsAbility**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::AbilityData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.AbilityData");
    return result;
}
