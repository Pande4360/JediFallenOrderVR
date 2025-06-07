#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsPinTelemetryBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void PinTelemetry_XPGained(float Amount);
    void PinTelemetry_SetEnabled(bool bEnabled);
    void PinTelemetry_ResumeGame();
    void PinTelemetry_PlayerKilledEnemy();
    void PinTelemetry_PlayerDied(_Script_Engine::Actor* KilledBy, void* PlayerWeaponType, int32_t NumRemainingHeals);
    void PinTelemetry_LeaveGame();
    bool PinTelemetry_IsEnabled();
    void PinTelemetry_FinishedGame();
    void PinTelemetry_BeginNewGame();
    void GetUserAgeGroup(_Script_CoreUObject::Object* WorldContextObject, void*& OutResult, _Script_Engine::LatentActionInfo LatentInfo);
}; // Size: 0x28
#pragma pack(pop)
}
