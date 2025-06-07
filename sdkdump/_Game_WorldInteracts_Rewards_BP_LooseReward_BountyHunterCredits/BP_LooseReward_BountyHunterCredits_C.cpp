#include "..\FUObjectArray.hpp"
#include "..\_Game_WorldInteracts_Rewards_BP_LooseRewardBase\BP_LooseRewardBase_C.hpp"
#include "BP_LooseReward_BountyHunterCredits_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
float& _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::get_BaseZ() {
    return *(float*)((uintptr_t)this + 0x440);
}
void* _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x430);
}
_Script_Engine::ParticleSystemComponent*& _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::get_ParticleSystem() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x438);
}
void _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::ReceiveBeginPlay() {
    return;
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Rewards/BP_LooseReward_BountyHunterCredits.BP_LooseReward_BountyHunterCredits_C");
    return result;
}
void _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_LooseReward_BountyHunterCredits::BP_LooseReward_BountyHunterCredits_C::ExecuteUbergraph_BP_LooseReward_BountyHunterCredits(int32_t EntryPoint) {
    return;
}
