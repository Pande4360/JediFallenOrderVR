#include "..\FUObjectArray.hpp"
#include "..\_Game_GlobalData_Economy_BPC_RewardComponent\BPC_RewardComponent_C.hpp"
#include "..\_Game_WorldInteracts_EventZones_Interact_Zone_Interact\Zone_Interact_C.hpp"
#include "BP_LooseRewardBase_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\ParticleSystem.hpp"
void* _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x418);
}
_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::get_BPC_RewardComponent() {
    return *(_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C**)((uintptr_t)this + 0x420);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/Rewards/BP_LooseRewardBase.BP_LooseRewardBase_C");
    return result;
}
_Script_Engine::ParticleSystem*& _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::get_RewardClaimedFX() {
    return *(_Script_Engine::ParticleSystem**)((uintptr_t)this + 0x428);
}
void _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::UserConstructionScript() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::AnimDone(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::Interacted0() {
    return;
}
void _Game_WorldInteracts_Rewards_BP_LooseRewardBase::BP_LooseRewardBase_C::ExecuteUbergraph_BP_LooseRewardBase(int32_t EntryPoint) {
    return;
}
