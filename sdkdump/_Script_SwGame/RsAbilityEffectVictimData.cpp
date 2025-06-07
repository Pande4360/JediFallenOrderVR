#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsAbilityEffectVictimData.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityEffectVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityEffectVictimData");
    return result;
}
