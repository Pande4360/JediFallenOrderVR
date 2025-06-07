#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTasks\GameplayTask.hpp"
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AITask : public _Script_GameplayTasks::GameplayTask {
    private: char pad_68[0x8]; public:
    _Script_AIModule::AIController*& get_OwnerController();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
