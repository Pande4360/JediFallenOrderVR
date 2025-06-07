#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
namespace _Game_GlobalData_Economy_BPC_RewardComponent {
struct BPC_RewardComponent_C;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Game_WorldInteracts_Rewards_BP_LooseRewardBase {
#pragma pack(push, 1)
struct BP_LooseRewardBase_C : public _Game_WorldInteracts_EventZones_Interact_Zone_Interact::Zone_Interact_C {
    private: char pad_418[0x18]; public:
    void* get_UberGraphFrame0();
    _Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& get_BPC_RewardComponent();
    _Script_Engine::ParticleSystem*& get_RewardClaimedFX();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript();
    void AnimDone(_Script_Engine::AnimMontage* Montage, bool bInterrupted);
    void Interacted0();
    void ExecuteUbergraph_BP_LooseRewardBase(int32_t EntryPoint);
}; // Size: 0x430
#pragma pack(pop)
}
