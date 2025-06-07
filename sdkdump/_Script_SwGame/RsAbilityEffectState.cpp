#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsCombatState.hpp"
#include "RsAbilityEffectState.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityEffectState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityEffectState");
    return result;
}
