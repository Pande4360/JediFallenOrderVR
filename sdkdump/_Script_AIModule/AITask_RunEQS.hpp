#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AITask.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
struct AIController;
}
namespace _Script_AIModule {
struct EnvQuery;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AITask_RunEQS : public AITask {
    private: char pad_70[0x78]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_AIModule::AITask_RunEQS* RunEQS(_Script_AIModule::AIController* Controller, _Script_AIModule::EnvQuery* QueryTemplate);
}; // Size: 0xe8
#pragma pack(pop)
}
