#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTask.hpp"
#include "GameplayTask_TimeLimitedExecution.hpp"
void* _Script_GameplayTasks::GameplayTask_TimeLimitedExecution::get_OnFinished() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_GameplayTasks::GameplayTask_TimeLimitedExecution::get_OnTimeExpired() {
    return (void*)((uintptr_t)this + 0x78);
}
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTask_TimeLimitedExecution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution");
    return result;
}
