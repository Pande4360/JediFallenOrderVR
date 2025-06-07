#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SwGame\SwForceMeterComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
struct BP_SwPlayerState_C;
}
namespace _Game_UI_UI_HUD_ForceMeter {
struct UI_HUD_ForceMeter_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_Characters_Hero_Logic_Components_ForceAbilities_HC_ForceUsage {
#pragma pack(push, 1)
struct HC_ForceUsage_C : public _Script_SwGame::SwForceMeterComponent {
    private: char pad_210[0x50]; public:
    void* get_UberGraphFrame();
    int32_t& get_ForceMeterLevel();
    _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& get_PlayerState();
    float& get_OutOfCombatRegenSpeed();
    float& get_CombatRegenSpeed();
    void* get_CombatRegenTickHandle();
    float& get_CombatRegenMax();
    void* get_OnForceConsumed();
    bool get_DEBUGInfiniteForce();
    void set_DEBUGInfiniteForce(bool value);
    _Game_UI_UI_HUD_ForceMeter::UI_HUD_ForceMeter_C*& get_UI_ForceMeter();
    static _Script_CoreUObject::Class* static_class();
    void CheckAndSetPlayerState();
    void RegainForce(void* RowName, float Override_Value);
    void ReceiveTick(float DeltaSeconds);
    void UpgradeForceMeter();
    void SetForceMeterLevel(int32_t New_Level, bool DebugOnly);
    void OnConsumeForceImmediately0(void* ForceMeterRow, float ConsumedForce, float ShadowTime);
    void ReceiveBeginPlay();
    void Set_Unlimited_Force_Mode(bool Unlimited);
    void RefillForceMeter();
    void DecreaseForceMeter();
    void Failed_Force_Usage();
    void RestoreForceMeterLevel();
    void Game_State_Changed(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void Gain_Force_Amount(void* Row_Name);
    void ForceMeterEmptiedTutorial(void* ResponsibleForceName, float TimeUntilForceRegen);
    void UpdateDifficultySettings();
    void CombatRegenTick();
    void DebugToggleInfiniteForce();
    void UnlockAboveThreshold();
    void UnlockBelowThreshold();
    void RefreshMaxForceMeter();
    void ExecuteUbergraph_HC_ForceUsage(int32_t EntryPoint);
    void OnForceConsumed__DelegateSignature();
}; // Size: 0x260
#pragma pack(pop)
}
