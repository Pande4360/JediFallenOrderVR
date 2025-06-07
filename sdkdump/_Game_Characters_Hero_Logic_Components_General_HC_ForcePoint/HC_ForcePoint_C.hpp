#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint {
#pragma pack(push, 1)
struct HC_ForcePoint_C : public _Script_Engine::ActorComponent {
    private: char pad_170[0x48]; public:
    void* get_UberGraphFrame();
    int32_t& get_TotalForcePointsEarned();
    int32_t& get_UnspentForcePoints();
    float& get_CurrentXPCollected();
    float& get_CurrentForcePointProgressPercentage();
    float& get_FirstForcePointXPCost();
    float& get_BaseForcePointXPCost();
    float& get_PerLevelForcePointCostMultiplier();
    bool get_freeAtks();
    void set_freeAtks(bool value);
    bool get_radialPush();
    void set_radialPush(bool value);
    void* get_ForcePointsUpdated();
    float& get_CombatXPBank();
    float& get_XPGainINTERNAL();
    float& get_NextPointXPCost();
    bool get_IsRevenge();
    void set_IsRevenge(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CalculatePercentageForcePtAwarded(float ForcePt_, float& XP_Awarded);
    void CollectLargeForce();
    void CollectTinyForce();
    void AddForcePoint();
    void AwardXP(float XP);
    void ReceiveBeginPlay0();
    void CollectSmallForce();
    void AwardForcePoints(float Points);
    void SpendForcePoints(int32_t Points);
    void OnCombatStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void AwardRevengeXP(float XP);
    void ResetCurrentXPZero();
    void Recalculate_Next_Point_Cost();
    void ExecuteUbergraph_HC_ForcePoint(int32_t EntryPoint);
    void ForcePointsUpdated__DelegateSignature(int32_t TotalForcePoints, float ForcePointProgress);
}; // Size: 0x1b8
#pragma pack(pop)
}
