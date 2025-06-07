#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilityEffectTask.hpp"
#include "RsAbilitySystemTask.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityEffectTask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityEffectTask");
    return result;
}
