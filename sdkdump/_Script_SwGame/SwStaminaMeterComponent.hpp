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
namespace _Script_RsGameTechRT {
struct RsHitEvent;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwStaminaMeterComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x80]; public:
    float& get_MaxStaminaMeter();
    float& get_StaminaRegenDelay();
    float& get_StaminaEmptiedRegenDelay();
    float& get_CurrentStaminaMeter();
    float& get_StaminaRegenSpeed();
    void* get_OnStaminaMeterEmptied();
    void* get_OnStaminaMeterShadowTimeFinished();
    void* get_ActiveStaminaUsageOverTime();
    float& get_OverrideStaminaRegenSpeed();
    static _Script_CoreUObject::Class* static_class();
    bool UnpauseTargetsRegen(_Script_Engine::Actor* Target);
    void UnpauseStaminaOverTime();
    void UnpauseRegen();
    void Unpause();
    bool StartConsumeStaminaOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName);
    void SetOverrideRegenSpeed(float OverrideRegenSpeed);
    void SetMaxStaminaMeter(float NewMaxStamina, bool bShouldSetCurrentStaminaToMax);
    bool RestoreStamina(_Script_Engine::Actor* Target, float AmountToRestore);
    void ResetOverrideRegenSpeed();
    bool PauseTargetsRegen(_Script_Engine::Actor* Target);
    void PauseStaminaOverTime();
    void PauseRegen();
    void Pause();
    void OnStartConsumeStaminaOverTime(void* StaminaMeterRow, float ConsumptionRate);
    void OnConsumeStaminaImmediately(void* StaminaMeterRow, float ConsumedStamina, float ShadowTime);
    void OnCancelConsumeStaminaOverTime(void* StaminaMeterRow);
    bool IsTargetsStaminaMeterEmpty(_Script_Engine::Actor* Target);
    bool IsTargetsRegenPaused(_Script_Engine::Actor* Target);
    bool IsStaminaMeterEmpty();
    bool IsRegenPaused();
    float GetLastShadowTime();
    bool ConsumeStaminaImmediately(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName);
    bool ConsumeStaminaForBlock(_Script_Engine::Actor* Target, _Script_RsGameTechRT::RsCharacter* Attacker, _Script_RsGameTechRT::RsHitEvent& HitEvent);
    bool CancelConsumeStaminaOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName);
}; // Size: 0x1f0
#pragma pack(pop)
}
