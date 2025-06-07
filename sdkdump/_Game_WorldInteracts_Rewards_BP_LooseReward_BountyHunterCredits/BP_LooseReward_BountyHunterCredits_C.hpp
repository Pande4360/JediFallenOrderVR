#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Game_WorldInteracts_Rewards_BP_LooseRewardBase\BP_LooseRewardBase_C.hpp"
namespace _Script_Engine {
struct ParticleSystemComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits {
#pragma pack(push, 1)
struct BP_LooseReward_BountyHunterCredits_C : public _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C {
    private: char pad_430[0x18]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ParticleSystemComponent*& get_ParticleSystem();
    float& get_BaseZ();
    static _Script_CoreUObject::Class* static_class();
    void UserConstructionScript0();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_LooseReward_BountyHunterCredits(int32_t EntryPoint);
}; // Size: 0x448
#pragma pack(pop)
}
