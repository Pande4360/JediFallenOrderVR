#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\CheatManager.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwCheatManager : public _Script_Engine::CheatManager {
    private: char pad_78[0x28]; public:
    void* get_DebugActorClass();
    void* get_PlayerControllerDebugComponentClasses();
    _Script_Engine::Actor*& get_DebugActorInstance();
    static _Script_CoreUObject::Class* static_class();
    void UnlockDatabank();
    void HubDebug();
    void AISleepAll();
    void AIReturnHomeAndGoToSleepAll();
    void AIGod();
    void AIAwakeAll();
}; // Size: 0xa0
#pragma pack(pop)
}
