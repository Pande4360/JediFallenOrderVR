#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAbilitySystemTask.hpp"
#include "RsAbilityTask.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityTask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityTask");
    return result;
}
