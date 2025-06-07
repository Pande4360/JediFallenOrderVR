#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Rewards_BP_RewardsHolder\BP_RewardsHolder_C.hpp"
namespace _Script_RsGameTechRT {
struct RsWorldMapStateTransitionGatewayComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct ChildActorComponent;
}
namespace _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench {
struct BP_CustomizationWorkbench_C;
}
namespace _Script_Engine {
struct RsStreamingAreaPlayerStart;
}
namespace _Game_WorldInteracts_Rewards_BP_RewardsChest_StaffAcquire {
#pragma pack(push, 1)
struct BP_RewardsChest_StaffAcquire_C : public _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C {
    private: char pad_500[0x58]; public:
    void* get_UberGraphFrame0();
    _Script_RsGameTechRT::RsWorldMapStateTransitionGatewayComponent*& get_RsWorldMapStateTransitionGateway();
    _Script_Engine::ArrowComponent*& get_NewSyncSpot();
    _Script_Engine::ChildActorComponent*& get_BP_CustomizationWorkbench();
    _Script_Engine::RsStreamingAreaPlayerStart*& get_PlayerStart();
    _Game_WorldInteracts_LevelObjects_BP_CustomizationWorkbench::BP_CustomizationWorkbench_C*& get_CustomizationWorkbench();
    bool get_HideTempMesh();
    void set_HideTempMesh(bool value);
    bool get_AllRewardsAcquired();
    void set_AllRewardsAcquired(bool value);
    void* get_LVL_PlayCinematic();
    void* get_LVL_SkinUnlocked();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void GiveReward0();
    void AbilityAcquire_Done_Event_0();
    void ReceiveBeginPlay();
    void LVL_AcquireFanfare();
    void ContinueInteractSyncAnim();
    void DismissStaffTutorial();
    void ExecuteUbergraph_BP_RewardsChest_StaffAcquire(int32_t EntryPoint);
    void LVL_SkinUnlocked__DelegateSignature();
    void LVL_PlayCinematic__DelegateSignature();
}; // Size: 0x558
#pragma pack(pop)
}
