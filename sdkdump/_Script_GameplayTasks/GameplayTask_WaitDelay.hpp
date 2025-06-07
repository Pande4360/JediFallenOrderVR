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
struct GameplayTask_WaitDelay : public GameplayTask {
    private: char pad_68[0x18]; public:
    void* get_OnFinish();
    static _Script_CoreUObject::Class* static_class();
    _Script_GameplayTasks::GameplayTask_WaitDelay* TaskWaitDelay(void* TaskOwner, float Time, void* Priority);
}; // Size: 0x80
#pragma pack(pop)
}
