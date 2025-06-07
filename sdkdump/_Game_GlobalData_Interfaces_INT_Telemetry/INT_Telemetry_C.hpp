#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_Interfaces_INT_Telemetry {
#pragma pack(push, 1)
struct INT_Telemetry_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void Telemetry_Bat_Boss(void* EventName, void* BossAction, int32_t FightNumber);
    void Telemetry_Initialize();
    void Telemetry_Revive(void* EventName, bool Acquired);
    void Telemetry_Mission(void* EventName, void* MissionKey, bool HasCompleted);
    void Telemetry_Collectible(void* EventName, void* String_ID);
    void Telemetry_Section_End(void* EventName);
    void Telemetry_ZTarget_AI(void* EventName, float ZTargetTime, _Script_Engine::Actor* AI);
    void Telemetry_ZTarget(void* EventName, float ZTargetTime, int32_t NumTargets);
    void Telemetry_AI(void* EventName, _Script_Engine::Actor* AI);
    void Telemetry(void* EventName);
}; // Size: 0x28
#pragma pack(pop)
}
