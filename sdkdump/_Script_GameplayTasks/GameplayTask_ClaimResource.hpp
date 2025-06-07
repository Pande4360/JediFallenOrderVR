#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameplayTask.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTasks {
#pragma pack(push, 1)
struct GameplayTask_ClaimResource : public GameplayTask {
    static _Script_CoreUObject::Class* static_class();
    _Script_GameplayTasks::GameplayTask_ClaimResource* ClaimResources(void* InTaskOwner, void* ResourceClasses, void* Priority, void* TaskInstanceName);
    _Script_GameplayTasks::GameplayTask_ClaimResource* ClaimResource(void* InTaskOwner, void* ResourceClass, void* Priority, void* TaskInstanceName);
}; // Size: 0x68
#pragma pack(pop)
}
