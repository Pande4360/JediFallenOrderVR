#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAbilitySystemTask.hpp"
void* _Script_SwGame::RsAbilitySystemTask::get_AbilitySystemTaskType() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilitySystemTask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilitySystemTask");
    return result;
}
