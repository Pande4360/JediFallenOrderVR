#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTask.hpp"
#include "GameplayTask_WaitDelay.hpp"
void* _Script_GameplayTasks::GameplayTask_WaitDelay::get_OnFinish() {
    return (void*)((uintptr_t)this + 0x68);
}
_Script_GameplayTasks::GameplayTask_WaitDelay* _Script_GameplayTasks::GameplayTask_WaitDelay::TaskWaitDelay(void* TaskOwner, float Time, void* Priority) {
    return;
}
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTask_WaitDelay::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTask_WaitDelay");
    return result;
}
