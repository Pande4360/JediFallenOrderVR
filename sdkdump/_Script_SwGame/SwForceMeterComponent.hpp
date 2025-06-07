#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForceMeterComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0xa0]; public:
    float& get_ShadowInterpMultiplier();
    float& get_MaxForceMeter();
    float& get_ForceRegenDelay();
    float& get_CurrentForceMeter();
    float& get_ForceRegenSpeed();
    float& get_ShadowTimeSpeedMultiplierOutOfCombat();
    void* get_OnForceMeterEmptied();
    void* get_OnForceMeterShadowTimeFinished();
    void* get_OnFailedToConsumeForce();
    bool get_bShouldMeterGoNegative();
    void set_bShouldMeterGoNegative(bool value);
    bool get_bInfiniteForceModifierActive();
    void set_bInfiniteForceModifierActive(bool value);
    void* get_ActiveForceUsageOverTime();
    static _Script_CoreUObject::Class* static_class();
    bool UnpauseTargetsRegen(_Script_Engine::Actor* Target);
    void UnpauseRegen();
    void UnpauseForceOverTime();
    void Unpause();
    bool StartConsumeForceOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName);
    void SetMaxForceMeter(float NewMaxForce, bool bShouldSetCurrentForceToMax);
    bool RestoreForce(_Script_Engine::Actor* Target, float AmountToRestore);
    bool PauseTargetsRegen(_Script_Engine::Actor* Target);
    void PauseRegen();
    void PauseForceOverTime();
    void Pause();
    void OnStartConsumeForceOverTime(void* ForceMeterRow, float ConsumptionRate);
    void OnConsumeForceImmediately(void* ForceMeterRow, float ConsumedForce, float ShadowTime);
    void OnCancelConsumeForceOverTime(void* ForceMeterRow);
    bool IsTargetsRegenPaused(_Script_Engine::Actor* Target);
    bool IsTargetsForceMeterEmpty(_Script_Engine::Actor* Target);
    bool IsRegenPaused();
    bool IsForceMeterEmpty();
    float GetLastShadowTime();
    bool ConsumeForceImmediately(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName);
    bool CanConsumeForceImmediately(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName, bool bShouldBroadcastFail);
    bool CancelConsumeForceOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName);
}; // Size: 0x210
#pragma pack(pop)
}
