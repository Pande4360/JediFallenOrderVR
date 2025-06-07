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
struct GameplayTask_TimeLimitedExecution : public GameplayTask {
    private: char pad_68[0x30]; public:
    void* get_OnFinished();
    void* get_OnTimeExpired();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
