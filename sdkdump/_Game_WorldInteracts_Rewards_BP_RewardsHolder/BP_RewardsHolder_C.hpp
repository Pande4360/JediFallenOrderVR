#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
struct BPC_RewardComponent_C;
}
namespace _Script_RsGameTechRT {
struct RsWorldMapCollectableComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Rewards_BP_RewardsHolder {
#pragma pack(push, 1)
struct BP_RewardsHolder_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated::Zone_Interact_Animated_C {
    private: char pad_4a8[0x58]; public:
    void* get_UberGraphFrame();
    _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& get_BPC_RewardComponent();
    _Script_RsGameTechRT::RsWorldMapCollectableComponent*& get_RsWorldMapCollectable();
    void* get_ChestID();
    void* get_ChestStruct();
    void* get_LVL_AcquireFanfareDone();
    static _Script_CoreUObject::Class* static_class();
    void GenerateNewID();
    void UserConstructionScript0();
    void GiveReward();
    void DoCosmeticTutorial(void* Cosmetic_Type);
    void DoReviveTutorial();
    void FanfareDone();
    void ExecuteUbergraph_BP_RewardsHolder(int32_t EntryPoint);
    void LVL_AcquireFanfareDone__DelegateSignature();
}; // Size: 0x500
#pragma pack(pop)
}
