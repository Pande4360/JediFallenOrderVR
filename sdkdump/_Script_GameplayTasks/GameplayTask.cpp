#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GameplayTask.hpp"
void* _Script_GameplayTasks::GameplayTask::get_InstanceName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_GameplayTasks::GameplayTask::get_ResourceOverlapPolicy() {
    return (void*)((uintptr_t)this + 0x3a);
}
_Script_GameplayTasks::GameplayTask*& _Script_GameplayTasks::GameplayTask::get_ChildTask() {
    return *(_Script_GameplayTasks::GameplayTask**)((uintptr_t)this + 0x60);
}
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTask");
    return result;
}
void _Script_GameplayTasks::GameplayTask::ReadyForActivation() {
    return;
}
void _Script_GameplayTasks::GameplayTask::EndTask() {
    return;
}
