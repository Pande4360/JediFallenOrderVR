#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTasks {
struct GameplayTask;
}
namespace _Script_GameplayTasks {
#pragma pack(push, 1)
struct GameplayTasksComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x70]; public:
    bool get_bIsNetDirty();
    void set_bIsNetDirty(bool value);
    void* get_SimulatedTasks();
    void* get_TaskPriorityQueue();
    void* get_TickingTasks();
    void* get_KnownTasks();
    void* get_OnClaimedResourcesChange();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_SimulatedTasks();
    void* K2_RunGameplayTask(void* TaskOwner, _Script_GameplayTasks::GameplayTask* Task, void* Priority, void* AdditionalRequiredResources, void* AdditionalClaimedResources);
}; // Size: 0x1e0
#pragma pack(pop)
}
