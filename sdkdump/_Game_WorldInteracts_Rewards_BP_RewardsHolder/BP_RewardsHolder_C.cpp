#include "..\FUObjectArray.hpp"
#include "..\_Game_GlobalData_Economy_BPC_RewardComponent\BPC_RewardComponent_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact_Animated\Zone_Interact_Animated_C.hpp"
#include "BP_RewardsHolder_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapCollectableComponent.hpp"
_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::get_BPC_RewardComponent() {
    return *(_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C**)((uintptr_t)this + 0x4b0);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x4a8);
}
_Script_RsGameTechRT::RsWorldMapCollectableComponent*& _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::get_RsWorldMapCollectable() {
    return *(_Script_RsGameTechRT::RsWorldMapCollectableComponent**)((uintptr_t)this + 0x4b8);
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::GenerateNewID() {
    return;
}
void* _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::get_ChestID() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::get_ChestStruct() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::get_LVL_AcquireFanfareDone() {
    return (void*)((uintptr_t)this + 0x4f0);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Rewards/BP_RewardsHolder.BP_RewardsHolder_C");
    return result;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::GiveReward() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::DoCosmeticTutorial(void* Cosmetic_Type) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::DoReviveTutorial() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::FanfareDone() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::ExecuteUbergraph_BP_RewardsHolder(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_RewardsHolder::BP_RewardsHolder_C::LVL_AcquireFanfareDone__DelegateSignature() {
    return;
}
