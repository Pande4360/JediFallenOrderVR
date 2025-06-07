#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GameplayTask.hpp"
#include "GameplayTask_ClaimResource.hpp"
_Script_CoreUObject::Class* _Script_GameplayTasks::GameplayTask_ClaimResource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GameplayTasks.GameplayTask_ClaimResource");
    return result;
}
_Script_GameplayTasks::GameplayTask_ClaimResource* _Script_GameplayTasks::GameplayTask_ClaimResource::ClaimResources(void* InTaskOwner, void* ResourceClasses, void* Priority, void* TaskInstanceName) {
    return;
}
_Script_GameplayTasks::GameplayTask_ClaimResource* _Script_GameplayTasks::GameplayTask_ClaimResource::ClaimResource(void* InTaskOwner, void* ResourceClass, void* Priority, void* TaskInstanceName) {
    return;
}
